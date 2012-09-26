#!/bin/sh -x

_DEBUG=false
USERNAME=”ouchmaster”
PASSWORD=”---mypass---”

TWITTER_API_URL=http://twitter.com/statuses/update.xml

while getopts ":dp:u:" opt; do
    case $opt in
        d) _DEBUG=true;;
        p) PASSWORD=$OPTARG;;
        u) USERNAME=$OPTARG;;
        \?) printf "Check source code for user\n"; exit 1;;
    esac
done

shift $((OPTIND -1))
ARGV=$*

$_DEBUG && {
    printf "USERNAME=${USERNAME}\n"
    printf "PASSWORD=${PASSWORD}\n"
}


#result=`curl -u $USERNAME:$PASSWORD -d status=”$1″ $TWITTER_API_URL`
result=`curl --basic --user $USERNAME:$PASSWORD -data status=”$@″ $TWITTER_API_URL`

exit 0


