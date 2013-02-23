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
# INPUT PARAMETER PROTECTION

printf.argtypes = [c_char_p, c_char_p, c_int, c_double]
printf("String '%s', Int %d, Double %f\n", "Hi", 10, 2.2)

try:
    printf("%d %d %d", 1, 2, 3)                                
except ArgumentError as e:
    print "*** Exception due to protection ***"
finally:
    printf("%s %d %f\n", "X", 2, 3)



#------------------------------------------------------------------------ 
# OUTPUT SPECIFICATION
# 
# c_function are assumed to return 1 integer
# If that is not the case, you need to use restype
#
# If nothing is returned, then use function.restye = None !

strchr = libc.strchr
print strchr("abcdef", ord("d")) 
strchr.restype = c_char_p                   # c_char_p is a pointer to a string
print strchr("abcdef", ord("d"))
print strchr("abcdef", ord("x"))

#class DBBASE(Structure):
#     pass
#DBBASEPTR = POINTER(DBBASE)
#dbAllocBase = libdbparse.dbAllocBase
#dbAllocBase.restype = DBBASEPTR            # Return a pointer to a structure



