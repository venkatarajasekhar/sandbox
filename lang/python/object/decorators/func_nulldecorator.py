#!/usr/bin/env python

class NullDecl (object):
    def __init__ (self, func):
        self.func = func
    def __call__ (self, * args):
        return self.func (*args)

@NullDecl
@NullDecl
def decorated():
    print "hello"

def pure():
    print "hello"


decorated()

print dir(decorated)
print dir(pure)
print set(dir(pure)) - set(dir(decorated));
