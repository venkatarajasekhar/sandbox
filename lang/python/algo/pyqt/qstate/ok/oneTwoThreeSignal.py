#!/usr/bin/env python 

import sys

from PyQt4.QtCore import *
from PyQt4.QtGui import *

EVENT_1, EVENT_2, EVENT_3 = range(QEvent.User, QEvent.User+3)

class OneState(QState):
    def __init__(self, parent=None):
        super(OneState, self).__init__(parent)
    def onEntry(self, e):
        m = self.machine()
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

#----------------------------------------------------------------------
# MAIN
#----------------------------------------------------------------------

if __name__ == "__main__":

    qApp = QApplication(sys.argv)

    stateMachine = QStateMachine()
    state_final = QFinalState()

    state_1 = OneState()
    state_1.setObjectName("state_1")

    state_2 = TwoState()
    state_2.setObjectName("state_2")

    state_3 = ThreeState()
    state_3.setObjectName("state_3")

    #--- transistions
    state_1.addTransition(state_1, SIGNAL("entered()"), state_2)
    state_2.addTransition(state_2, SIGNAL("entered()"), state_3)
    state_3.addTransition(state_3, SIGNAL("entered()"), state_1)
    
    stateMachine.addState(state_1)
    stateMachine.addState(state_2)
    stateMachine.addState(state_3)
    stateMachine.setInitialState(state_1)
    stateMachine.start()
    
    qApp.exec_()
