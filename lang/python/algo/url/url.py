#!/usr/bin/env python

import urllib2

p = urllib2.urlopen("http://www.google.com")

print p

c = p.read()

print c

dir(p)
print p.url
print p.headers
print p.headers.items()             

print p.headers['content-type']



q = urllib2.urlopen("http://www.example.com")
print q.headers.items()             
print q.headers['server']
print q.url                                             # <-- automatically folllow redirect 


