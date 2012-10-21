#!/usr/bin/env python

import urllib2 as u

p = u.urlopen("http://www.google.com")
print p
print dir(p) 
