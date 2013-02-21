#!/bin/sh

# This program can be run by a user who has previously run:
# s3cmd --configure

s3cmd --help
s3cmd --dump-config                                                 # <-- dump local user configuration (~/.s3cfg)
s3cmd mb s3://bucket.lynceantech.com                                # <-- make a (S3) bucket  
s3cmd accesslog s3://bucket.lynceantech.com                         # <-- enable access log 
s3cmd put s3cmd.sh s3://bucket.lynceantech.com/s3cmd.sh             # <-- upload a file
s3cmd ls s3://bucket.lynceantech.com                                # <-- ls a bucket
rm -rf /tmp/s3cmd.sh
s3cmd get s3://bucket.lynceantech.com/s3cmd.sh /tmp/s3cmd.sh        # <-- restore a file
s3cmd mv s3://bucket.lynceantech.com/s3cmd.sh s3://bucket.lynceantech.com/someother.sh # <-- rename a file
s3cmd ls s3://bucket.lynceantech.com                                # <-- ls a bucket
s3cmd ls                                                            # <-- list existing buckets
s3cmd del s3://bucket.lynceantech.com/someother.sh                  # <-- delete a file on s3
s3cmd del s3://bucket.lynceantech.com/s3cmd.sh                      # <-- delete a file on s3
#s3cmd sync --recursive /root/ s3://bucket.lynceantech.com/root/     # <-- backup/rsync of a local directory
s3cmd sync --recursive /root/Desktop s3://bucket.lynceantech.com/root/ # <-- backup/rsync of a local directory
s3cmd rb -r s3://bucket.lynceantech.com                             # <-- delete a bucket recursively
s3cmd rb s3://bucket.lynceantech.com                                # <-- delete an empty bucket (if exist)
