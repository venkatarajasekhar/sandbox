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

for i in `seq 3 5 `; do                 # with external command
  echo $i
done

echo "Two by Two"
step=2
#for i in {0..10..$step}; do                 # builtin
for i in {0..10..2}; do                 # builtin
  echo $i
done

echo "C style syntax"
step=3
for ((c=1; c<=15;c=c+$step))            # Supported by /bin/bash and not /bni/sh !!!
do
    echo $c
done


