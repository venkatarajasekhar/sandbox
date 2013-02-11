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

  #Same default value of the dialog for each instance
  #Will be overwritten by the user and saved in the instance
  width=12
  beveled=True
  style="Dashed"

  def __init__(self, parent=None):
    super(Form,self).__init__(parent)
    self.setWindowTitle("Form Dialog")
    callDialogButton=QPushButton("Pen dialog")
    layout = QHBoxLayout()
    layout.addWidget(callDialogButton)
    self.setLayout(layout)

    self.connect(callDialogButton, SIGNAL("clicked()"), self.setPenProperties )

  def setPenProperties(self):
    print "hello"
    #Parent of dialog is form.self ;-)
    dialog=PenPropertiesDialog(self)
    #Widgets of dialog are exposed 
    #SO DUMB DIALOG ARE USUALLY NOT RECOMMENDED UNLESS VERY SIMPLE
    #Set the value of the dialog to those held in the calling form
    dialog.widthSpinBox.setValue(self.width)
    dialog.beveledCheckBox.setChecked(self.beveled)
    #findText returns the index position of the item
    dialog.styleComboBox.setCurrentIndex( dialog.styleComboBox.findText(self.style))
    #Dialog is completely decoupled from application!
    #Only its widgets cannot be changed!
    dialog.widthLabel.setText("Temperature!!")
    #Dialog is shown modaly (i.e. takes and keep focus until closed)
    #Loop here until cancel or ok button is pressed
    if dialog.exec_():
      print "accept() signal received!"
      print "saving dialog values in form instance"
      self.width = dialog.widthSpinBox.value()
      self.beveled = dialog.beveledCheckBox.isChecked()
      self.style = unicode(dialog.styleComboBox.currentText())
      self.updateData()
    #Dialog now is ready to be discarded -> goes to garbage collection!

  def updateData(self):  
    print "Update data"



class PenPropertiesDialog(QDialog):
  def __init__(self, parent=None):
    super(PenPropertiesDialog,self).__init__(parent)
    self.setWindowTitle("Pen Properties Dialog")
    self.widthSpinBox=QSpinBox()
    #Although not strictly required,
    #we make this QLabel accessible from the dialog
    #In setPenProperties it can therefore be accessed!
    self.widthLabel=QLabel("&Width:")			#Alt+W is a shortcut, a.k.a. keyboard accelerator
    self.widthLabel.setBuddy(self.widthSpinBox)		#When Alt+W pressed, give focus to widthSpinBox

    self.widthSpinBox.setAlignment(Qt.AlignRight|Qt.AlignVCenter)
    self.widthSpinBox.setRange(0,24)
    self.beveledCheckBox = QCheckBox("&Bevelev edges")
    self.styleComboBox=QComboBox()
    #styleLabel is not accessible from other method/class/instance
    styleLabel =QLabel("&Style:")
    #&S... Alt+S is a keyboard accelerator
    #When pressed the focus is put on the styleComboBox
    styleLabel.setBuddy(self.styleComboBox)
    self.styleComboBox.addItems(["Solid", "Dashed", "Dotted", "DashDotted", "DashDotDotted"])

    #Those button must be special to finish the button.exec_ function
    #but what is it? Emit the proper signals!
    okButton = QPushButton("&OK")
    cancelButton = QPushButton("Cancel")
    self.connect(okButton, SIGNAL("clicked()"), self.accept) 
    self.connect(okButton, SIGNAL("clicked()"), self, SLOT("accept()")) 
    self.connect(cancelButton, SIGNAL("clicked()"), self, SLOT("reject()")) 

    #Instead of 2 buttons, there is a widget that already does all of the above 
    buttonBox=QDialogButtonBox(QDialogButtonBox.Ok|QDialogButtonBox.Cancel)
    buttonBox.button(QDialogButtonBox.Ok).setDefault(True)
    buttonBox.setOrientation(Qt.Vertical) # Just for fun!
    self.connect(buttonBox,SIGNAL("accepted()"), self, SLOT("accept()"))
    self.connect(buttonBox,SIGNAL("rejected()"), self, SLOT("reject()"))
    
    
    layout = QGridLayout()
    layout.addWidget(self.widthLabel,0,0)
    layout.addWidget(self.widthSpinBox,0,1)
    layout.addWidget(self.beveledCheckBox,0,2)
    layout.addWidget(styleLabel, 1,0)
    #styleComboBox is located in 1,1 and span to 1,2
    #parameters are row, column, row span, column span
    layout.addWidget(self.styleComboBox, 1,1,1,2)
    #Here we have the buttonLayout nested in the top level layout
    buttonLayout = QHBoxLayout()
    #stretch push button all the way to the right
    #stretch consumes all the space when dialog is stretched horizontally!
    buttonLayout.addStretch()
    #We will not display the ok and cancel button
    #We will display only the buttonBox with both cancel and ok buttons
    buttonLayout.addWidget(okButton)
    buttonLayout.addWidget(cancelButton)
    buttonLayout.addWidget(buttonBox)
    #nesting
    #add buttonLayout in layout grid at row 2, column 1, 1 row span, 3 column span
    layout.addLayout(buttonLayout, 2, 0, 1, 3)
    #set the top level layout
    self.setLayout(layout)


#----------------------------------------------------------------------
# Main (Sequential)
#----------------------------------------------------------------------

app = QApplication(sys.argv)
form = Form()
form.show()
app.exec_()

