#!/usr/bin/env python




class Toto(object):
    zero = 0
    one = 1
    def __init__(self, two=2):
        self.two = two

t = Toto()

print t.zero
print t.one
print t.two
