#!/usr/bin/env python

from ctypes import * 

i = c_int(42)
s = c_char_p("Hello, World")
u = c_ushort(-3)                        # c_ushort(65533)

print i
print i.value
i.value = -99
print i
