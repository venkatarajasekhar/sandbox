#!/usr/bin/env python 

import sys

from PyQt4.QtCore import *
from PyQt4.QtGui import *

EVENT_1, EVENT_2, EVENT_3 = range(QEvent.User, QEvent.User+3)

class OneEvent(QEvent):
    def __init__(self):
        super(OneEvent, self).__init__(EVENT_1)

class TwoEvent(QEvent):
    def __init__(self):
        super(TwoEvent, self).__init__(EVENT_2)

class ThreeEvent(QEvent):
    def __init__(self):
        super(ThreeEvent, self).__init__(EVENT_3)

class OneState(QState):
    def __init__(self, parent=None):
        super(OneState, self).__init__(parent)
    def onEntry(self, e):
        print "OneState.onEntry\n"
    def onExit(self, e):
        print "OneState.onExit"

class TwoState(QState):
    def __init__(self, parent=None):
        super(TwoState, self).__init__(parent)
    def onEntry(self, e):
        print "TwoState.onEntry\n"
    def onExit(self, e):
        print "TwoState.onExit"

class ThreeState(QState):
    def __init__(self, parent=None):
        super(ThreeState, self).__init__(parent)
    def onEntry(self, e):
        print "ThreeState.onEntry\n"
    def onExit(self, e):
        print "ThreeState.onExit"

class GoToOneTransition(QAbstractTransition):
    def __init__(self):
        super(GoToOneTransition, self).__init__()
    def eventTest(self, e):
        if (e.type() == EVENT_1 ) :
            retVal = 1
        else :
            retVal = 0
        return (retVal)
    def onTransition(self, e):
        m=self.machine()
        m.postDelayedEvent(TwoEvent(), 500)
        print "GoToOneTransition.onTransition\n"

class GoToTwoTransition(QAbstractTransition):
    def __init__(self):
        super(GoToTwoTransition, self).__init__()
    def eventTest(self, e):
        if (e.type() == EVENT_2 ) :
            retVal = 1
        else :
            retVal = 0
        return (retVal)
    def onTransition(self, e):
        m=self.machine()
        m.postDelayedEvent(ThreeEvent(), 500)
        print "GoToTwoTransition.onTransition\n"
    
class GoToThreeTransition(QAbstractTransition):
    def __init__(self):
        super(GoToThreeTransition, self).__init__()
    def eventTest(self, e):
        if (e.type() == EVENT_3 ) :
            retVal = 1
        else :
            retVal = 0
        return (retVal)
    def onTransition(self, e):
        m=self.machine()
        m.postDelayedEvent(OneEvent(), 500)
        print "GoToThreeTransition.onTransition\n"
    

#----------------------------------------------------------------------
# MAIN
#----------------------------------------------------------------------

if __name__ == "__main__":

    qApp = QApplication(sys.argv)
    button = QPushButton("Hello")

    stateMachine = QStateMachine()
    state_final = QFinalState()

    #all states are started at the same time
    #group = QState(QState.ParallelStates)
    #group.setObjectName("group")

    state_1 = OneState()
    state_1.setObjectName("state_1")

    state_2 = TwoState()
    state_2.setObjectName("state_2")

    state_3 = ThreeState()
    state_3.setObjectName("state_3")

    #--- transistions
    t12=GoToTwoTransition()
    t23=GoToThreeTransition()
    t31=GoToOneTransition()

    #Set destinations of transitions
    t12.setTargetState(state_2)
    t23.setTargetState(state_3)
    t31.setTargetState(state_1)

    #Attach the transition to the states
    state_1.addTransition(t12)
    state_2.addTransition(t23)
    state_3.addTransition(t31)

    stateMachine.addState(state_1)
    stateMachine.addState(state_2)
    stateMachine.addState(state_3)
    stateMachine.setInitialState(state_1)
    stateMachine.start()
    
    qApp.exec_()
