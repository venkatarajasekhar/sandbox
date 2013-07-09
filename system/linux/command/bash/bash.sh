#!/bin/bash

echo "number of argument is $#"
echo "first argument is $1"

. ./include.sh


TOTO=$((2+2))
echo $TOTO

DATE=$(date +%Y%m%d)
echo $DATE

DATE=`date +%Y%m%d`
echo $DATE

STR="il etait une fois..."
echo "substring: ${STR:3:7}"

ARR=(zero one two three)
echo "${ARR[1]}"

#for who in $(< /usr/bin/ckuses);do
#   HOMSUM=`eval du -s ~$who`
#done


