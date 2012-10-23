#!/usr/bin/env python 

def cube(x):
    return x*x*x

li = range(1,10)
print li

li2 = map(cube, li)
print li2
