#!/usr/bin/env python 

import sys
import os
import termios

from PyQt4.QtCore import *
from PyQt4.QtGui import *

EVENT_1, PING_EVENT, PONG_EVENT = range(QEvent.User, QEvent.User+3)

class PingEvent(QEvent):
    def __init__(self):
        super(PingEvent, self).__init__(PING_EVENT)
        print "pingEvent"

class PongEvent(QEvent):
    def __init__(self):
        super(PongEvent, self).__init__(PONG_EVENT)
        print "pongEvent"

class PingState(QState):
    def __init__(self, parent=None):
        super(PingState, self).__init__(parent)
    def onEntry(self, e):
        print "PingState.onEntry\n"
        m = self.machine()
        m.postDelayedEvent(PongEvent(),500)
    def onExit(self, e):
        print "PingState.onExit"

class PongState(QState):
    def __init__(self, parent=None):
        super(PongState, self).__init__(parent)
    def onEntry(self, e):
        print "PongState.onEntry\n"
        m=self.machine()
        m.postDelayedEvent(PingEvent(), 500)
    def onExit(self, e):
        print "PongState.onExit"

class PingTransition(QAbstractTransition):
    def __init__(self):
        super(PingTransition, self).__init__()
    def eventTest(self, e):
        print e.type()
        return (e.type() == PING_EVENT)
    def onTransition(self, e):
        print "ping!\n"

class PongTransition(QAbstractTransition):
    def __init__(self):
        super(PongTransition, self).__init__()
    def eventTest(self, e):
        print e.type()
        return (e.type() == PONG_EVENT ) 
    def onTransition(self, e):
        print "pong!\n"

def getchar():
    ''' Equivalent to C getchar() '''
    fd = sys.stdin.fileno()
    if os.isatty(fd):
        old = termios.tcgetattr(fd)
        new = termios.tcgetattr(fd)
        #new[3] = new[3] & ~termios.ICANON & ~termios.ECHO
        new[3] = new[3] & ~termios.ICANON
        new[6] [termios.VMIN] = 1
        new[6] [termios.VTIME] = 0
        try:
            termios.tcsetattr(fd, termios.TCSANOW, new)
            termios.tcsendbreak(fd,0)
            char = os.read(fd,1)
        finally:
            termios.tcsetattr(fd, termios.TCSAFLUSH, old)
    else:
        char = os.read(fd,1)
    return(char)

class LStdinHandler(QThread):
    ''' The parent is the one that receive the event ! '''
    def __init__(self, parent=None):
        super(LStdinHandler, self).__init__(parent)
        self.parent = parent
    def run(self):
        char = getchar()
        while char:
            ke = QKeyEvent(QEvent.KeyPress, ord(char), Qt.NoModifier, QString(char))
            QApplication.postEvent(self.parent, ke)
            char = getchar()
    

class LApplication(QCoreApplication):
    def __init__(self, argv):
        super(LApplication, self).__init__(argv)
        self.getchar = LStdinHandler(self)
    def exec_(self):
        self.getchar.start()
        return super(LApplication, self).exec_()
    def event(self, e):
        if e.type() == QEvent.KeyPress :
            if e.key() == Qt.Key_Q :
                self.quit()
        return super(LApplication, self).event(e)


#----------------------------------------------------------------------
# MAIN
#----------------------------------------------------------------------

if __name__ == "__main__":

    app = LApplication(sys.argv)

    stateMachine = QStateMachine()

    pingState = PingState()
    pingState.setObjectName("pingState")

    pongState = PongState()
    pongState.setObjectName("pongState")

    #--- transistions
    pongTransition = PongTransition()
    pingTransition = PingTransition()
    pingTransition.setTargetState(pingState)
    pongTransition.setTargetState(pongState)
    pingState.addTransition(pongTransition)
    pongState.addTransition(pingTransition)
    
    stateMachine.addState(pingState)
    stateMachine.addState(pongState)
    stateMachine.setInitialState(pongState)
    stateMachine.start()
    
    sys.exit(app.exec_())
