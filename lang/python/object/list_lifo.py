#!/usr/bin/env python



li = [1] * 10;
print li

li = range(0,10)                                    # <-- 0 included, 10 not included!
print li

li.append(10)
print li

print li.pop()
print li

#----------------------------------------------------------------------
def cube(x, y=1):
    return x*x*x * y


li2 = map(cube, li)
print li2

li2_1 = map(cube, li, [2]* len(li))
print li2_1


li3 = [ item for item in li2 if item % 2 != 0 ]     # <-- simple filtering
print li3

def selectorFct(x):                                 # <-- could be a lot more complex
    return x % 2 != 0

li4 = filter(selectorFct, li2)
print li4

print li3 == li4

#----------------------------------------------------------------------


