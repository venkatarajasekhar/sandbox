#!/usr/bin/env python

#---- Function decorators
class myFuncDecorator(object):

    def __init__(self, f):
        print "inside myDecorator.__init__()"
        f() 

    def __call__(self):
        print "inside myDecorator.__call__()"

@myFuncDecorator
def aFunction():
    print "inside aFunction()"

print "Finished decorating aFunction()"
print "==========================================="

aFunction()
