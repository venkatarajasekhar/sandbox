#!/usr/bin/env python

# minidom is simple and fast!
from xml.dom import minidom            

import urllib

html = "<mytag>contents<children><item>1</item><item>2</item></children></mytag>"
minidom.parseString(html)

x = minidom.parseString(html)
print dir(x)

print x.toprettyxml()

print x.getElementsByTagName("item")                                            # <-- returns a list of tag-matched DOM
print x.getElementsByTagName("item")[0]                                         # pick the first one from above list
print x.getElementsByTagName("item")[0].childNodes[0]                           # take the first child <DOM Text node "1">, a text node
print x.getElementsByTagName("item")[0].childNodes[0].nodeValue                 # take the value of the (text) node, or 1 !!!

#----------------------------------------------------------------------

xml = """<HostipLookupResultSet xmlns:gml="http://www.opengis.net/gml" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" version="1.0.1" xsi:noNamespaceSchemaLocation="http://www.hostip.info/api/hostip-1.0.1.xsd">
           <gml:description>This is the Hostip Lookup Service</gml:description>
           <gml:name>hostip</gml:name>
           <gml:boundedBy>
             <gml:Null>inapplicable</gml:Null>
           </gml:boundedBy>
           <gml:featureMember>
             <Hostip>
               <ip>12.215.42.19</ip>
               <gml:name>Aurora, TX</gml:name>
               <countryName>UNITED STATES</countryName>
               <countryAbbrev>US</countryAbbrev>
               <!-- Co-ordinates are available as lng,lat -->
               <ipLocation>
                 <gml:pointProperty>
                   <gml:Point srsName="http://www.opengis.net/gml/srs/epsg.xml#4326">
                     <gml:coordinates>-97.5159,33.0582</gml:coordinates>
                   </gml:Point>
                 </gml:pointProperty>
               </ipLocation>
             </Hostip>
           </gml:featureMember>
        </HostipLookupResultSet>"""

def get_coords(xml):
    ###Your code here
    x = minidom.parseString(xml)
    coords = x.getElementsByTagName("gml:coordinates")                          # <-- Make sure to use correct tag!!!
    if coords and coords[0].childNodes[0].nodeValue: 
        lon, lat = coords[0].childNodes[0].nodeValue.split(',')                 # <-- notice all the path to go to the desired text !!!
        return lat, lon

print get_coords(xml)

#----------------------------------------------------------------------

p = urllib.urlopen("http://www.nytimes.com/services/xml/rss/nyt/GlobalHome.xml")
c = p.read()
x = minidom.parseString(c)
print x.getElementsByTagName("item")
print len(x.getElementsByTagName("item"))

#----------------------------------------------------------------------
