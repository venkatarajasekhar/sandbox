#!/usr/bin/env python

#---------------------------------------------------------------------- 
# PUBLIC FILE

import  urllib
opener = urllib.URLopener()
myurl = "https://s3.amazonaws.com/files.lynceantech.com/homepage.html"
myfile = opener.open(myurl)

print myfile.read()

#------------------------------------------------------------------------
# PRIVATE FILE

from boto.s3.connection import S3Connection
conn = S3Connection(AWS_KEY, AWS_SECRET)
bucket = conn.get_bucket(BUCKET)
destination = bucket.new_key()
destination.name = filename
destination.set_contents_from_file(myfile)
destination.make_public()
