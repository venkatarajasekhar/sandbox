#!/usr/bin/sudo /bin/sh

cat /root/tmp/file.sql <<EOT
UPDATE mysql.user SET Password=PASSWORD('MyNewPass') WHERE User='root';
FLUSH PRIVILEGES;
EOT

service mysql stop
mysqld --init-file=/root/file.sql
