import os
import webapp2
import jinja2

from google.appengine.ext import db

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

class Post(db.Model):
    subject = db.StringProperty(required = True)
    content = db.TextProperty(required = True)
    created_at = db.DateTimeProperty(auto_now_add = True)

class Permalink(BaseHandler):

    def get(self, post_id):
        s = Post.get_by_id(int(post_id))
        self.render("posts.html", posts=[s])

class NewPost(BaseHandler):

    def render_newpost(self, subject="", content="", error=""):
        self.render("newpost.html", subject=subject, content=content, error=error)

    def get(self):
        self.render_newpost()

    def post(self):
        subject = self.request.get("subject")
        content = self.request.get("content")

        if subject and content:
            p = Posts(subject = subject, content = content)
            p_key = p.put()                                 # <-- Key(kind='Post', id_or_name=numeric_id , parent=None)
            self.redirect("/blog/%d" % p_key.id())
        else:
            error = "we need both a subject and some content!"
            self.render_front(title, art, error)

class MainPage(BaseHandler):

    def get(self, post_id):
        posts = db.GqlQuery("SELECT * FROM Post ORDER BY created_at DESC")
        self.render("posts.html", posts = posts)




#----------------------------------------------------------------------
url_mapping = [( '/blog', MainPage), ('/blog/newpost', NewPost), ('/blog/(\d+)', Permalink)] 	
app = webapp2.WSGIApplication(url_mapping , debug=True)
