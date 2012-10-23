#!/usr/bin/env python

def cube(x):
    return x*x*x

li = range(0,10)                                    # <-- 0 included, 10 not included!
print li

li2 = map(cube, li)
print li2

def selectorFct(x):
    return x % 2 != 0

li3 = filter(selectorFct, li2)
print li3
