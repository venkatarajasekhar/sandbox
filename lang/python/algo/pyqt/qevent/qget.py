#!/usr/bin/env python

from PyQt4.QtCore import *
from PyQt4.QtGui  import *

import os
import sys
import termios



def getchar():
	'''
	Equivalent to getchar() 
	'''

	fd = sys.stdin.fileno()
	
	if os.isatty(fd):
		
		old = termios.tcgetattr(fd)
		new = termios.tcgetattr(fd)
		new[3] = new[3] & ~termios.ICANON & ~termios.ECHO
		new[6] [termios.VMIN] = 1
		new[6] [termios.VTIME] = 0
		
		try:
			termios.tcsetattr(fd, termios.TCSANOW, new)
			termios.tcsendbreak(fd,0)
			ch = os.read(fd,7)

		finally:
			termios.tcsetattr(fd, termios.TCSAFLUSH, old)
	else:
		ch = os.read(fd,7)
	
	return(ch)


class StdinHandler(QThread):
    keyPressed = pyqtSignal('QEvent')
    eventPressed = pyqtSignal()
    def __init__(self, parent=None):
        super(StdinHandler, self).__init__(parent)
        self.parent = parent
    def run(self):
        char = getchar()
        while char:
            print char
            ke = QKeyEvent(QEvent.KeyPress, ord(char), Qt.NoModifier, QString(char))
            ##ke = QKeyEvent(QEvent.KeyPress, ord(char), Qt.NoModifier, char)
            #self.keyPressed.emit(ke)
            QCoreApplication.postEvent(self.parent, ke)
            self.eventPressed.emit()
            char = getchar()

class EventHandlerApp(QCoreApplication):
    def __init__(self, argv):
        super(EventHandlerApp, self).__init__(argv)
    def exec_(self):
        print "exec"
        #handler = StdinHandler(EventHandlerApp.instance())
        handler = StdinHandler(self)
        ##EventHandlerApp.instance().connect(handler, SIGNAL('keyPressed(e)'), SLOT('event(e)'), Qt.QueuedConnection)
        ##EventHandlerApp.instance().connect(handler, SIGNAL('keyPressed(e)'), self.event, Qt.QueuedConnection)
        #EventHandlerApp.instance().connect(handler, SIGNAL('keyPressed(e)'), self.event)
        #self.connect(handler, SIGNAL('keyPressed(e)'), self.event)
        self.connect(handler, SIGNAL('eventPressed()'), self.eventPressed)
        handler.start()
        #return EventHandlerApp.instance().exec_()
        #return QCoreApplication.instance().exec_()
        return QCoreApplication.exec_()
    def eventPressed(self):
        print "toto"
    @pyqtSlot('QEvent')
    def event(self, e):
        type = e.type()
        if type == QEvent.KeyPress :
            print "key: %d" % e.key()
            return True
        elif type == QEvent.ChildAdded :
            print "child added" 
            child = e.child()
            print child
            print child.objectName()
        #elif type == QEvent.ChildInserted :
        elif type == 67 :
            print "child inserted request" 
        elif type == 70 :
            print "child inserted" 
        else:
            print "other QEvent" 
            print type 
        return super(EventHandlerApp, self).event(e)





if __name__ == "__main__":
    import sys
    qApp = EventHandlerApp(sys.argv)
    sys.exit(qApp.exec_())
    

