#!/usr/bin/env python
# Copyright (c) 2007-8 Qtrac Ltd. All rights reserved.
# This program or module is free software: you can redistribute it and/or
# modify it under the terms of the GNU General Public License as published
# by the Free Software Foundation, either version 2 of the License, or
# version 3 of the License, or (at your option) any later version. It is
# provided for educational purposes and is distributed in the hope that
# it will be useful, but WITHOUT ANY WARRANTY; without even the implied
# warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See
# the GNU General Public License for more details.

import re
from PyQt4.QtCore import *
from PyQt4.QtGui import *
import ui_findandreplacedlg

MAC = "qt_mac_set_native_menubar" in dir()


class FindAndReplaceDlg(QDialog,
        ui_findandreplacedlg.Ui_FindAndReplaceDlg):
    """
    This class inherited from 2 classes!!!
    Note that those 2 classes do not overlap
    """

    def __init__(self, text, parent=None):
        super(FindAndReplaceDlg, self).__init__(parent)
        #TEXT to search
        #Initialized at text (parameter QString) but...
        #... later is replaced with the modified text
        self.__text = unicode(text)
        #Position in text
        self.__index = 0
        #Coming from ui module...
        #... from the second class defined in the ui module!
        #Note that this method connect signal to slot (SLOT which have NOT been defined in GUI!!!)
        #called slot still need to be defined: ex on_findLineEdit_textEdited()
        #This is the slot called when the widget findLineEdit is textEdited() 
        self.setupUi(self)
        #setupUi and retranslateUi are the only 2 methods in ui_ module

        #If a MAC computer
        if not MAC:
            #Those widget CANNOt get focus including when using Tab
            #Use keyboard accelerator
            self.findButton.setFocusPolicy(Qt.NoFocus)
            self.replaceButton.setFocusPolicy(Qt.NoFocus)
            self.replaceAllButton.setFocusPolicy(Qt.NoFocus)
            self.closeButton.setFocusPolicy(Qt.NoFocus)
        self.updateUi()


    #DECORATOR: To distinguish between between signal that have the same name but <> param
    #QString is the param of the signal IN THIS VERSION OF QT
    #If Qt changes or whatever, we need to make sure that this method/slot is executed only with the correct params
    @pyqtSignature("QString")
    #Note that QString is not optional, hence it must appear in the decorator
    def on_findLineEdit_textEdited(self, text):
        """
        SLOT for when the widget findLine is textEdited()
        Note that text is a QString
        """
        #Start from beginning of file
        self.__index = 0
        self.updateUi()


    def makeRegex(self):
        findText = unicode(self.findLineEdit.text())
        if unicode(self.syntaxComboBox.currentText()) == "Literal":
            findText = re.escape(findText)
        flags = re.MULTILINE|re.DOTALL|re.UNICODE
        if not self.caseCheckBox.isChecked():
            #regex compilation flag
            flags |= re.IGNORECASE
        if self.wholeCheckBox.isChecked():
            findText = r"\b%s\b" % findText
        #Compile regex and return it
        return re.compile(findText, flags)


    #DECORATOR: This decorator has some optional parameter
    #but we are not interested in it
    #Q: What is this boolean?
    @pyqtSignature("")
    def on_findButton_clicked(self):
        #Compile the regex using the attributes of the dialog
        regex = self.makeRegex()
        #where to execute the regexp
        match = regex.search(self.__text, self.__index)
        if match is not None:
            self.__index = match.end()
            self.emit(SIGNAL("found"), match.start())
        else:
            self.emit(SIGNAL("notfound"))
        
        
    @pyqtSignature("")
    def on_replaceButton_clicked(self):
        regex = self.makeRegex()
        #sub method for substitute
        # - 1 - means replace only once!
        self.__text = regex.sub(unicode(self.replaceLineEdit.text()),
                                self.__text, 1)
        

    @pyqtSignature("")
    def on_replaceAllButton_clicked(self):
        regex = self.makeRegex()
        self.__text = regex.sub(unicode(self.replaceLineEdit.text()),
                                self.__text)
        

    def updateUi(self):
        #If text is not empty
        enable = not self.findLineEdit.text().isEmpty()
        #enable (ungrey) the buttons
        self.findButton.setEnabled(enable)
        self.replaceButton.setEnabled(enable)
        self.replaceAllButton.setEnabled(enable)

    #used to access text in private variable
    def text(self):
        return self.__text


#Test code ....
if __name__ == "__main__":
    import sys

    #Sample text
    text = """US experience shows that, unlike traditional patents,
software patents do not encourage innovation and R&D, quite the
contrary. In particular they hurt small and medium-sized enterprises
and generally newcomers in the market. They will just weaken the market
and increase spending on patents and litigation, at the expense of
technological innovation and research. Especially dangerous are
attempts to abuse the patent system by preventing interoperability as a
means of avoiding competition with technological ability.
--- Extract quoted from Linus Torvalds and Alan Cox's letter
to the President of the European Parliament
http://www.effi.org/patentit/patents_torvalds_cox.html"""

    #Test on methods
    def found(where):
        print "Found at %d" % where

    #Test on methods
    def nomore():
        print "No more found"

    app = QApplication(sys.argv)
    form = FindAndReplaceDlg(text)
    form.connect(form, SIGNAL("found"), found)
    form.connect(form, SIGNAL("notfound"), nomore)
    form.show()
    app.exec_()
    print form.text()
