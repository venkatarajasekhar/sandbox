#!/bin/sh

#http://www.linux-magazine.com/Online/Blogs/Productivity-Sauce/Mount-Amazon-S3-Buckets-with-s3fs

# ./configure --prefix=/usr
# make
# make install

# Some notes about naming There are lots of projects that are trying to make use of s3fs 
# at the moment. As such (and this is likely not suprising), there are several projects
# that make use of the name s3fs, or variants thereof. Most notably, there is the s3fs-fuse
# project (http://code.google.com/p/s3fs/wiki/FuseOverAmazon), and the s3fs project 
# (http://code.google.com/p/s3fs-fuse/). There are several others, all in various stages 
# of production. Naturally, given the accuracy of s3fs as a project name, its hard to want 
# to give it up. I apologize in advance for any confusion. In an effort to aliviate this, 
# I'm mentioning here that the fuse-s3fs rpm undergoing review for inclusion in fedora is 
# the rpm generated from the project at this site. 


cat > ~/.passwd-s3fs <<EOT
accessKeyId:secretAccessKey
EOT

chmod 600 ~/.passwd-s3fs

/usr/bin/s3fs bucket /mnt
