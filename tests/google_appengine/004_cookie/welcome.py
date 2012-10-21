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

class WelcomeHandler(webapp2.RequestHandler):
    def get(self):
        username = self.request.cookies.get('username')

        if username is None:
            self.redirect('/signup')

        if 

        template_values = {'username': user_username}
        template_file = jinja_env.get_template('signup-welcome.html')
        self.response.out.write(template_file.render(template_values))


#----------------------------------------------------------------------
url_mapping = [('/', SignupHandler), ('/signup', SignupHandler), ('/welcome', WelcomeHandler)] 	
app = webapp2.WSGIApplication(url_mapping , debug=True)
