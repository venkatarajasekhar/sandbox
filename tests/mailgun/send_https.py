#!/usr/bin/env python

import requests
from requests.auth import HTTPBasicAuth
import urllib
import urllib2

from base64 import b64encode

import time

import account as a

# Equivalent to 

username = a.username
password = a.password


mailgun_url = a.api_https_url + '/reciprocity-ring.mailgun.org/messages'

def send_simple_message():
    data = {"from": "Excited User <me@samples.mailgun.org>",
              "to": ["emayssat@gmail.com", "emayssat@outlook.com"],                                                     # <-- notice the format here
              "subject": "[https] Hello Mama (REQUEST)",
              "text": "Testing some Mailgun awesomness!"}
    return requests.post(
        mailgun_url,
        auth = HTTPBasicAuth(username, password),                                               # <-- or simply auth=(username, password)
        data = data )

# Authorization: Basic YXBpOmtleS02cXdqd29uNTh6YWQtYS1wdmx5Y2lsbzNhdDUwZ2d6MQ==                 # <--auth directive (always the same regardless of message content)

def send_simple_message2():
    encoded_data = urllib.urlencode(data)
    print encoded_data
    user_agent = 'python-requests/0.13.1'
    headers = {'User-Agent' : user_agent}
    
    request = urllib2.Request(mailgun_url, encoded_data, headers)

    password_manager = urllib2.HTTPPasswordMgrWithDefaultRealm()
    password_manager.add_password(None, mailgun_url, username, password)
    auth_manager = urllib2.HTTPBasicAuthHandler(password_manager)
    opener = urllib2.build_opener(auth_manager)
    urllib2.install_opener(opener)

    try:
        response = urllib2.urlopen(request)
        print response.code()
        print response.headders.getheaer('content-type')

        content = response.read()
        print content
    except urllib2.HTTPError as e:
        print e

def send_simple_message3():
    data = {"from": u"Excited User <me@samples.mailgun.org>",
              "to": u"emayssat@gmail.com,emayssat@outlook.com",                             # <-- notice different format here too!
              "subject": u"[https] Hello Mama (URLLIB2)",
              "text": u"Testing some Mailgun awesomness!"}
    encoded_data = urllib.urlencode(data)
    print encoded_data
    print "to=emayssat%40gmail.com&text=Testing+some+Mailgun+awesomness%21&from=Excited+User+%3Cme%40samples.mailgun.org%3E&subject=Hello+Mama"
    user_agent = 'python-requests/0.13.1'
    headers = {'User-Agent' : user_agent}

    request = urllib2.Request(mailgun_url, encoded_data, headers)
    request.add_header('Authorization', 'Basic ' + b64encode(username + ':' + password))

    r = urllib2.urlopen(request)

    print r.getcode()
    print r.headers
    print r.headers["content-type"]
    return r.read()

print send_simple_message()
#time.sleep(1)
#print send_simple_message2()
time.sleep(1)
print send_simple_message3()

