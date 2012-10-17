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
    created_at = db.DateTimeProperty(auto_now_add = True)           # <-- at creation time
    last_modified = db.DateTimeProperty(auto_now = True)            # <-- each time the object is touched

    def render(self):
        """ 
        HTML turns carriage return into single space ==> correction is required 
        !!! This method is called in the template
        {% for post in posts %}
            {{ p.render() | safe }}                                 # <-- safe is required to keep HTML code as is and prevent escaping
        {% endfor %}
        """
        self._render_text = self.content.replace('\n', '<br/>')
        return render_str("post.html", post=self)

class Permalink(BaseHandler):

    def get(self, post_id):
        """ Note that parameters are passed as string. ==> they need to be converted """
        post = Post.get_by_id(int(post_id))

        if not post:
            self.error(404)                                         # <-- page error handler with code 404 (not designed here)
            return

        self.render("post.html", post = post)

class NewPost(BaseHandler):

    def render_newpost(self, subject="", content="", error=""):
        self.render("newpost.html", subject=subject, content=content, error=error)

    def get(self):
        self.render_newpost()

    def post(self):
        subject = self.request.get("subject")
        content = self.request.get("content")

        if subject and content:
            p = Post(subject = subject, content = content)  # <-- returns a Post/db.Model object
            #p_key = p.put()                                 # <-- Key(kind='Post', id_or_name=numeric_id , parent=None)
            #self.redirect("/posts/%d" % p_key.id())
            self.redirect("/posts/%d" % p.key().id())
        else:
            error = "we need both a subject and some content!"
            self.render_front(title, art, error)

class MainPage(BaseHandler):

    def get(self):
        posts = db.GqlQuery("SELECT * FROM Post ORDER BY created_at DESC limit 10")
        # posts = Post.all().order('-created_at')           # <-- equivalent to above!
        self.render("posts.html", posts = posts)




#----------------------------------------------------------------------
# Note that if the URL is not matched below, the webserver returns a 404 error code !
# The page is different from the one returned with the self.error(404)

url_mapping = [( '/', MainPage), ('/newpost', NewPost), ('/posts/(\d+)', Permalink)] 	
app = webapp2.WSGIApplication(url_mapping , debug=True)
