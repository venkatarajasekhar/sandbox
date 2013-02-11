#!/usr/bin/env python

from PyQt4.QtCore import *
from PyQt4.QtGui import *
import sys


class Program(QLabel):
    def __init__(self, parent=None):
        super(Program, self).__init__(parent)
        self.setText("titi")
    def setProc(self,str="tata"):
        self.setText("toto")
    def getProc(self):
        self.setText("toto")
        return (3)
    proc = property(getProc,setProc)
        


qApp = QApplication(sys.argv)

status = QLabel()
prog = Program()

state_1 = QState()
state_2 = QState()

timer_1 = QTimer()
timer_1.setInterval(3000)
timer_1.setSingleShot(False)
timer_1.start()
state_1.addTransition(timer_1, SIGNAL('timeout()'), state_2)

timer_2 = QTimer()
timer_2.setInterval(6000)
timer_2.setSingleShot(False)
timer_2.start()
state_2.addTransition(timer_2, SIGNAL('timeout()'), state_1)



state_1.assignProperty(prog, 'proc', "state_1")
state_1.assignProperty(status, 'text', "state_1")

state_2.assignProperty(status, 'text', "state_2")
state_2.assignProperty(prog, 'proc', "state_2")

stateMachine = QStateMachine()
stateMachine.addState(state_1)
stateMachine.addState(state_2)
stateMachine.setInitialState(state_1)
stateMachine.start()

status.resize(100,100)
status.show()
prog.resize(100,200)
prog.show()

sys.exit(qApp.exec_())

