#!/usr/bin/sudo /bin/sh

systemctl status mysqld.service
systemctl restart mysqld.service
systemctl status mysqld.service
