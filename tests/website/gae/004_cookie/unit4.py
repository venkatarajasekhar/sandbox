import os
import webapp2
import jinja2
import hashlib

from google.appengine.ext import db

template_dir = os.path.join(os.path.dirname(__file__), 'templates')
jinja_env = jinja2.Environment(loader = jinja2.FileSystemLoader(template_dir),
                                autoescape=True)

def hash_str(s):
    
    return hashlib.md5(s).hexdigest()               # <-- Hash-based message Autherntication Code (HMAC) is better than md5

def make_secure_val(s):
    return "%s|%s" % (s, hash_str(s))               # <-- need a secret

def check_secure_val(h):
    val = h.split('|')[0]
    if h == make_secure_val(val):
        return val
        


#----------------------------------------------------------------------
class BaseHandler(webapp2.RequestHandler):
    def write(self, *a, **kw):
        self.response.out.write(*a, **kw)

    def render_str(self, template, **params):
        t = jinja_env.get_template(template)
        return t.render(params)

    def render(self, template, **kw):
        self.write(self.render_str(template, **kw))

class Art(db.Model):
    title = db.StringProperty(required = True)
    art = db.TextProperty(required = True)
    created = db.DateTimeProperty(auto_now_add = True)

class MainPage(BaseHandler):

    def get(self):
        self.response.headers['Content-Type'] = 'text/plain'
        visits = 0
        visit_cookie_str = self.request.cookies.get('visits')
        if visit_cookie_str:
            cookie_val = check_secure_val(visit_cookie_str)
            if cookie_val:
                visits = int(cookie_val)

        visits += 1

        new_cookie = make_secure_val(str(visits))
                
        self.response.headers.add_header('Set-Cookie', 'visits=%s' % new_cookie)

        if visits > 10 :
            self.write("You are the best ever!")
        else:
            self.write("You've been here %s times!" % visits)



#----------------------------------------------------------------------
url_mapping = [('/', MainPage), ] 	
app = webapp2.WSGIApplication(url_mapping , debug=True)
