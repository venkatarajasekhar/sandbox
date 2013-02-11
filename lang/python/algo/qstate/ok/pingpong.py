#!/usr/bin/env python 

import sys

from PyQt4.QtCore import *
from PyQt4.QtGui import *

EVENT_1, PING_EVENT, PONG_EVENT = range(QEvent.User, QEvent.User+3)

class PingEvent(QEvent):
    def __init__(self):
        super(PingEvent, self).__init__(PING_EVENT)

class PongEvent(QEvent):
    def __init__(self):
        super(PongEvent, self).__init__(PONG_EVENT)

class PingState(QState):
    def __init__(self, parent=None):
        super(PingState, self).__init__(parent)
    def onEntry(self, e):
        m = self.machine()
        print "PingState.onEntry\n"
        m.postEvent(PingEvent())
    def onExit(self, e):
        print "PingState.onExit"

class PongState(QState):
    def __init__(self, parent=None):
        super(PongState, self).__init__(parent)
    def onEntry(self, e):
        print "PongState.onEntry\n"
    def onExit(self, e):
        print "PongState.onExit"

class PingTransition(QAbstractTransition):
    def __init__(self):
        super(PingTransition, self).__init__()
    def eventTest(self, e):
        if (e.type() == PING_EVENT ) :
            retVal = 1
        else :
            retVal = 0
        return (retVal)
    def onTransition(self, e):
        m=self.machine()
        m.postDelayedEvent(PongEvent(), 500)
        print "pong!\n"

class PongTransition(QAbstractTransition):
    def __init__(self):
        super(PongTransition, self).__init__()
    def eventTest(self, e):
        if (e.type() == PONG_EVENT ) :
            retVal = 1
        else :
            retVal = 0
        return (retVal)
    def onTransition(self, e):
        m=self.machine()
        m.postDelayedEvent(PingEvent(), 500)
        print "ping?\n"
    

#----------------------------------------------------------------------
# MAIN
#----------------------------------------------------------------------

if __name__ == "__main__":

    qApp = QApplication(sys.argv)
    button = QPushButton("Hello")

    stateMachine = QStateMachine()
    state_final = QFinalState()

    #all states are started at the same time
    group = QState(QState.ParallelStates)
    group.setObjectName("group")

    pingState = PingState(group)
    pingState.setObjectName("pingState")

    #pongState = QState(group)
    pongState = PongState(group)
    pongState.setObjectName("pongState")

    #--- transistions
    pingState.addTransition(PongTransition())
    pongState.addTransition(PingTransition())
    
    stateMachine.addState(group)
    stateMachine.setInitialState(group)
    stateMachine.start()
    
    qApp.exec_()
