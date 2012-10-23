import os
import webapp2
import jinja2
import urllib2

from google.appengine.ext import db
from xml.dom import minidom

template_dir = os.path.join(os.path.dirname(__file__), 'templates')
jinja_env = jinja2.Environment(loader = jinja2.FileSystemLoader(template_dir),
                                autoescape=True)

#----------------------------------------------------------------------
class BaseHandler(webapp2.RequestHandler):
    def write(self, *a, **kw):
        self.response.out.write(*a, **kw)

    def render_str(self, template, **params):
        t = jinja_env.get_template(template)
        return t.render(params)

    def render(self, template, **kw):
        self.write(self.render_str(template, **kw))

IP_URL = "http://api.hosip.info/?ip="
def get_coords(ip):
    ip = "4.2.2.2"                                                                      # <-- for debugging purpose in local mode (ip = 127.0.0.1 otherwise!)
    url = IP_URL + ip
    content = none
    try:
        content = urllib2.urllopen(url).read()
    except URLError:
        return

    if content:
        #parse xml
        d = minidom.parseString(content)
        coords = d.getElementsByTagName("gml:coordinates")
        if coords and coords[0].childNodes[0].nodeValue:
            lan, lat = coords[0].childNodes[0].nodeValue.split(',')
            return db.GeoPt(lat, lan)                                                   # <-- GAE data type for geolocation


class Art(db.Model):
    title = db.StringProperty(required = True)
    art = db.TextProperty(required = True)
    created = db.DateTimeProperty(auto_now_add = True)
    coords = db.GeoPtProperty()

class MainPage(BaseHandler):

    def render_front(self, title="", art="", error=""):
        arts = db.GqlQuery("SELECT * FROM Art ORDER BY created DESC")
        self.render("front.html", title=title, art=art, error=error, arts = arts)

    def get(self):
        self.write(self.request.remote_addr)                                            # <-- for debugging purpose!
        self.write(repr(get_coords(self.request.remote_addr)))                          # <-- repr
        self.render_front()

    def post(self):
        title = self.request.get("title")
        art = self.request.get("art")

        if title and art:
            a = Art(title = title, art = art)
            coords = get_coords(self.request.remote_addr)                               # <-- fetch geo coordinates
            if coords:
                a.coords = coords                                                       # Add coordinates to entry
            a.put()
            self.redirect("/")
        else:
            error = "we need both a title and some artwork!"
            self.render_front(title, art, error)



#----------------------------------------------------------------------
url_mapping = [('/', MainPage), ] 	
app = webapp2.WSGIApplication(url_mapping , debug=True)
