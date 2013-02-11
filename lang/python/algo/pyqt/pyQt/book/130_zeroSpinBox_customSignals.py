#!/usr/bin/python

import sys

from PyQt4.QtCore import *
from PyQt4.QtGui import *

#Form class instance
class Form(QDialog):
  def __init__(self, parent=None):
    super(Form,self).__init__(parent)
    self.setWindowTitle("Custom Signals and Slots")
    dial = QDial()
    dial.setNotchesVisible(True)
    #Call ZeroSpinBox class
    zeroSpinBox=ZeroSpinBox()
    layout = QHBoxLayout()
    layout.addWidget(dial)
    layout.addWidget(zeroSpinBox)
    self.setLayout(layout)

    #connect() method is inherited from QObject, i.e. connect() = QObject.connect()
    self.connect(dial, SIGNAL("valueChanged(int)"), zeroSpinBox.setValue)
    #self.connect(spinbox, SIGNAL("valueChanged(int)"), dial.setValue)
    #Better synthax that above when using Qt SLOT 
    #setValue is a Qt SLOT!
    #We could call in connect any object method, some may not be Qt slot
    #A Qt slot has a special syntax and meaning and is accessible in Qt designer ;-)
    self.connect(zeroSpinBox, SIGNAL("valueChanged(int)"), dial, SLOT("setValue(int)"))
    self.connect(zeroSpinBox, SIGNAL("atZero"), self.announce)

  #Called with atZero signal is received!
  #Note that parameter is coming from emit(SIGNAL...)
  def announce(self, zeros):
    """
    Print in console/stdout
    """
    print "ZeroSpinBox has been at zero %d times " % zeros


#ZeroSpinBox is almost like a QSpinBox (super class) 
#with the additional features described below
#Note: we just describe herein the delta
class ZeroSpinBox(QSpinBox):

   #Attribute of the instance, accessible as self.zeros
   #Default value is 0!
   zeros = 0

   def __init__(self,parent=None):
     #call init of superclass of this class, a.k.a. QSpinBox!
     super(ZeroSpinBox,self).__init__(parent)
     self.connect(self,SIGNAL("valueChanged(int)"), self.checkZero)

   def checkZero(self):
     if self.value() ==0:
       self.zeros +=1
       #Send custom signal
       #atZero is defined as a short-circuit signal
       #for short circuit any parameter goes!
       #self.zeros is part of the SIGNAL and can be used in the callback, a.k.a announce
       self.emit(SIGNAL("atZero"), self.zeros)
       #atZero not as a short circuit would be:
       #self.emit(SIGNAL("atZero(int)")

       #finally note that the signal is emitted in this Widget,
       #but that the signal is 'connected' in the Parent widget, Form

app = QApplication(sys.argv)
form = Form()
form.show()
app.exec_()

