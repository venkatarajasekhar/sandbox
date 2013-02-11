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
  """
  An interesting class isn't it ?
  """

  numberFormatDialog=None 
  # Now the dialog is an attribute of the class!!! (<> None if was open!)

  format=dict()	#A dict with the default values of the dialog

  def __init__(self, parent=None):
    """
    Hello constructor!
    """
    print "To test this program, open several dialog before and after applying changes."
    print "See what happens when you apply the changes.... on new opened dialog"
    super(Form,self).__init__(parent)
    self.format=dict(thousandsseparator=",",decimalmarker=".",decimalplaces=2,rednegatives=False)
    self.numberFormatDialog=None
    self.setWindowTitle("Form Dialog")
    callDialogButton=QPushButton("Open dialog")
    layout = QHBoxLayout()
    layout.addWidget(callDialogButton)
    self.setLayout(layout)
    self.connect(callDialogButton, SIGNAL("clicked()"), self.setNumberFormat3 )

  def refreshTable(self):  
    print "Refresh Table"

  def setNumberFormat3(self):
    #Open only ONCE and hide instead of creating and destroying all the time!
    #Create the dialog the first time it is called!
    #NOTE: YOU CANNOT OPEN SEVERAL DIALOG AT THE SAME TIME!
    if self.numberFormatDialog is None:
      #Note that the refreshTable method is passed to the dialog box directly.
      #The dialog can therefore call that method directly without passing 
      #through its parent as was the case before
      #THEREFORE NO NEED OF A SLOT/SIGNAL connection
      self.numberFormatDialog=NumberFormatDialog3(self.format, self.refreshTable, self)

    #Note even if the dialog was open several times, we could not see the changes in one propagated in the other
    #self.numberFormatDialog=NumberFormatDialog3(self.format, self.refreshTable, self)

    #NO SIGNAL NEEDED HERE!, THE DIALOG IS AUTONOMOUS
    #Note this is a custom signal sent when the apply button is pressed
    #self.connect(dialog, SIGNAL("changed"), self.refreshTable)

    #Modeless dialog appears with show method!
    #Note that the dialog is now an attribute of the class!
    self.numberFormatDialog.show()
    #Put the dialog on the top of all other windows
    self.numberFormatDialog.raise_()	# <--- raise_ to avoid conflict with raise() exception statement
    #Give the focus to the dialog window
    #Note that setFocus is only for widgets
    self.numberFormatDialog.activateWindow()
    #Notice that you can open as many dialog as you want
    #Also the focus is not stuck to the dialog, but can be 
    #shifted back to the parent



class NumberFormatDialog3(QDialog):

  #No copy required here! We are working on the parent.format directly!
  #A copy is required after all....
  format=dict()	# a copy of the parent.format, which is updated only AFTER validation

  callback=None      #reference to parent.refreshTable

  #IMPORTANT: Note that the init method takes the format from the parent as a parameter!
  def __init__(self, format, callback, parent=None):
    super(NumberFormatDialog3,self).__init__(parent)

    self.callback=callback

    self.setWindowTitle("Set Number format (Modeless)")
    #Modeless widget need explicitly to be deleted  --- NOT!
    #They are not automatically garbage collected!
    #self.setAttribute(Qt.WA_DeleteOnClose)
    #INDEED THE DIALOG IS ONLY HIDDEN, NOT DESTROYED

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

    #NO APPLY OR CLOSE BUTTON HERE!
    #Instead of 2 buttons, there is a widget that already does all of the above 
    #Show apply and close button
    #buttonBox=QDialogButtonBox(QDialogButtonBox.Apply|QDialogButtonBox.Close)
    #buttonBox.setOrientation(Qt.Horizontal) #Not required as default! 
    #I specify which button was clicked
    #self.connect(buttonBox.button(QDialogButtonBox.Apply),SIGNAL("clicked()"), self, SLOT("apply()"))
    #self.connect(buttonBox.button(QDialogButtonBox.Apply),SIGNAL("clicked()"), self.apply)
    #self.connect(buttonBox,SIGNAL("rejected()"), self, SLOT("reject()"))

    #Requried new signal
    self.connect(self.thousandsEdit, SIGNAL("textEdited(QString)"), self.checkAndFix)
    self.connect(self.decimalMarkerEdit, SIGNAL("textEdited(QString)"), self.checkAndFix)
    self.connect(self.decimalPlacesSpinBox, SIGNAL("valueChanged(int)"), self.apply)
    self.connect(self.redNegativesCheckBox, SIGNAL("toggled(bool)"), self.apply)
    
    grid = QGridLayout()
    grid.addWidget(thousandsLabel,0,0)
    grid.addWidget(self.thousandsEdit,0,1)
    grid.addWidget(decimalMarkerLabel, 1,0)
    grid.addWidget(self.decimalMarkerEdit, 1,1)
    grid.addWidget(decimalPlacesLabel,2,0)
    grid.addWidget(self.decimalPlacesSpinBox,2,1)
    grid.addWidget(self.redNegativesCheckBox, 3, 0, 1, 2)
    #No buttonBox anymore!
    #grid.addWidget(buttonBox, 4, 0, 1, 2)
    self.setLayout(grid)

  #apply doesn't send any signal back to parent
  
  def apply(self):
    """
    executed when the apply button is pressed
    NO POST MORTEM VALIDATION HERE, CHECK checkAndFix method!
    """
    #Change self.format and parent.format at the same time! 
    self.format["thousandsseparator"]=unicode(self.thousandsEdit.text())
    self.format["decimalmarker"] = unicode(self.decimalMarkerEdit.text())
    self.format["decimalplaces"] = self.decimalPlacesSpinBox.value()
    self.format["rednegatives"] = self.redNegativesCheckBox.isChecked()

    #Call the reference to the parent method
    #Note that the parent method use the values stored in parent.format
    #which are the same as those in self.format
    self.callback()

  def checkAndFix(self):
    """
    POST VALIDATION IS DONE HERE INSEAD OF IN THE APPLY METHOD
    """
    thousands=unicode(self.thousandsEdit.text())
    decimal = unicode(self.decimalMarkerEdit.text())
    if thousands == decimal:
      QMessageBox.warning(self, "Format Error", "The thousands separator and the decimal marker must be different")
      #self.thousandsEdit.selectAll()
      #Clear  the entry variation ;-)
      self.thousandsEdit.clear()
      self.thousandsEdit.setFocus()
      #No return statement in this version!
      #return
    
    #Check that the decimal marker isn't empty 
    if len(decimal) == 0:
      QMessageBox.warning(self, "format Error", "The decimal marker may not be empty")
      self.decimalMarkerEdit.selectAll()
      self.decimalMarkerEdit.setFocus()
      #No return statement in this version!
      #return

    #Call the self.apply method and carryout the changes immediately
    self.apply

#----------------------------------------------------------------------
# Main (Sequential)
#----------------------------------------------------------------------

app = QApplication(sys.argv)
form = Form()
form.show()


app.exec_()

