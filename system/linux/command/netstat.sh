#!/bin/sh

echo "network routes"

netstat -nr

echo "services with open ports (ROOT to get PIDs)"

netstat -tulpn
