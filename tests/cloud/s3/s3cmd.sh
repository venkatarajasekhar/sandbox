#!/bin/sh

# This program can be run by a user who has previously run:
# s3cmd --configure

BUCKET=s3://bucket.lynceantech.com

s3cmd --help
s3cmd --dump-config                                                 # Dump local user configuration (~/.s3cfg)
s3cmd mb $BUCKET                                                    # Make/create a (S3) bucket  
s3cmd accesslog $BUCKET                                             # Enable/disable access log 
s3cmd put homepage.html $BUCKET/                                    # Upload a file
s3cmd put s3cmd.sh $BUCKET/toto.sh                                  # Upload a file
s3cmd -m text/html put s3cmd.sh $BUCKET/file.sh                     # Upload a file with special mime format
s3cmd --add-header='Content-Encoding: gzip' put s3cmd.sh $BUCKET/file.sh # Upload a file iwth headers
s3cmd setacl --acl-public $BUCKET/toto.sh                           # Anyone can read ( required for web browser access)
s3cmd setacl --acl-private $BUCKET/toto.sh                          # Only specific account are given permission
s3cmd setacl --acl-revoke=read:emayssat@gmail.com $BUCKET/toto.sh 
s3cmd setacl --acl-grant=read:emayssat@gmail.com $BUCKET/toto.sh 
                                                                    # Note that the e-mail address must be related to a amazon account
                                                                    # ERROR: S3 error: 400 (UnresolvableGrantByEmailAddress): The e-mail address you provided does not match any account on record.
                                                                    # Permission is one of: read, write, read_acp, write_acp, full_control, all
s3cmd ls $BUCKET                                                    # List content of a bucket
rm -rf /tmp/s3cmd.sh
s3cmd get $BUCKET/s3cmd.sh /tmp/s3cmd.sh                            # Restore a file
s3cmd cp $BUCKET/s3cmd.sh $BUCKET/other.sh                          # Rename a file
s3cmd mv $BUCKET/s3cmd.sh $BUCKET/someother.sh                      # Rename a file
s3cmd ls $BUCKET                                                    # List the content of a bucket
s3cmd ls                                                            # List existing buckets
s3cmd la                                                            # List content of all buckets
s3cmd del $BUCKET/someother.sh                                      # Delete a file on s3
s3cmd del $BUCKET/s3cmd.sh                                          # Delete a file on s3
#s3cmd sync --recursive /root/ $BUCKET/root/                        # Backup/rsync of a local directory
s3cmd sync --recursive /root/Desktop $BUCKET/root/                  # Backup/rsync of a local directory
s3cmd du $BUCKET                                                    # Disk usage (storage space used) of specified bucket
s3cmd info $BUCKET                                                  # Return acl and key info on bucket
#$BUCKET/ (bucket):
#   Location:  any
#   ACL:       emayssat: READ
#   ACL:       emayssat: WRITE
#   ACL:       emayssat: READ_ACP
#   ACL:       emayssat: WRITE_ACP
#   ACL:       *anon*: READ
#   ACL:       *anon*: WRITE
#   ACL:       *anon*: READ_ACP
#   ACL:       *anon*: WRITE_ACP
#   URL:       http://files.lynceantech.com.s3.amazonaws.com/
s3cmd rb -r $BUCKET                                                 # Delete a bucket recursively
s3cmd rb $BUCKET                                                    # Delete an empty bucket (if exist)
