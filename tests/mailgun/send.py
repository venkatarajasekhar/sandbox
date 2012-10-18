#!/usr/bin/env python

import requests

def send_simple_message():
    return requests.post(
        "https://api.mailgun.net/v2/reciprocity-ring.mailgun.org/messages",
        auth=("api", "key-6qwjwon58zad-a-pvlycilo3at50ggz1"),
        data={"from": "Excited User <me@samples.mailgun.org>",
              "to": ["emayssat@gmail.com"],
              "subject": "Hello Mama",
              "text": "Testing some Mailgun awesomness!"})

print send_simple_message()
