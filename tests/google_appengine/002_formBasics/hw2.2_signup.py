import cgi
import webapp2
import os
import re
from string import letters
from google.appengine.ext import db

# pip-python install --upgrade Jinja2
import jinja2


template_dir = os.path.join(os.path.dirname(__file__), 'templates')
jinja_env = jinja2.Environment(loader = jinja2.FileSystemLoader(template_dir), autoescape = True)

USER_RE = re.compile(r"^[a-zA-Z0-9_-]{3,20}$")
PASSWORD_RE = re.compile(r"^.{3,20}$")
EMAIL_RE = re.compile(r"^[\S]+@[\S]+\.[\S]+$")

def valid_username(username):
    return USER_RE.match(username)
    

def valid_password(password):
    return PASSWORD_RE.match(password)

def valid_email(email):
    return EMAIL_RE.match(email)

#----------------------------------------------------------------------
# VIDEO URL Handlers
#----------------------------------------------------------------------

class SignupHandler(webapp2.RequestHandler):

    def get(self):
        template_values = {}
        template = jinja_env.get_template('signup-form.html')
        self.response.out.write(template.render(template_values))

    def post(self):
        user_username = self.request.get('username')
        user_password = self.request.get('password')
        user_verify = self.request.get('verify')
        user_email = self.request.get('email')

        template_values = {}


        reask = False
        if not valid_password(user_password):
            template_values['password_error'] = "That wasn't a valid password."
            reask = True

        if user_password != user_verify :
            template_values['verify_error'] = "Passwords do not match"
            reask = True

        if not valid_username(user_username): 
            template_values['username_error'] = "That wasn't a valid username."
            reask = True

        if not valid_email(user_email): 
            template_values['email_error'] = "That wasn't a valid email."
            reask = True

        if reask :
            template_values['username'] = user_username
            template_values['email'] = user_email
            template = jinja_env.get_template('signup-form.html')
            self.response.out.write(template.render(template_values))
        else:
            self.redirect("/unit2/welcome?username=%s" % user_username)

class WelcomeHandler(webapp2.RequestHandler):
    def get(self):
        user_username = self.request.get('username')

        template_values = {'username': user_username}
        template = jinja_env.get_template('signup-welcome.html')
        self.response.out.write(template.render(template_values))


#----------------------------------------------------------------------
url_mapping = [('/', SignupHandler), ('/unit2/signup', SignupHandler), ('/unit2/welcome', WelcomeHandler)] 	
app = webapp2.WSGIApplication(url_mapping , debug=True)
