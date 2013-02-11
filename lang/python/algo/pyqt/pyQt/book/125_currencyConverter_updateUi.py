#!/usr/bin/python


import sys

#one of the python class for networking
import urllib2

from PyQt4.QtCore import *
from PyQt4.QtGui import *


#Form class instance
class Form(QDialog):
  def __init__(self, parent=None):
    super(Form,self).__init__(parent)
    self.setWindowTitle("Currency Converter")
   
    #Objects with no class reference
    #Note: They are only accessed in this method 
    #getData populate the self.rates dictionary
    date =self.getdata()
    dateLabel=QLabel(date)
    #self.rate dictionary keys are currency names
    #self.rate dictionary values are conversion factors
    rates = sorted(self.rates.keys())

    #Widgets that need a reference in class instance (self)
    #Note: Those widgets are used in other methods of the same class
    #Note: References are used for methods to access each widget 
    self.fromComboBox = QComboBox()
    self.fromComboBox.addItems(rates)
    self.fromSpinBox=QDoubleSpinBox()
    self.fromSpinBox.setRange(0.01, 10000000.00)	#min, max
    self.fromSpinBox.setValue(1.00)			#value
    self.toComboBox = QComboBox()
    self.toComboBox.addItems(rates)
    #Conversion rate set explicitly (from dollars to dollars!)
    self.toLabel=QLabel("1.00")

    #Now the layout of the widgets is a grid
    grid = QGridLayout()
    grid.addWidget(dateLabel,0,0)
    #Huh... nothing is in 0,1 grid layout!
    grid.addWidget(self.fromComboBox,1,0)
    grid.addWidget(self.fromSpinBox,1,1)
    grid.addWidget(self.toComboBox,2,0)
    grid.addWidget(self.toLabel,2,1)
    self.setLayout(grid)

    #Now the form's behavior (widget's signal -> slot)
    self.connect(self.fromComboBox, SIGNAL("currentIndexChanged(int)"), self.updateUi)
    self.connect(self.toComboBox, SIGNAL("currentIndexChanged(int)"), self.updateUi)
    self.connect(self.fromSpinBox, SIGNAL("valueChanged(double)"), self.updateUi)
  

  def updateUi(self):
    to=unicode(self.toComboBox.currentText())
    #Beware "from" is a python reserved word!!! So we use from_ instead!
    from_ = unicode(self.fromComboBox.currentText())
    amount = (self.rates[from_] / self.rates[to]) * self.fromSpinBox.value() 
    self.toLabel.setText("%0.2f" % amount)

  def getdata(self): 
    """
    Notice in this method, attributes are created on the fly
    """
    self.rates = {}
    try:
      date = "Unknown"
      fh = urllib2.urlopen("http://www.bankofcanada.ca" "/en/markets/csv/exchange_eng.csv")
      for line in fh:
        if not line or line.startswith(("#", "Closing")):
           continue
        fields = line.split(",")
        if line.startswith("Date "):
          date = fields[-1]
        else:
          try:
            value = float(fields[-1])
            self.rates[unicode(fields[0])] = value
          except ValueError:
            #Here we catch parsing error such as invalid value
            pass
      return "Exchange Rates Date: " + date
    except Exception, e:
      #Here we catch urllib exception, i.e. network problem
      return "Failed to download: \n%s" %e


app = QApplication(sys.argv)
form = Form()
form.show()
app.exec_()

