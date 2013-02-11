#!/usr/bin/env python

import os, sys
from PyQt4.QtCore import *
from PyQt4.QtGui import *

class Form(QDialog):
  def __init__(self, parent=None):
    super(Form, self).__init__(parent)
    self.numberLabel=QLabel("Telephone number")
    self.numberEdit=QLineEdit()
    self.but=QPushButton("Hellooo")

    self.box=QComboBox()
    self.box.addItem("Nokia")
    self.box.addItem("Qt for S60")
    self.box.addItem("widget")

    self.layout=QFormLayout()
    self.layout.addRow(self.numberLabel, self.numberEdit)
    self.layout.addRow(self.but)
    self.layout.addRow(self.box)
    
    self.groupBox=QGroupBox("Contact Details")
    self.groupBox.setLayout(self.layout)
    self.setLayout(self.layout)

    self.setWindowTitle("Calculate")






qApp=QApplication(sys.argv)
scene=QGraphicsScene()
proxy=QGraphicsProxyWidget()
groupBox=Form()
proxy=scene.addWidget(groupBox)
view=QGraphicsView()
view.setScene(scene)


view.show()
#groupBox.show()
qApp.exec_()
