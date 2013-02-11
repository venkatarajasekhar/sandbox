#!/usr/bin/python

#----------------------------------------------------------------------
# Module includes
#----------------------------------------------------------------------
import sys

from PyQt4.QtCore import *
from PyQt4.QtGui import *

#Does partial exist in this version?
#If version is to old, create the function
if sys.version_info[:2] < (2, 5):
  def partial (func, arg):
    """
    partial is a function that returns a reference on another function
    Usage: my_wrapped_function=partial(unwrapper_function, parameters_set_in_stone)
    """
    def callme():
      return func(arg)
    return callme
else:
  from functools import partial

#----------------------------------------------------------------------
# Class definition (POO)
#----------------------------------------------------------------------

#Form class instance
class Form(QDialog):
  def __init__(self, parent=None):
    super(Form,self).__init__(parent)
    self.setWindowTitle("Custom Signals and Slots")
    button1=QPushButton("One")
    button2=QPushButton("Two")
    button3=QPushButton("Three")
    button4=QPushButton("Four")
    button5=QPushButton("Five")
    button6=QPushButton("Six")
    button7=QPushButton("Seven")
    #Note: label is an object of the intance, because is called in other methods of the class
    self.label=QLabel("Hello")

    layout = QHBoxLayout()
    layout.addWidget(button1)
    layout.addWidget(button2)
    layout.addWidget(button3)
    layout.addWidget(button4)
    layout.addWidget(button5)
    layout.addWidget(button6)
    layout.addWidget(button7)
    layout.addWidget(self.label)
    self.setLayout(layout)

    #TECHNIQUE 1
    #Note that one/two, ... are not widget SLOTs but simple method
    self.connect(button1, SIGNAL("clicked()"), self.one)
    self.connect(button2, SIGNAL("clicked()"), self.three)
    #Note: Here I overwrite the above connection
    self.connect(button2, SIGNAL("clicked()"), self.two)

    #TECHNIQUE 2 (BETTER WAY)
    #Given that all the methods are almost the same, instead of 
    #self.connect(button3, SIGNAL("clicked()"), self.three)
    #self.connect(button4, SIGNAL("clicked()"), self.four)
    #self.connect(button5, SIGNAL("clicked()"), self.five)
    # we try
    self.connect(button3, SIGNAL("clicked()"), partial(self.anyButton, "Three"))
    self.connect(button4, SIGNAL("clicked()"), partial(self.anyButton, "Four"))

    #FINALLY, IF IT DOESN'T WORK
    #In version of PyQt 4.0 - 4.2, the above may not work due to garbage collection
    #To avoid garbage collection, attach the partial to a 'permanent' variable
    self.button5callback=partial(self.anyButton, "Five")
    self.connect(button5, SIGNAL("clicked()"), self.button5callback) 
    #In other words, self.button5callback(self) is equivalent to self.anyButton(self, "Five")
    #We are forced to use the above, because connect only takes a 

    #TECHNIQUE 3

    #TECHNIQUE 4 (Not as good as Technique 2
    #We are using a SLOT!
    self.connect(button6, SIGNAL("clicked()"), self.clickedPseudoSLOT)
    #self.connect(button7, SIGNAL("clicked()"), self.clickedPseudoSLOT)
    #This doesn't work because pseudoSlot only! Not a real SLOT
    #Oh really? It seems that when using this notation, you cannot use self
    #but that is a real SLOT... (to investigate...)
    self.connect(button7, SIGNAL("clicked()"), self, SLOT("clickedPseudoSLOT"))

    #TECHNIQUE 5 (QSignalWrapper)

    

  def one(self):
    """
    Print in One i label
    """
    self.label.setText("(Indiv Method) You clicked button 'One'")

  def two(self):
    self.label.setText("(Indiv Method) You clicked button 'Two'")

  def three(self):
    self.label.setText("(Indiv Method) You clicked button 'Three'")

  def four(self):
    self.label.setText("(Indiv Method) You clicked button 'Four'")

  def five(self):
    self.label.setText("(Indiv Method) You clicked button 'Five'")

  def anyButton(self,who):
    self.label.setText("(Shared Method) You clicked button '%s'" % who)

  def clickedPseudoSLOT(self):
    #We can call the QObject sender method (not good POO!)
    sender=self.sender()
    #Check that sender is an existing QPushBtton instance
    if sender is None or not isinstance(sender, QPushButton):
      return
    if hasattr(sender, "text"):  #Always true since it is a QPushButton ;-)
      self.label.setText("(PseudoSLOT) You clicked button '%s'" % sender.text())

#----------------------------------------------------------------------
# Main (Sequential)
#----------------------------------------------------------------------

app = QApplication(sys.argv)
form = Form()
form.show()
app.exec_()

