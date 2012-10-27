import cgi
import webapp2

form_1 = """
<form method="get" action="http://www.google.com/search">
<input name="q">
<input type="submit">
</form>
"""

form_2 = """
<form method="get" action="/testform">
<input name="q">
<input type="submit">
</form>
"""

form_3 = """
<form method="post" action="/testform">
<input name="q">
<input type="submit">
</form>
"""

form_4 = """
<form method="post">
  What is your birthday?
  <br>
  <label> Month
    <input type="text" name="month" value="%(month)s">
  </label>
  <label> Day
    <input type="text" name="day" value="%(day)s">
  </label>
  <label> Year
    <input type="text" name="year" value="%(year)s">
  </label>
  <div style="color: red">%(error)s</div>
  <br>
  <input type="submit">
</form>
"""


months = [ 'January', 'February', 'March', 'April', 'May', 'June', 'July', 'August', 'september', 'October', 'November', 'December']
month_abbvs = dict((m[:3].lower(), m) for m in months)

#----------------------------------------------------------------------
# Support function

def valid_month(month):
    if month:
        short_month = month[:3].lower()
        return month_abbvs.get(short_month)

def valid_day(day):
    if day and day.isdigit():
        day = int(day)
        if day > 0 and day <= 31:
            return day

def valid_year(year):
    if year and year.isdigit():
        year = int(year)
        if year > 1900 and year <= 2012:
            return year

def escape_html_1(s):
    for (i, o) in (("&", "&amp;"),			# <-- must be first !
                   (">", "&gt;"),
                   ("<", "&lt;"),
                   ('"', "&quote;")):
        s = s.replace(i,o)
    return s

def escape_html_2(s):
    """ Using complete and bug free python STANDARD library function """
    return cgi.escape(s, quote = True)



#----------------------------------------------------------------------
# VIDEO URL Handlers
#----------------------------------------------------------------------

class MainPage(webapp2.RequestHandler):
    def write_form4(self, error="", month="", day="", year=""):
        """ Notice that escaped text renders as non-escaped in html """
        self.response.out.write(form_4 % {"error": error, 
                                          "month": escape_html_2(month),            # <-- escape user input
                                          "day": escape_html_2(day), 
                                          "year": escape_html_2(year),
                                         })

    def get(self):
        #self.response.headers['Content-Type'] = 'text/html'			# <-- default anyway!
        #new_page = "<html><header></header><body>%s</body></html>" % form	# <-- <html><header></header><body> implied  anyway!
        new_page = "<b>Hi, %(NAME)s and %(NAME2)s and %(NAME)s again!</b>" % { "NAME": "Hello" , "NAME2": "Welcome"}
        self.response.out.write(new_page)

        #self.response.out.write(form_1)			
        #self.response.out.write(form_2)
        #self.response.out.write(form_3)
        self.write_form4()

    def post(self):
        """ response based on verification """
        user_month = self.request.get('month')
        user_day = self.request.get('day')
        user_year = self.request.get('year')

        month = valid_month(user_month)
        day = valid_day(user_day)
        year = valid_year(user_year)

        if not (month and day and year):
            self.write_form4("That doesn't look valid to me!", user_month, user_day, user_year)
        else:
            #self.response.out.write("Thanks! That's a totally valid day!")
            self.redirect("/thanks")							                        # <-- redirect browser to new URL   (Handler needs to be written, etc)
                                                                                        # <-- required for bookmarking, sending link, and not have to resubmit the post req
                                                                                        # <-- If redirect to another domain, need the full URL (i.e. http://..... )

class TestHandler_1(webapp2.RequestHandler):
    """ To print the content of q """
    def get(self):
        """ form is using get method """
        q = self.request.get("q")
        self.response.out.write(q)

    def post(self):
        """ form is using post method """
        q = self.request.get("q")
        self.response.out.write(q)


class TestHandler_2(webapp2.RequestHandler):
    """ To print the complete HTTP request """
    def get(self):
        self.response.headers['Content-Type'] = 'text/plain'				            #<-- required otherwise text/html
        self.response.out.write(self.request)
    def post(self):
        self.response.headers['Content-Type'] = 'text/plain'				            #<-- required otherwise text/html
        self.response.out.write(self.request)

class ThanksHandler(webapp2.RequestHandler):
    """ Redirection for easy reloading and bookmarking """
    def get(self):
        self.response.out.write("Thanks! That's totally valid day! (Redirect from form or direct from URL)")


#----------------------------------------------------------------------
# ROT13 URL Handlers
#----------------------------------------------------------------------

rot13_html = """
<html>
  <head>
    <title>Unit 2 Rot 13</title>
  </head>

  <body>
    <h2>Enter some text to ROT13:</h2>
    <form method="post">
      <textarea name="text" 
                style="height: 100px; width: 400px;">%(text)s</textarea>
      <br>
      <input type="submit">
    </form>
  </body>

</html>
"""
i = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
o = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"

class Rot13Handler(webapp2.RequestHandler):
    def write_html(self, text=""):
        rot13_text = ""
        for c in text:
            if c in i :
                rot13_text += o[i.index(c)]
            else:
                rot13_text += c
            
        self.response.out.write(rot13_html % {"text": escape_html_2(rot13_text),
                                         })

    def get(self):
        self.write_html()

    def post(self):
        user_text = self.request.get('text')
        self.write_html(user_text)
        

#----------------------------------------------------------------------
# SIGNUP URL Handler

#----------------------------------------------------------------------
url_mapping = [('/', MainPage), ('/testform', TestHandler_2), ('/thanks', ThanksHandler), ('/unit2/rot13', Rot13Handler)] 	
app = webapp2.WSGIApplication(url_mapping , debug=True)
