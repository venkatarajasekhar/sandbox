#!/bin/sh

sudo yum -y install s3cmd

s3cmd  --configure

cat <<EOT
# Enter new values or accept defaults in brackets with Enter.
# Refer to user manual for detailed description of all options.
# 
# Access key and Secret key are your identifiers for Amazon S3
# Access Key: XXXXXXXXXXXXXXXXXXXX                                    <-- Found in Account > Security Credentials
# Secret Key: XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
# 
# Encryption password is used to protect your files from reading
# by unauthorized persons while in transfer to S3
# Encryption password: XXXXXXXX                                       <-- Just for now!
# Path to GPG program [/usr/bin/gpg]: 
# 
# When using secure HTTPS protocol all communication with Amazon S3
# servers is protected from 3rd party eavesdropping. This method is
# slower than plain HTTP and can't be used if you're behind a proxy
# Use HTTPS protocol [No]: 
# 
# On some networks all internet access must go through a HTTP proxy.
# Try setting it here if you can't conect to S3 directly
# HTTP Proxy server name: 
# 
# New settings:
#   Access Key: XXXXXXXXXXXXXXXXXXXX
#   Secret Key: XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
#   Encryption password: XXXXXXXX
#   Path to GPG program: /usr/bin/gpg
#   Use HTTPS protocol: False
#   HTTP Proxy server name: 
#   HTTP Proxy server port: 0
# 
# Test access with supplied credentials? [Y/n] 
# Please wait...
# Success. Your access key and secret key worked fine :-)
# 
# Now verifying that encryption works...
# Success. Encryption and decryption worked fine :-)
# 
# Save settings? [y/N] y
# Configuration saved to '/root/.s3cfg'                               <-- Note that the configuration is specific to a user !!!
EOT
