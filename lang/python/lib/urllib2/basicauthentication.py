#!/usr/bin/env python

import urllib2

url = 'https://api.mailgun.net/v2/reciprocity-ring.mailgun.org/messages'
req = urllib2.Request(url)
try:
    handle = urllib2.urlopen(req)
except IOError, e:
    if hasattr(e, 'code'):
        if e.code != 401:
            print 'We got another error'
            print e.code
        else:
            print e.headers
            print e.headers['www-authenticate']


# Error 401 and realms
# If a page requires authentication then the error code is 401. Included in the response headers will be a 'WWW-authenticate' header. 
# This tells us the authentication scheme the server is using for this page and also something called a realm. 
# It is rarely just a single page that is protected by authentication but a section - a 'realm' of a website. 
# The name of the realm is included in this header line.

# The 'WWW-Authenticate' header line looks like WWW-Authenticate: SCHEME realm="REALM".

# For example, if you try to access the popular website admin application cPanel your browser will be sent a header that looks like : WWW-Authenticate: Basic realm="cPanel"

# If the client already knows the username/password for this realm then it can encode them into the request headers and try again. 
# If the username/password combination are correct, then the request will succeed as normal. i
# If the client doesn't know the username/password it should ask the user. i
# This means that if you enter a protected 'realm' the client effectively has to request each page twice. 
# The first time it will get an error code and be told what realm it is attempting to access - the client 
# can then get the right username/password for that realm (on that server) and repeat the request.

# HTTP is a 'stateless' protocol. 
# This means that a server using basic authentication won't 'remember' you are logged in [5] and will need to be sent the right header for every protected page you attempt to access.
