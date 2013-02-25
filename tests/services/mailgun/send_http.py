#!/usr/bin/env python

import requests
import account as a

def send_simple_message():
    return requests.post(
        a.api_url + "/reciprocity-ring.mailgun.org/messages",
        auth=(a.username, a.password),
        data={"from": "Excited User <me@samples.mailgun.org>",
              "to": ["emayssat@gmail.com"],
              "subject": "[http] Hello Mama",
              "text": "Testing some Mailgun awesomness!"})

print send_simple_message()
