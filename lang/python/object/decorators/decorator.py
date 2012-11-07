#!/usr/bin/env python

import time

#----------------------------------------------------------------------
# Standard decorators

class Person:
    def __init__(self, name=None):
        self.name = name

    @classmethod
    def create(cls, strg):
        instance = cls(strg)
        return instance 

print Person.create('emmanuel').name

#----------------------------------------------------------------------
# Custom decorators 


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

aFunction()

#inside myDecorator.__init__()
#inside aFunction()
#Finished decorating aFunction()
#inside myDecorator.__call__()


#----------------------------------------------------------------------    
# A decorator is an object whose __call__ method takes a func and return a wrapper function
# Wherever the decorator appears, the wrapper function will be used

class LInAndOut(object):

    def __init__(self):
        print "LInAndOut inside __init__"
        self.textIn = "In:"
        self.textOut = "Out:"

    def __call__(self, func):
        print "LInAndOut inside __call__ (%s)" % func.func_name
        def wrapper(*args, **kwargs):
            print "LInAndOut inside __wrapper__ (%s)" % func.func_name
            print self.textIn
            retVal = func(*args, **kwargs)
            print self.textOut
            return retVal
        return wrapper                                           

print ("========================")
class Tata(object):
    def __init__(self, ok=3):
        self.ok = ok

    @LInAndOut()
    def printOk(self):
        print self.ok

print("-------------------------")
time.sleep(1)
it = Tata()
it.printOk()
