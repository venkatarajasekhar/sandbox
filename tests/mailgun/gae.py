#!/usr/bin/env python

import urllib
import urllib2
from base64 import b64encode

import account

class User(object):

    def __init__(self, name, email):
        self.email = email  
        self.name = name

    def receive_email(self, subject="SAND No subject", text="No Text"): 
        """ Email through MAILGUN """
        _from = "Reciprocity Web <emayssat@gmail.com>"
        username = account.username
        password = account.password
        api_https_url = "https://api.mailgun.net/v2"
        mailgun_url = api_https_url + '/reciprocity-ring.mailgun.org/messages'

        data = {"from"  : _from,
                "to"    : u"%s <%s>" % (self.name, self.email),
                "subject": subject,
                "text"  : text  } 

        encoded_data = urllib.urlencode(data)
        user_agent = 'python-requests/0.13.1'
        headers = {'User-Agent' : user_agent}
        request = urllib2.Request(mailgun_url, encoded_data, headers)
        request.add_header('Authorization', 'Basic ' + b64encode(username + ':' + password))

        r = urllib2.urlopen(request)
        #print r.getcode()
        #print r.headers
        #print r.headers["content-type"]
        return r


u = User(name="Emmanuel Mayssat", email="emayssat@gmail.com")
r = u.receive_email()

print r.read()

