#!/usr/bin/env python

from PyQt4.QtCore import *
from PyQt4.QtGui  import *

class StdinHandler(QThread):
    def __init__(self, parent=None):
        super(StdinHandler, self).__init__(parent)
    def run(self):
        
        return
    def keyPressed(self, e):
        return

class EventHandlerApp(QCoreApplication):
    def __init__(self, argv):
        super(EventHandlerApp, self).__init__(argv)
    def exec_(self):
        handler = StdinHandler(EventHandlerApp.instance())
        EventHandlerApp.instance().connect(handler, SIGNAL('keyPressed(e)'), SLOT('event(e)'), Qt.QueuedConnection)
        handler.start()
        return EventHandlerApp.instance().exec_()
    def event(self, e):
        if e.type() == QEvent.KeyPress :
            print "key: " + e.key()
            return True
        else:
            print "other QEvent" 
        return QCoreApplication.event(e)





if __name__ == "__main__":
    import sys
    qApp = EventHandlerApp(sys.argv)
    sys.exit(qApp.exec_())
    

