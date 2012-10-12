import cgi
import webapp2
import os
import re
from string import letters
from google.appengine.ext import db

# pip-python install --upgrade Jinja2
import jinja2


template_dir = os.path.join(os.path.dirname(__file__), 'templates')
jinja_env = jinja2.Environment(loader = jinja2.FileSystemLoader(template_dir), 
                                            autoescape = True)          # <-- automated escaping of parameters passed to the template
                                                                        

i = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"              # <-- Do not change punctuation and white spaces
o = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"              # <-- Preserve the case

#----------------------------------------------------------------------
# VIDEO URL Handlers
#----------------------------------------------------------------------

def render_str(template, **params):
    t = jinja_env.get_template(template)
    return t.render(params)

class BaseHandler(webapp2.RequestHandler):                              # <-- Convenience functions
    def render(self, template, **kw):
        self.response.out.write(render_str(template, **kw))

    def write(self, *a, **kw):
        self.response.out.write(*a, **kw)

class Rot13Handler(BaseHandler):

    def get(self):
        self.render('rot13-form.html')                                  # <-- call convenience function

    def post(self):
        rot13 = ''
        text = self.request.get('text')
        if text:
            rot13 = text.encode('rot13')                                # <-- Use standard encode() method instead of custom method

        self.render('rot13-form.html', text = rot13)
        


#----------------------------------------------------------------------
url_mapping = [('/', Rot13Handler), ('/unit2/rot13', Rot13Handler)] 	
app = webapp2.WSGIApplication(url_mapping , debug=True)
