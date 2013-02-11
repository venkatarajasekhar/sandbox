#!/usr/bin/python


import sys
from PyQt4.QtGui import *
from PyQt4.QtCore import *

#Define TaxRate class
class TaxRate(QObject):

  #Private (by convention) class attribute
  __rate=0
  def __init__ (self):
    super(TaxRate, self).__init__()
    self.rate = 17.5

  #accessor
  def rate(self):
    return self.__rate

  def setRate(self, rate):
    if rate != self.__rate:
      self.__rate=rate
      self.emit(SIGNAL("rateChanged"), self.__rate)

  def rateChangedMethod(self):
    print "Tax Rate changed to %.2f%%" % self.__rate



#Note that rateChangedFunc is a function and not a method.
#Methods are part of classes, are indented, and take self for first arg
#Co,pare
def rateChangedFunc(value):
   print "TaxRate changed to %.2f%%" % value



#----------------------------------------------------------------------
# MAIN
#----------------------------------------------------------------------

vat=TaxRate()
#Call function on signal
vat.connect(vat, SIGNAL("rateChanged"), rateChangedFunc)
#Call method on signal
vat.connect(vat, SIGNAL("rateChanged"), vat.rateChangedMethod)
vat.setRate(17.5)   #No change will occur (new rate is same as old one

#disable signals
vat.blockSignals(True)
print "No signal for 3.5!!!"
vat.setRate(3.5)    # A change will occur, new rate is different from previous one
#enable signals
vat.blockSignals(False)

vat.setRate(8.5)    # A change will occur, new rate is different from previous one
