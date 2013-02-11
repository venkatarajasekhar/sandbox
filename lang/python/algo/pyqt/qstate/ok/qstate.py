#!/usr/bin/env python 

import sys

from PyQt4.QtCore import *
from PyQt4.QtGui import *


def printToto():
    print "toto"

qApp = QApplication(sys.argv)
button = QPushButton("Hello")

stateMachine = QStateMachine()
state_1 = QState()
state_2 = QState()
state_3 = QState()
state_final = QFinalState()

#event_12 = QEvent()
#event_21 = QEvent()

qobj = QObject()



mBox = QMessageBox();
mBox.addButton(QMessageBox.Ok)
mBox.setText("Button geometry has been set")
mBox.setIcon(QMessageBox.Information)

class Pinger(QAbstractTransition ):
  def __init__(self, parent=None):
    super(Pinger, self).__init__(parent)
  def eventTest(self, e):
    return (true)
  def onTransition(self, e):
    print "toto"
    




#--- animations

state_1.assignProperty(button, "text", "Off / State 1")
state_1.assignProperty(button, "geometry", QRectF(0,0,150,50))

state_2.assignProperty(button, "text", "ON / State 2")
state_2.assignProperty(button, "geometry", QRectF(0,0,100,100))


#--- transistions

state_1.addTransition(button,SIGNAL("clicked()"), state_2)
state_2.addTransition(button,SIGNAL("clicked()"), state_3)
state_3.addTransition(button,SIGNAL("clicked()"), state_1)
#state_3.addTransition(button,SIGNAL("clicked()"), state_final)


#qobj.connect(state_2, SIGNAL("entered()"), mBox, SLOT("exec()"))
#stateMachine.connect(state_1, SIGNAL("entered()"), mBox, SLOT("exec()"))
#stateMachine.connect(state_2, SIGNAL("entered()"), mBox, SLOT("exec()"))
#stateMachine.connect(state_2, SIGNAL("entered()"), printToto())

stateMachine.addState(state_1)
stateMachine.addState(state_2)
stateMachine.addState(state_3)
stateMachine.addState(state_final)
stateMachine.setInitialState(state_1)
stateMachine.start()

button.resize(100,50)
button.show()
qApp.exec_()
