#!/usr/bin/env python 

import re


http_doc = "<span class='toto'>TOTO</span>"

TIME_POINT_RE = re.compile(r'<span class="time_point">.*?</span>')
TOTO_RE = re.compile(r'<span class="toto">.*?</span>')
TATA_RE = re.compile("<span class='toto'>.*?</span>")


if TIME_POINT_RE.match(http_doc) :
    print "match found!"
else:
    print "no match" 

if TOTO_RE.match(http_doc) :
    print "match found!"
else:
    print "no match" 

if TATA_RE.match(http_doc) :
    print "match found!"
else:
    print "no match" 

