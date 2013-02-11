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

  format	#A dict with the default values of the dialog

  def __init__(self, parent=None):
    """
    Hello constructor!
    """
    super(Form,self).__init__(parent)
    self.format=dict(thousandsseparator=",",decimalmarker=".",decimalplaces=2,rednegatives=False)
    self.setWindowTitle("Form Dialog")
    callDialogButton=QPushButton("Open dialog")
    layout = QHBoxLayout()
    layout.addWidget(callDialogButton)
    self.setLayout(layout)
    self.connect(callDialogButton, SIGNAL("clicked()"), self.setNumberFormat1 )

  def setNumberFormat1(self):
    #Parent of dialog is form.self ;-)
    #Pass the format as a parameter of the instance
    #specify for the dialog who the parent is (self)
    #dialog will therefore be CENTERED on the top of the MAIN window
    #(not on the center of the screen!)
    dialog=NumberFormatDialog(self.format, self)
    #Cannot change the dialog here!
    if dialog.exec_():
      print "accept() signal received!"
      print "saving dialog values in form instance"
      #Return the values stored in the  dialog.format dictionary
      #THE VALUES HAVE ALREADY BEEN VALIDATED IN THE button.accept() method (see below)
      self.format=dialog.numberFormat()
      self.refreshTable()

    #Dialog now is ready to be discarded -> goes to garbage collection!

  def refreshTable(self):  
    print "Refresh Table"



class NumberFormatDialog(QDialog):

  format	# a copy of the parent.format, which is updated only AFTER validation

  #IMPORTANT: Note that the init method takes the format from the parent as a parameter!
  def __init__(self, format, parent=None):
    super(NumberFormatDialog,self).__init__(parent)
    self.setWindowTitle("Set Number format (Modal)")
    #Note that format is a reference to the parent.format
    #Make a copy so as not to overwrite it!
    #Note that we will overwrite it after validation, but not immediately
    self.format=format.copy()
    
    thousandsLabel = QLabel("&thousands separator")
    self.thousandsEdit = QLineEdit(format["thousandsseparator"])
    thousandsLabel.setBuddy(self.thousandsEdit)

    decimalMarkerLabel=QLabel("Decimal &marker")
    self.decimalMarkerEdit=QLineEdit(format["decimalmarker"])
    decimalMarkerLabel.setBuddy(self.decimalMarkerEdit)

    decimalPlacesLabel = QLabel("&Decimal places")
    self.decimalPlacesSpinBox = QSpinBox()
    decimalPlacesLabel.setBuddy(self.decimalPlacesSpinBox)
    self.decimalPlacesSpinBox.setRange(0,6)
    self.decimalPlacesSpinBox.setValue(format["decimalplaces"])

    self.redNegativesCheckBox = QCheckBox("&Red negative numbers")
    self.redNegativesCheckBox.setChecked(format["rednegatives"])

    #Instead of 2 buttons, there is a widget that already does all of the above 
    buttonBox=QDialogButtonBox(QDialogButtonBox.Ok|QDialogButtonBox.Cancel)
    buttonBox.button(QDialogButtonBox.Ok).setDefault(True)
    buttonBox.setOrientation(Qt.Horizontal) #Not required as default! 
    self.connect(buttonBox,SIGNAL("accepted()"), self, SLOT("accept()"))
    self.connect(buttonBox,SIGNAL("rejected()"), self, SLOT("reject()"))
    
    grid = QGridLayout()
    grid.addWidget(thousandsLabel,0,0)
    grid.addWidget(self.thousandsEdit,0,1)
    grid.addWidget(decimalMarkerLabel, 1,0)
    grid.addWidget(self.decimalMarkerEdit, 1,1)
    grid.addWidget(decimalPlacesLabel,2,0)
    grid.addWidget(self.decimalPlacesSpinBox,2,1)
    grid.addWidget(self.redNegativesCheckBox, 3, 0, 1, 2)
    grid.addWidget(buttonBox, 4, 0, 1, 2)
    self.setLayout(grid)

  def numberFormat(self):
    """
    Used to return dialog.format to parent widget
    Return a reference, which should be stored in parent.format
    """
    return self.format

  def accept(self):
    """
    POST MORTEM VALIDATION is done here
    We overwrite/overload the QDialog.accept inherited method with this one
    """
    class ThousandsError(Exception): pass
    class DecimalError(Exception): pass
    Punctuation = frozenset(" ,;:.")

    #Local/method variables, value have not be saved in self.format yet!!!!
    thousands = unicode(self.thousandsEdit.text())
    decimal = unicode(self.decimalMarkerEdit.text())

    try:
      if len(decimal) == 0:
        raise DecimalError, ("decimal marker may not be empty")
      if len(thousands) > 1:
        raise ThousandsError, ("The thousands separator may only be empty or one character")
      if len(decimal) > 1:
        raise DecimalError, ("the decimal marker must be one character")
      if thousands and thousands not in Punctuation:
        raise ThousandsError, ("The thousands separator must be a punctuation symbol")
      if decimal not in Punctuation: 
        #Notice how line is broken in 2!
        raise DecimalError, ("The decimal marker must be a "
                                 "Punctuation symbol")
    except ThousandsError, e:
      #Here line is also broken in 2
      QMessageBox.warning(self, "thousands Separator Error", 
                                 unicode(e))
      self.thousandsEdit.selectAll()
      self.thousandsEdit.setFocus()
      return
    except DecimalError, e:
      QMessageBox.warning(self, "Decimal Marker Error", unicode(e))
      self.decimalMarkerEdit.selectAll()
      self.decimalMarkerEdit.setFocus()
      return

    #THE PART BELOW IS EXECTUTED ONLY IF NO EXCEPTION HAVE BEEN RAISED ABOVE!

    #Only now do we modify the dialog format to reflect the changes
    self.format["thousandsseparator"]=thousands
    self.format["deicmalmarker"] = decimal
    self.format["decimalplaces"] = \
       self.decimalPlacesSpinBox.value()
    self.format["rednegatives"] = self.redNegativesCheckBox.isChecked()
    #WE NOW CALL SPECIFICALLY THE QDIALOG ACCEPT METHOD
    #... TO CONTINUE WITH THE dialog.exec_() if-condition
    QDialog.accept(self)
    #Note that
    #super(NumberFormatDialog,self).accept(parent)
    #would not work, as the parent is not a QButton!!!

#----------------------------------------------------------------------
# Main (Sequential)
#----------------------------------------------------------------------

app = QApplication(sys.argv)
form = Form()
form.show()
app.exec_()

