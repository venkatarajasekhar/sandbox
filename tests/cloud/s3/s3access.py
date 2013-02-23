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

AWS_KEY = 'AKIAISKUD2QLRV4LV25A'
AWS_SECRET = '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'
conn = S3Connection(AWS_KEY, AWS_SECRET)
bucket = conn.get_bucket(BUCKET)
destination = bucket.new_key()
destination.name = filename
destination.set_contents_from_file(myfile)
destination.make_public()
