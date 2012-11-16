#!/usr/bin/python 

import itertools

x = itertools.count(0)

print x.__class__.__name__





class Toto(object):
    pass

t = Toto()

print t.__class__.__name__
