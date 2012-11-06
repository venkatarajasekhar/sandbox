#!/usr/bin/env python




class Toto(object):
    zero = 0
    one = 1
    def __init__(self, two=2):
        self.two = two

    @classmethod
    def create(cls, four = 4):
        obj = cls(four)                                 # Notice how the 'cls' is used ! Not Toto or Titi!
        return obj

print Toto.zero
print Toto.one

t = Toto()

print t.zero
print t.one
print t.two


class Titi(Toto):
    three = 3
    def __init__(self, two=2):
        self.two = two * 2

print Titi.three
print Titi.one

ti = Titi(1)
print ti.two

ti2 = Titi.create(2)
print ti2.two
