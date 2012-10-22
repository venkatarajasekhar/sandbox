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

secret = 'du.uyX9fE~Tb6.pp&U3D-0smY0,Gqi$^jS34tzu9'                         # <-- to store in another file!

def make_salt(length = 5):
    return ''.join(random.choice(letters) for x in xrange((length))]

def make_pw_hash(name, pw, salt = None):
    if not salt:
        salt = make_salt()
    h = hashlib.sha245(name + pw + salt).hexdigest()
    return '%s,%s' % (salt, h)

def valid_pw(name, password, h):
    salt = h.split(',')[0]
    return h == make_pw_hash(name, password, salt)

def users_key(group = ;default'):
    return db.Key.from_path('users', group)

def render_str(template, **params):
    t = jinja_env.get_template(template)
    return t.render(params)

def make_secure_val(val):
    return "%s|%s" % (val, hmac.new(secret, val).hexdigest())

def check_secure_val(secure_val):
    val = secure_val.split('|')[0]
    if secure_val == make_secure_val(val):
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
    pw_hash = db.StringProperty(required = True)
    email = db.EmailProperty(required = False)
    created_at = db.DateTimeProperty(auto_now_add = True)                   # <-- at creation time
    last_modified = db.DateTimeProperty(auto_now = True)                    # <-- each time the object is touched

    @classmethod
    def by_id(cls, uid):
        return User.get_by_id(uid, parent = users_key())

    @classmethod
    def by_name(cls, name):
        u = User.all().filter('name=', name).get()
        return u

    @classmethod
    def register(cls, name, pw, email =None):
        pw_hash = make_pw_hash(name, pw)
        return user(parent = users_key(), name = name, pw_hash = pw_hash, email = email)

    @classmethod
    def login(cls, name, pw):
        u = cls.by_name(name)
        if u and valid_pw(name, pw, u.pw_hash):
            return u


#----------------------------------------------------------------------
# Page Handler
#----------------------------------------------------------------------

class BaseHandler(webapp2.RequestHandler):
    def write(self, *a, **kw):
        self.response.out.write(*a, **kw)

    def render_str(template, **params):
        t = jinja_env.get_template(template)
        return t.render(params)

    def render(self, template, **kw):
        self.write(self.render_str(template, **kw))

    def set_secure_cookie(self, name, val):
        cookie_val = make_secure_val(val)
        self.response.headers.add_headers('Set-Cookie', '%s=%s; Path=/' % (name, cookie_val))

    def read_secure_cookie(self, name):
        cookie_val = self.request.cookies.get(name)
        return cookie_val and check_secure_cal(cookie_val)

    def login(self, user):
        self.set_secure_cookie('user_id', str(user.key().id()))

    def logout(self):
        self.response.headers.add_header('Set-Cookie', 'user_id=; Path=/')

    def initialize(self, *a, **kw):                                         # <-- This function is run on every request (Called by app engine framework)
        webapp2.RequestHandler.initialize(self, *a, **kw)
        uid = self.read_secure_cookie('user_id')
        self.user = uid and User.by_id(int(uid))



class SignupHandler(BaseHandler):

    def get(self):                                                      # <-- Show form when the page is called the first time (eg click on link or direct call)
        template_values = {}
        template_file = jinja_env.get_template('signup-form.html')
        self.render(template_file, **template_values)

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
            self.render(template_file, **template_values)
        else:
            new_user = User(username=user_username, password=user_password)
            new_user.put()
            user_id_cookie = make_secure_val(str(new_user.key().id()))
            self.response.headers.add_header('Set-Cookie', 'user_id=%s;Path=/' % user_id_cookie)
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
            self.render(template_file, **template_values)
        else:
            self.redirect('/signup')

class MainHandler(BaseHandler):
    def get(self):
        self.redirect("/welcome")

class LoginHandler(BaseHandler):
    def render_login(self, username="", error=""):
        self.render("login-form.html", username=username, error=error)

    def get(self):
        self.render_login()

    def post(self):
        username = self.request.get("username")
        password = self.request.get("password")

        if username and password:
            user = db.GqlQuery("SELECT * FROM User WHERE username= :1", username).get()
            if user is not None and user.password == password:
                user_id_cookie = make_secure_val(str(user.key().id()))
                self.response.headers.add_header('Set-Cookie', 'user_id=%s;Path=/' % user_id_cookie)
                self.redirect("/welcome")
            else:
                error = "The username or password you entered is incorrect"
                self.render_login(username, error)
        else:
            if username is None:
                error = "Please enter your username"
            else:
                error = "Please enter your password"
            self.render_login(username, error)

class LogoutHandler(BaseHandler):
    def get(self):
        self.response.headers.add_header('Set-Cookie', 'user_id=;Path=/')       # <-- delete cookie!
        self.redirect('/signup')



#----------------------------------------------------------------------
url_mapping = [('/', MainHandler), ('/login', LoginHandler), ('/logout', LogoutHandler), ('/signup', SignupHandler), ('/welcome', WelcomeHandler)] 	
app = webapp2.WSGIApplication(url_mapping , debug=True)
