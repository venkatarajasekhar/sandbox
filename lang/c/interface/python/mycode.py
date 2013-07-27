#!/usr/bin/env python 


def sayHello():
    print "Hello!"

def takeAll(*args, **kwargs):
    for arg in args:
        print "another arg:", arg
    for key in kwargs:
        print "another keyword arg: %s: %s" % (key, kwargs[key])
    return 1.2


def multiply(a,b):
    print "Will compute", a, "times", b
    c = 0
    for i in range(0, a):
        c = c + b
    return c


if __name__ == "__main__":
    r = multiply(3,2)
    print "Result is %d" % r
    sayHello()

