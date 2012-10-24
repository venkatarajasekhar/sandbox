#!/usr/bin/env python

import requests
from requests.auth import HTTPBasicAuth
import urllib
import urllib2

# Equivalent to 
# $ wget --output-document=- --http-user=api --http-password=key-6qwjwon58zad-a-pvlycilo3at50ggz1 https://api.mailgun.net/v2/reciprocity-ring.mailgun.org/messages --post-data=to=emayssat%40gmail.com&text=Testing+some+Mailgun+awesomness%21&from=Excited+User+%3Cme%40samples.mailgun.org%3E&subject=Hello+Mama

def send_simple_message():
    return requests.post(
        "https://api.mailgun.net/v2/reciprocity-ring.mailgun.org/messages",
        auth=HTTPBasicAuth("api", "key-6qwjwon58zad-a-pvlycilo3at50ggz1"),                        # <-- or auth=("api", "key-6qwjwon58zad-a-pvlycilo3at50ggz1")
        data={"from": "Excited User <me@samples.mailgun.org>",
              "to": ["emayssat@gmail.com"],
              "subject": "[https] Hello Mama (Request)",
              "text": "Testing some Mailgun awesomness!"})

# Authorization: Basic YXBpOmtleS02cXdqd29uNTh6YWQtYS1wdmx5Y2lsbzNhdDUwZ2d6MQ==                   # <--auth directive (always the same regardless of message content)

def send_simple_message2():
    url = 'https://api.mailgun.net/v2/reciprocity-ring.mailgun.org/messages'
    values = {"from": "Excited User <me@samples.mailgun.org>",
              "to": ["emayssat@gmail.com"],
              "subject": "[https] Hello Mama (Urllib2)",
              "text": "Testing some Mailgun awesomness!"}
    data = urllib.urlencode(values)
    print data

    user_agent = 'python-requests/0.13.1'
    headers = {'User-Agent' : user_agent}
    
    request = urllib2.Request(url, data, headers)

    password_manager = urllib2.HTTPPasswordMgrWithDefaultRealm()
    password_manager.add_password(None, url, "api", "key-6qwjwon58zad-a-pvlycilo3at50ggz1")
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

#print send_simple_message()
print send_simple_message2()

