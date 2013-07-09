#!/bin/bash


. ./include.sh


TOTO=$((2+2))
echo $TOTO

DATE=$(date +%Y%m%d)
echo $DATE

DATE=`date +%Y%m%d`
echo $DATE

ARR=(zero one two three)
echo "${ARR[1]}"

#for who in $(< /usr/bin/ckuses);do
#   HOMSUM=`eval du -s ~$who`
#done


