#!/usr/bin/env python
# -*- coding: utf-8 -*-

import requests
import urllib2
import httplib2

gh_url = 'https://api.github.com/user'
username = 'emayssat'
password = 'APon18CA'

#----------------------------------------------------------------------
# REQUEST 

r = requests.get(gh_url, auth=(username, password))

print r.status_code
print r.headers['content-type']

# ------
# 200
# 'application/json'

#----------------------------------------------------------------------
# HTTPLIB2

h = httplib2.Http(".cache")
h.add_credentials(username, password)
r, content = h.request(gh_url, "GET")

print "HTTPLIB2"
print r
print "CONTENT>%s<" % content

print r['status']
print r['content-type']

#----------------------------------------------------------------------
# URLLIB2

from base64 import b64encode

request = urllib2.Request(gh_url)
request.add_header('Authorization', 'Basic ' + b64encode(username + ':' + password))
r = urllib2.urlopen(request)

print "URLLIB2-1"
print r.getcode()
print r.read()
print r.headers["content-type"]
#print r.headers["X-RateLimit-Limit"]


#----------------------------------------------------------------------
#req = urllib2.Request(gh_url)
#
#password_manager = urllib2.HTTPPasswordMgrWithDefaultRealm()
#password_manager.add_password(None, gh_url, username, password)
#
#auth_manager = urllib2.HTTPBasicAuthHandler(password_manager)
#opener = urllib2.build_opener(auth_manager)
#
#urllib2.install_opener(opener)
#
#handler = urllib2.urlopen(req)
#
#print "URLLIB2-2"
#print handler.getcode()
#print handler.headers.getheader('content-type')
#
## ------
## 200
## 'application/json'
#
