#!/usr/bin/env python

l1 = [0,1,2,3]
t = range(4,9)

print t
print l1
l1.extend(t)
print l1

l2 = ['a', 'b', 'mpilgrim', 'z', 'example']
print l2
l2.append("new")
print l2
l2.insert(2,"new")
print l2
l2.extend(["two", "elements"])
print l2
l2.extend(t)
print l2
