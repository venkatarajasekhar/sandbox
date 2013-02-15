#!/usr/bin/env python

from ctypes import *

cdll.LoadLibrary("libc.so.6") 
libc = CDLL("libc.so.6")  
libc.printf("Toto\n")

printf = libc.printf
printf("Hello, %s\n", "World!")
printf("%d bottles of beer\n", 42)

printf("An int %d, a double %f\n", 1234, c_double(3.14))


print libc.time(None) 

#------------------------------------------------------------------------ 
# PROTECTION

printf.argtypes = [c_char_p, c_char_p, c_int, c_double]
printf("String '%s', Int %d, Double %f\n", "Hi", 10, 2.2)

try:
    printf("%d %d %d", 1, 2, 3)                                
except ArgumentError as e:
    print "*** Exception due to protection ***"
finally:
    printf("%s %d %f\n", "X", 2, 3)


