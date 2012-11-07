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
