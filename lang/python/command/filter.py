#!/usr/bin/env python

class Toto(object):
    zero = 0
    one = 1
    def __init__(self, titi=None, toto=None, tutu=None):
        self.titi = titi
        self.toto = toto
        self.tutu = tutu

t = Toto()

print t.zero
print t.one
print t.titi
print t.toto
print t.tutu

li = [ Toto(), Toto(1,2), Toto(3, 4) ]

print li

#----------------------------------------------------------------------
# FILTER COMMAND

# FILTER CAN ONLY SHORTEN NOT LENGTHEN THE LIST

f = filter(None, [t.zero for t in li ] )                    # <-- None is inplace of a function to be called (None function = nothing is called and use the value itself (0==false!)!)
print f

f = filter(None, [t.one for t in li ] )                     # <-- None is inplace of a function to be called (None function = nothing is called and use the value itself (0==false!)!)
print f

def selectorFct(x):
    return x % 2 != 0 

f = filter(selectorFct, range(1,25) )                       # <-- selectorFct must be true

print f

#----------------------------------------------------------------------
# ITERATORS

f = [ t for t in li if t.zero != 0 ]
print f

f = [ t for t in li if t.one != 0 ]
print f
