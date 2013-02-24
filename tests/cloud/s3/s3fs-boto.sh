#!/bin/sh


yum install fuse-s3             # <-- installs the boto version , not the C++ version 

# Some notes about naming There are lots of projects that are trying to make use of s3fs 
# at the moment. As such (and this is likely not suprising), there are several projects
# that make use of the name s3fs, or variants thereof. Most notably, there is the s3fs-fuse
# project (http://code.google.com/p/s3fs/wiki/FuseOverAmazon), and the s3fs project 
# (http://code.google.com/p/s3fs-fuse/). There are several others, all in various stages 
# of production. Naturally, given the accuracy of s3fs as a project name, its hard to want 
# to give it up. I apologize in advance for any confusion. In an effort to aliviate this, 
# I'm mentioning here that the fuse-s3fs rpm undergoing review for inclusion in fedora is 
# the rpm generated from the project at this site. 

export AWS_ACCESS_KEY_ID="XXXXXXXXXXXXXXXXXXXX"
export AWS_SECRET_ACCESS_KEY="XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"

S3FS_OPTIONS="-p ${AWS_ACCESS_KEY_ID} -s ${AWS_SECRET_ACCESS_KEY}"
s3fs -C $S3FS_OPTIONS -c test.lynceantech.com                   # Create a bucket
s3fs -C $S3FS_OPTIONS -d test.lynceantech.com                   # Attempt to delete the bucket fails
# Returns: Not a formatted bucket, won't delete
s3fs -C $S3FS_OPTIONS -f test.lynceantech.com                   # Format the bucket !a (create fsdata file)
s3fs -C $S3FS_OPTIONS -d test.lynceantech.com
# Returns: This bucket is locked, you must unlock it first
s3fs -C $S3FS_OPTIONS -k test.lynceantech.com
# Returns: Unlocking bucket  test.lynceantech.com
s3fs -C $S3FS_OPTIONS -d test.lynceantech.com
# Now this works !

#       Mount an S3 Bucket
#              s3fs -o [other mount options],bucket=<bucket_name> <mount point>

/usr/bin/s3fs mucls.lynceantech.com /mnt/mucls

#       /etc/fstab
#       The format for an s3fs entry in /etc/fstab should look like this
#       fstab     <mntpoint>     fuse [options],suid,dev,exec,noauto,users,bucket=<s3_bucket> 0 0
#       Note that the <mntpoint> must be readable by the mounting user

