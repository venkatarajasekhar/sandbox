#!/bin/bash

_DEBUG=false
GROUP=`id -gn`
_MAIN=true
_SEPARATOR=false
SEPARATOR_DEFAULT=.

while getopts ":dG:O:S:m" opt; do
  case $opt in
    d) _DEBUG=true;;
    G) GROUP=$OPTARG;;
    m) _MAIN=false;;
    O) OPT_FLAGS=$OPTARG;;
    S) _SEPARATOR=true; SEPARATOR_DEFAULT=$OPTARG;;
    \?) error "Check source for usage"; exit ;;
  esac
done
shift $(($OPTIND -1))

echo $1

