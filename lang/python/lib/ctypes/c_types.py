#!/usr/bin/env python

from ctypes import * 
cdll.LoadLibrary("libc.so.6") 
libc = CDLL("libc.so.6")     


i = c_int(42)
f = c_float()
u = c_ushort(-3)                        # c_ushort(65533)

print i
print i.value, f.value
i.value = -99
print i


#---------------------------------------------------------------------- 
# STRINGS

s = c_char_p("Hello, World")
p_s = create_string_buffer('\000' * 32)
p_ss = create_string_buffer(3)
p_sss = create_string_buffer("Hello", 10)

print s
print s.value
print sizeof(p_ss), repr(p_ss.raw)
print repr(p_sss.value)

#---------------------------------------------------------------------- 
# POINTERS

i = c_int()
f = c_float()
s = create_string_buffer('\000' * 32)
print i.value, f.value, repr(s.value)
libc.sscanf("1 3.14 Hello", "%d %f %s", byref(i), byref(f), s)
print i.value, f.value, repr(s.value)

#----------------------------------------------------------------------
# C_FUNCTION WITH CUSTOM DATA TYPE

class Bottles(object):
    def __init__(self, number):
        self._as_parameter_ = number

bottles = Bottles(42)
printf("%d bottles of beer\n", bottles)

#---------------------------------------------------------------------- 
# STRUCTURE

class POINT(Structure):
    _fields_ = [("x", c_int), ("y", c_int)]         # Init at 0 by default

point = POINT(10, 20)
print point.x, point.y
point = POINT(y=5)                                  # X init at 0
print point.x, point.y
try:
    POINT(1, 2, 3)
except ValueError as e:
    print 'Too many initializers'

#Structure of structure
class RECT(Structure):
    _fields_ = [("upperleft", POINT),
                ("lowerright", POINT)]
rc = RECT(point)
print rc.upperleft.x, rc.upperleft.y                # only this point is initiated during construct
print rc.lowerright.x, rc.lowerright.y              # x,y init at 0 by default

# Type, offset, size
print POINT.x
print POINT.y
