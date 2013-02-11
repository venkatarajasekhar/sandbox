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
    keyPressed = pyqtSignal('PyQt_PyObject')
    def __init__(self, parent=None):
        super(StdinHandler, self).__init__(parent)
    def run(self):
        char = getchar()
        while char:
            print char
            ke = QKeyEvent(QEvent.KeyPress, ord(char), Qt.NoModifier, QString(char))
            self.keyPressed.emit(ke)
            char = getchar()

class EventHandlerApp(QCoreApplication):
    def __init__(self, argv):
        super(EventHandlerApp, self).__init__(argv)
    def exec_(self):
        print "exec"
        handler = StdinHandler(self)
        self.connect(handler, SIGNAL('keyPressed(PyQt_PyObject)'), self.event)
        handler.start()
        return QCoreApplication.exec_()
    def event(self, e):
        if e.type() == QEvent.KeyPress :
            print "key: %d" % e.key()
            return True
        else:
            print "Other QEvent type" 
        return super(EventHandlerApp, self).event(e)

if __name__ == "__main__":
    import sys
    qApp = EventHandlerApp(sys.argv)
    sys.exit(qApp.exec_())
    

