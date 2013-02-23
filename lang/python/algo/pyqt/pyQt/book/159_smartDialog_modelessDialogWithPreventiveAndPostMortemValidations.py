#!/usr/bin/python

#----------------------------------------------------------------------
# Module includes
#----------------------------------------------------------------------
import sys

from PyQt4.QtCore import *
from PyQt4.QtGui import *

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
    print "To test this program, open several dialog before and after applying changes."
    print "See what happens when you apply the changes.... on new opened dialog"
    super(Form,self).__init__(parent)
    self.format=dict(thousandsseparator=",",decimalmarker=".",decimalplaces=2,rednegatives=False)
    self.setWindowTitle("Form Dialog")
    callDialogButton=QPushButton("Open dialog")
    layout = QHBoxLayout()
    layout.addWidget(callDialogButton)
    self.setLayout(layout)
    self.connect(callDialogButton, SIGNAL("clicked()"), self.setNumberFormat2 )

  def refreshTable(self):  
    print "Refresh Table"

  def setNumberFormat2(self):
    dialog=NumberFormatDialog2(self.format, self)
    #Note this is a custom signal sent when the apply button is pressed
    self.connect(dialog, SIGNAL("changed"), self.refreshTable)
    #Modeless dialog appears with show method!
    dialog.show()
    #Notice that you can open as many dialog as you want
    #Also the focus is not stuck to the dialog, but can be 
    #shifted back to the parent



class NumberFormatDialog2(QDialog):

  #No copy required here! We are working on the parent.format directly!
  #A copy is required after all....
  format	# a copy of the parent.format, which is updated only AFTER validation

  #IMPORTANT: Note that the init method takes the format from the parent as a parameter!
  def __init__(self, format, parent=None):
    super(NumberFormatDialog2,self).__init__(parent)
    self.setWindowTitle("Set Number format (Modeless)")
    #Modeless widget need explicitly to be deleted 
    #They are not automatically garbage collected!
    self.setAttribute(Qt.WA_DeleteOnClose)

    #Note that format is a reference to the parent.format
    #Make a copy so as not to overwrite it!
    #Note that we will overwrite it after validation, but not immediately
    #self.format=format.copy()
    #NOTE IN THIS CASE WE WANT TO OVERWRITE IT! 
    #MODELESS dialog changes are applied immediately
    self.format=format
    #NOTE: self.format is a reference/pointer to format's content

    # PREVENTIVE VALIDATION IS HERE
    # Prevent the user from entering incorect data
    # Post MORTEM validation is still required though ;-)

    #Regular expression ?!?!?   
    #Yes, used for preventive validation (see further below)
    #r: raw mode, no escaping in regex required
    punctuationRe = QRegExp(r"[ ,;:.]")
 
    thousandsLabel = QLabel("&thousands separator")
    self.thousandsEdit = QLineEdit(format["thousandsseparator"])
    thousandsLabel.setBuddy(self.thousandsEdit)
    self.thousandsEdit.setMaxLength(1)
    #Preventive falidation of thousandEdit
    self.thousandsEdit.setValidator(QRegExpValidator(punctuationRe,self))

    decimalMarkerLabel = QLabel("Decimal &marker")
    self.decimalMarkerEdit=QLineEdit(format["decimalmarker"])
    decimalMarkerLabel.setBuddy(self.decimalMarkerEdit)
    self.decimalMarkerEdit.setMaxLength(1)
    #One character of any kind is required
    self.decimalMarkerEdit.setInputMask("X")
    #The regural expression validates that character
    self.decimalMarkerEdit.setValidator(QRegExpValidator(punctuationRe,self))

    decimalPlacesLabel = QLabel("&Decimal places")
    self.decimalPlacesSpinBox = QSpinBox()
    decimalPlacesLabel.setBuddy(self.decimalPlacesSpinBox)
    self.decimalPlacesSpinBox.setRange(0,6)
    self.decimalPlacesSpinBox.setValue(format["decimalplaces"])

    self.redNegativesCheckBox = QCheckBox("&Red negative numbers")
    self.redNegativesCheckBox.setChecked(format["rednegatives"])

    #Instead of 2 buttons, there is a widget that already does all of the above 
    #Show apply and close button
    buttonBox=QDialogButtonBox(QDialogButtonBox.Apply|QDialogButtonBox.Close)
    buttonBox.setOrientation(Qt.Horizontal) #Not required as default! 
    #I specify which button was clicked
    #self.connect(buttonBox.button(QDialogButtonBox.Apply),SIGNAL("clicked()"), self, SLOT("apply()"))
    self.connect(buttonBox.button(QDialogButtonBox.Apply),SIGNAL("clicked()"), self.apply)
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

  def apply(self):
    """
    executed when the apply button is pressed
    POST MORTEM VALIDATION is still required ;-)
    """
    thousands=unicode(self.thousandsEdit.text())
    decimal = unicode(self.decimalMarkerEdit.text())
    #
    if thousands == decimal:
      QMessageBox.warning(self, "Format Error", "The thousands separator and the decimal marker must be different")
      self.thousandsEdit.selectAll()
      self.thousandsEdit.setFocus()
      return
    
    #Check that the decimal marker isn't empty 
    if len(decimal) == 0:
      QMessageBox.warning(self, "format Error", "The decimal marker may not be empty")
      self.decimalMarkerEdit.selectAll()
      self.decimalMarkerEdit.setFocus()
      return

    #Only now do we modify the dialog format to reflect the changes
    #Note that self.format is a reference to parent.format
    #so change are propagated directly
    self.format["thousandsseparator"]=thousands
    self.format["deicmalmarker"] = decimal
    self.format["decimalplaces"] = \
       self.decimalPlacesSpinBox.value()
    self.format["rednegatives"] = self.redNegativesCheckBox.isChecked()

    #Emit custom signal
    self.emit(SIGNAL("changed()"))
 
#----------------------------------------------------------------------
# Main (Sequential)
#----------------------------------------------------------------------

app = QApplication(sys.argv)
form = Form()
form.show()
app.exec_()

