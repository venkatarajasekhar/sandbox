#!/usr/bin/env python

# minidom is simple and fast!
from xml.dom import minidom            

html = "<mytag>contents<children><item>1</item><item>2</item></children></mytag>"
minidom.parseString(html)

x = minidom.parseString(html)
print dir(x)

print x.toprettyxml()

print x.getElementsByTagName("item")
print x.getElementsByTagName("item")[0]
print x.getElementsByTagName("item")[0].childNodes[0]
print x.getElementsByTagName("item")[0].childNodes[0].nodeValue
