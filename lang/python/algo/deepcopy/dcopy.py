#!/usr/bin/env python 

from PyQt4.QtCore import *
from PyQt4.QtGui import *

from copy import copy, deepcopy

class LObject(QObject):
    def __init__(self, parent=None):
        super(LObject, self).__init__(parent)
        self.name = 'toto'
    def __str__(self):
        return "%s" % self.name
    def setName(self, name):
        self.name = name



l1 = LObject(None)
print l1
l2 = deepcopy(l1)
print l2

l1.setName("tatat")
print l1
print l2
