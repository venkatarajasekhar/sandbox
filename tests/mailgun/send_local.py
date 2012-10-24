#!/usr/bin/env python

import requests

def send_simple_message():
    return requests.post(
        "https://localhost:3030/v2/reciprocity-ring.mailgun.org/messages",
        auth=("api", "key-6qwjwon58zad-a-pvlycilo3at50ggz1"),
        data={"from": "Excited User <me@samples.mailgun.org>",
              "to": ["emayssat@gmail.com"],
              "subject": "Hello Mama",
              "text": "Testing some Mailgun awesomness!"})

print send_simple_message()

# HTTPS
# $ nc -l 3030                                                                                                                                                                                                
# \XP�"�H�{�E��!����˩��"��X���W*98��5�                                                                                                                                                                                
# 32��ED/�A�#

# HTTP
# $ nc -l 3030
# POST /v2/reciprocity-ring.mailgun.org/messages HTTP/1.1
# Host: localhost:3030
# Content-Length: 131
# Authorization: Basic YXBpOmtleS02cXdqd29uNTh6YWQtYS1wdmx5Y2lsbzNhdDUwZ2d6MQ==                   # <--auth directive (always the same regardless of message content)
# Content-Type: application/x-www-form-urlencoded
# Accept-Encoding: identity, deflate, compress, gzip
# Accept: */*
# User-Agent: python-requests/0.13.1
# 
# to=emayssat%40gmail.com&text=Testing+some+Mailgun+awesomness%21&from=Excited+User+%3Cme%40samples.mailgun.org%3E&subject=Hello+Mamabash-4.2$ 
# bash-4.2$ nc -l 3030
# POST /v2/reciprocity-ring.mailgun.org/messages HTTP/1.1
# Host: localhost:3030
# Content-Length: 131
# Content-Type: application/x-www-form-urlencoded
# Accept-Encoding: identity, deflate, compress, gzip
# Accept: */*
# User-Agent: python-requests/0.13.1

