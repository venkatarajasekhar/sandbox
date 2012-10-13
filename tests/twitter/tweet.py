#!/bin/python


import twitter

client = twitter.Api(username='username', password='password')
client.PostUpdate("Hello World!")
