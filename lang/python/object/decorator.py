#!/usr/bin/env python



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
        f() # Prove that function definition has completed

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

    
