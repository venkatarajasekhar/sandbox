#!/usr/bin/env python

def cube(x):
    return x*x*x

li = range(0,10)                                    # <-- 0 included, 10 not included!
print li

li2 = map(cube, li)
print li2

li3 = [ item for item in li2 if item % 2 != 0 ]     # <-- simple filtering
print li3

def selectorFct(x):                                 # <-- could be a lot more complex
    return x % 2 != 0

li4 = filter(selectorFct, li2)
print li4

print li3 == li4

