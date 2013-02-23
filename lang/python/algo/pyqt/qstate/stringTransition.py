#!/usr/bin/env python


from PyQt4.QtCore import * 
from PyQt4.QtGui import * 

import sys
import time

EVENT_1, EVENT_2, EVENT_3 = range(QEvent.User, QEvent.User+3)


class StringEvent(QEvent):
    def __init__(self, str, parent=None):
        super(StringEvent, self).__init__(EVENT_1)
        qstr = QString(str)

class StringTransition(QAbstractTransition):
    def __init__(self, str, parent=None):
        super(StringTransition, self).__init__(parent)
        qstr = str
    def eventTest(self, e):
        if e.type() != EVENT_1 :
            return False
        return(self.qstr==e.qstr)
    def onTransition(self, e):
        print "totot"
         


qApp = QApplication(sys.argv)

m = QStateMachine()
button = QPushButton()

state_1 = QState()
state_2 = QState()

t12 = StringTransition("Go to state 2")
t12.setTargetState(state_2)
t21 = StringTransition("Go to state 1")
t12.setTargetState(state_1)

state_1.assignProperty(button, 'text', 'state_1')
state_2.assignProperty(button, 'text', 'state_2')

state_1.addTransition(t12)
state_2.addTransition(t21)

m.addState(state_1)
m.addState(state_2)
m.setInitialState(state_1)
m.start()
button.resize(100,50)
button.show()
time.sleep(10)
m.postDelayedEvent(StringEvent("Go to state 2"),3000)
#m.postDelayedEvent(StringEvent("Go to state 1"),6000)


sys.exit(qApp.exec_())
