from PyQt4.QtCore import *

class LObject(QObject):
    def __init__(self, parent=None):
        super(LObject, self).__init__(parent)
        self.arg1 = 'toto'

    def getArg2(self):
        return self.arg1 + " <--"
    arg2 = property(getArg2)

class C(object):
    def __init__(self):
        self._x = None

    @property
    def x(self):
        """I'm the 'x' property."""
        return self._x

    @x.setter
    def x(self, value):
        self._x = value

    @x.deleter
    def x(self):
        del self._x


l = LObject()
print l.__dict__


c = C()
print c.x
c.x = 3
print c.x

