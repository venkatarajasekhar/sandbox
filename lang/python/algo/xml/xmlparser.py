#!/usr/bin/env python

# minidom is simple and fast!
from xml.dom import minidom            

html = "<mytag>contents<children><item>1</item><item>2</item></children></mytag>"
minidom.parseString(html)
