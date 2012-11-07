#!/usr/bin/env python

def addID(original_class):
    orig_init = original_class.__init__
    # make copy of original __init__, so we can call it without recursion

    def __init__(self, id, *args, **kws):
        self.__id = id
        print "new __init__"
        orig_init(self, *args, **kws) # call the original __init__

    original_class.__init__ = __init__ # set the class' __init__ to the new one
    return original_class




@addID
class Foo(object):
    pass


f = Foo(1)
