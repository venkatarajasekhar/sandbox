#!/usr/bin/python


import sys

from PyQt4.QtCore import *
from PyQt4.QtGui import *


#Form class instance
class Form(QDialog):
  def __init__(self, parent=None):
    super(Form,self).__init__(parent)
    self.setWindowTitle("Signals and Slots")
    dial = QDial()
    dial.setNotchesVisible(True)
    spinbox=QSpinBox()
    layout = QHBoxLayout()
    layout.addWidget(dial)
    layout.addWidget(spinbox)
    self.setLayout(layout)

    #connect() method is inherited from QObject, i.e. connect() = QObject.connect()
    self.connect(dial, SIGNAL("valueChanged(int)"), spinbox.setValue)
    #self.connect(spinbox, SIGNAL("valueChanged(int)"), dial.setValue)
    #Better synthax that above when using Qt SLOT 
    #setValue is a Qt SLOT!
    #We could call in connect any object method, some may not be Qt slot
    #A Qt slot has a special syntax and meaning and is accessible in Qt designer ;-)
    self.connect(spinbox, SIGNAL("valueChanged(int)"), dial, SLOT("setValue(int)"))



app = QApplication(sys.argv)
form = Form()
form.show()
app.exec_()


