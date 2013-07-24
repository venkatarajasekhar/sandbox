#!/bin/sh

echo "[Press a key]"
nm overloading
echo "[Press a key]"
read

nm overloading | grep main

echo "The program 'main' is never mangled because it caanot be overloaded!"
echo "[Press a key]"
read

nm overloading | egrep _Z[0-9]+
echo "The function are mangled as follow:"
echo " * prefix _Z "
echo " * number of char in the function"
echo " * type of parameters"
echo "       i=int, d=double, f=float, c=char"
echo "      Ri=reference on an int, Rd=reference on a double, etc."
echo "[Press a key]"
read

echo "BEWARE: You cannot overload functions with the same type of parameters and different RETURN type !"
