#!/usr/bin/python


from __future__ import division

import sys

#import in current namespace
from math import * 
from PyQt4.QtCore import *
from PyQt4.QtGui import *


class Form(QDialog):
  """ no parent top level windows by default
      QDialog inheriti
  """
  def __init__(self, parent=None):
    super(Form, self).__init__(parent)
    self.setWindowTitle("Calculate")
    #Widget instanciations as top level (not self!), but
    #Widget parent is reset by setLayout method
    #Note: if parent widget is deleted, all children are deleted
    self.browser = QTextBrowser()
    self.lineedit = QLineEdit("Type an expression and press Enter")
    self.lineedit.selectAll()
    #Vertical layout of instanciated widgets
    #With default layout policy (when they stretch)
    layout = QVBoxLayout()
    layout.addWidget(self.browser)
    layout.addWidget(self.lineedit)
    self.setLayout(layout)
    #Focus is set on this widget
    #Note: Focus can only be set after the layout!
    self.lineedit.setFocus()
    #returnPressed signal is assigned to slot "self.updateUi
    #Note: updateUi method on self is called when signal is received
    self.connect(self.lineedit, SIGNAL("returnPressed()"), self.updateUi)

  def updateUi(self):
    try:
      #Convert text to unicode object
      text = unicode(self.lineedit.text())
      self.browser.append("%s = <b>%s</b>" % (text, eval (text)))
    except:
      #catch all! Not a very good practice!
      self.browser.append( "<font color=red>%s is invalid!</font>" % text)



app = QApplication(sys.argv)
form = Form()
form.show()
app.exec_()


