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

import os
import platform
import sys
from PyQt4.QtCore import *
from PyQt4.QtGui import *
import qrc_resources



__version__ = "1.0.0"


class MainWindow(QMainWindow):

    def __init__(self, parent=None):
        super(MainWindow, self).__init__(parent)

        self.mirroredvertically = False
        self.mirroredhorizontally = False

        status = self.statusBar()
        status.setSizeGripEnabled(True)
        #Message to display in the status bar
        #... until another is dispalyed (showMessage) or 5000ms elapse
        status.showMessage("Ready", 5000)
        self.editMenu=QMenu()

        #Menu
        editInvertAction = self.createAction("&Invert", self.editInvert, "Ctrl+I", "editinvert", "Invert the image's colors", True, "toggled(bool)")
        editSwapRedAndBlueAction = self.createAction( "Sw&ap Red and Blue", self.editSwapRedAndBlue, "Ctrl+A", "editswap", "Swap the image's red and blue color components", True, "toggled(bool)")

        mirrorGroup = QActionGroup(self)
        editUnMirrorAction = self.createAction("&Unmirror", self.editUnMirror, "Ctrl+U", "editunmirror", "Unmirror the image", True, "toggled(bool)")
        editMirrorHorizontalAction = self.createAction( "Mirror &Horizontally", self.editMirrorHorizontal, "Ctrl+H", "editmirrorhoriz", "Horizontally mirror the image", True, "toggled(bool)")
        editMirrorVerticalAction = self.createAction( "Mirror &Vertically", self.editMirrorVertical, "Ctrl+V", "editmirrorvert", "Vertically mirror the image", True, "toggled(bool)")
        mirrorGroup.addAction(editUnMirrorAction)
        mirrorGroup.addAction(editMirrorHorizontalAction)
        mirrorGroup.addAction(editMirrorVerticalAction)
        #One and only one action should be on by default, given actionGroup definition
        editUnMirrorAction.setChecked(True)


        #editMenu = self.menuBar().addMenu("&Edit")
        self.addActions(self.editMenu, (editInvertAction, editSwapRedAndBlueAction,editMirrorHorizontalAction))
        #Sub menu mirrorMenu
        mirrorMenu = self.editMenu.addMenu(QIcon(":/editmirror.png"), "&Mirror")
        self.addActions(mirrorMenu, (editUnMirrorAction, editMirrorHorizontalAction, editMirrorVerticalAction,editInvertAction))

        self.setCentralWidget(self.editMenu)

        settings = QSettings()
        position = settings.value("MainWindow/Position", QVariant(QPoint(0, 0))).toPoint()
        self.move(position)
        self.setWindowTitle("Image Changer")


    #HELPER createAction
    #Used to shorten the code as those actions are repeated over and over
    def createAction(self, text, slot=None, shortcut=None, icon=None,
                     tip=None, checkable=False, signal="triggered()"):
        #Notice the last parameter of QAction is self, the parent
        #This is required for timely  garbage collection (trashed only when parent closes)
        action = QAction(text, self)
        if icon is not None:
            #Take icon from resource file
            action.setIcon(QIcon(":/%s.png" % icon))
        if shortcut is not None:
            action.setShortcut(shortcut)
        if tip is not None:
            action.setToolTip(tip)
            action.setStatusTip(tip)
        if slot is not None:
            #If triggered then call slot method
            self.connect(action, SIGNAL(signal), slot)
        if checkable:
            action.setCheckable(True)
        return action

    #HELPER: addActions is used for menu and toolbar
    def addActions(self, target, actions):
        for action in actions:
            if action is None:
                target.addSeparator()
            else:
                target.addAction(action)

    #Save all select group of parameters
    #This method was reimplemented
    def closeEvent(self, event):
        if self.okToContinue():    
            settings = QSettings()
            settings.setValue("MainWindow/Size", QVariant(self.size()))
            settings.setValue("MainWindow/Position",
                    QVariant(self.pos()))
            settings.setValue("MainWindow/State",
                    QVariant(self.saveState()))
        else:
            #Do not close if not ok! 
            event.ignore()


    def okToContinue(self):
        return True


    def updateStatus(self, message):
        #Show the message with a timeout of 5 sec 
        self.statusBar().showMessage(message, 5000)
        self.setCentralWidget(self.editMenu)

    def editInvert(self, on):
        self.updateStatus("Inverted" if on else "Uninverted")
        self.setCentralWidget(self.editMenu)

    def editSwapRedAndBlue(self, on):
        self.updateStatus("Swapped Red and Blue" \
                if on else "Unswapped Red and Blue")
        self.setCentralWidget(self.editMenu)

    def editUnMirror(self, on):
        self.setCentralWidget(self.editMenu)
        return

    def editMirrorHorizontal(self, on):
        self.updateStatus("Mirrored Horizontally" \
                if on else "Unmirrored Horizontally")
        self.setCentralWidget(self.editMenu)

    def editMirrorVertical(self, on):
        self.updateStatus("Mirrored Vertically" \
                if on else "Unmirrored Vertically")
        self.setCentralWidget(self.editMenu)


def main():
    app = QApplication(sys.argv)
    #~/.config/<directory> where the config is saved
    app.setOrganizationName("Qtrac Ltd.")
    app.setOrganizationDomain("qtrac.eu")
    #filename where the configuration is saved?
    app.setApplicationName("Image Changer")
    #Icon in toolbar - from resource file
    app.setWindowIcon(QIcon(":/icon.png"))
    form = MainWindow()
    form.show()
    app.exec_()


main()

