import cgi
import hashlib
import hmac
import os
import re
import webapp2
from string import letters
from google.appengine.ext import db

# pip-python install --upgrade Jinja2
import jinja2


template_dir = os.path.join(os.path.dirname(__file__), 'templates')
jinja_env = jinja2.Environment(loader = jinja2.FileSystemLoader(template_dir), autoescape = True)



def hash_str(s):
    return hashlib.md5(s).hexdigest()               # <-- Hash-based message Autherntication Code (HMAC) is better than md5

def make_secure_val(s):
    return "%s|%s" % (s, hash_str(s))               # <-- need a secret

def check_secure_val(h):
    val = h.split('|')[0]
    if h == make_secure_val(val):
        return val 

USER_RE = re.compile(r"^[a-zA-Z0-9_-]{3,20}$")
def valid_username(username):
    return USER_RE.match(username)                                          # <-- returns username or None!
    
PASSWORD_RE = re.compile(r"^.{3,20}$")
def valid_password(password):
    return PASSWORD_RE.match(password)

EMAIL_RE = re.compile(r"^[\S]+@[\S]+\.[\S]+$")
def valid_email(email):
    return not email or EMAIL_RE.match(email)                               # <-- email field is optional

def existing_username(username):
    user = db.GqlQuery("SELECT * FROM User WHERE username= :1", username).get()
    return user != None 

#----------------------------------------------------------------------
# Database object
#----------------------------------------------------------------------

class User(db.Model):
    username = db.StringProperty(required = True)
    password = db.StringProperty(required = True)
    created_at = db.DateTimeProperty(auto_now_add = True)           # <-- at creation time
    last_modified = db.DateTimeProperty(auto_now = True)            # <-- each time the object is touched


#----------------------------------------------------------------------
# Page Handler
#----------------------------------------------------------------------

class BaseHandler(webapp2.RequestHandler):
    pass


class SignupHandler(BaseHandler):

    def get(self):                                                      # <-- Show form when the page is called the first time (eg click on link or direct call)
        template_values = {}
        template_file = jinja_env.get_template('signup-form.html')
        self.response.out.write(template_file.render(template_values))

    def post(self):                                                     # <-- Used when the form is submitted
        user_username = self.request.get('username')
        user_password = self.request.get('password')
        user_verify = self.request.get('verify')
        user_email = self.request.get('email')

        template_values = {}


        reask = False
        if not valid_username(user_username): 
            template_values['username_error'] = "That wasn't a valid username."
            reask = True

        if existing_username(user_username):
            template_values['username_error'] = "Username already in use."
            reask = True

        if not valid_password(user_password):
            template_values['password_error'] = "That wasn't a valid password."
            reask = True

        if user_password != user_verify :
            template_values['verify_error'] = "Passwords do not match"
            reask = True


        if not valid_email(user_email): 
            template_values['email_error'] = "That wasn't a valid email."
            reask = True

        if reask :
            template_values['username'] = user_username
            template_values['email'] = user_email
            template_file = jinja_env.get_template('signup-form.html')
            self.response.out.write(template_file.render(template_values))
        else:
            new_user = User(username=user_username, password=user_password)
            new_user.put()
            new_user_id_cookie = make_secure_val(str(new_user.key().id()))
            self.response.headers.add_header('Set-Cookie', 'user_id=%s;Path=/' % new_user_id_cookie)
            self.redirect("/welcome")

class WelcomeHandler(BaseHandler):
    def get(self):
        user_id_cookie_str = self.request.cookies.get('user_id')
        if user_id_cookie_str:
            user_id = check_secure_val(user_id_cookie_str)
        else:
            user_id = None 

        if user_id is not None:
            cur_user = User.get_by_id(int(user_id))
            username = cur_user.username
            template_values = {'username': username}
            template_file = jinja_env.get_template('welcome.html')
            self.response.out.write(template_file.render(template_values))
        else:
            self.redirect('/signup')

class MainHandler(BaseHandler):
    def get(self):
        self.redirect("/welcome")


#----------------------------------------------------------------------
url_mapping = [('/', MainHandler), ('/signup', SignupHandler), ('/welcome', WelcomeHandler)] 	
app = webapp2.WSGIApplication(url_mapping , debug=True)
