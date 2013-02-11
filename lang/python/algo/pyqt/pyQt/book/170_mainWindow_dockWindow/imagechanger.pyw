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
import helpform
import newimagedlg
import qrc_resources


__version__ = "1.0.0"


class MainWindow(QMainWindow):

    def __init__(self, parent=None):
        super(MainWindow, self).__init__(parent)

        #QImage is where the image is stored?
        #QImage doesn't have a parent
        #QImage is like a string or a number, that is data!
        self.image = QImage()
        #Boolean that say if the image has been modified and need to be saved
        self.dirty = False
        self.filename = None
        #Other boolean to be saved for context
        self.mirroredvertically = False
        self.mirroredhorizontally = False

        #QLabel is used to display the image
        self.imageLabel = QLabel()
        #If no image is loaded, make the widget a certain size
        #When the application open the first time, it is therefore not ackward
        self.imageLabel.setMinimumSize(200, 200)
        self.imageLabel.setAlignment(Qt.AlignCenter)
        #There is a contextual menu on that QLabel widget!
        self.imageLabel.setContextMenuPolicy(Qt.ActionsContextMenu)
        #QLabel is the central widget of the MainWidow
        #Only one central widget, but that widget can be a composite
        self.setCentralWidget(self.imageLabel)

        #Create a DockWidget labelled Log
        logDockWidget = QDockWidget("Log", self)
        #ObjectName is used to save settings
        logDockWidget.setObjectName("LogDockWidget")
        logDockWidget.setAllowedAreas(Qt.LeftDockWidgetArea|
                                      Qt.RightDockWidgetArea)
        self.listWidget = QListWidget()
        #Dock widget have only one widget, but can be a composed widget!
        logDockWidget.setWidget(self.listWidget)
        #Default location
        #Note that the widget position is saved
        self.addDockWidget(Qt.RightDockWidgetArea, logDockWidget)

        #A reference to a printer
        # and printer setting/preferences
        self.printer = None

        #Status bar consist of a QLabel and ...
        self.sizeLabel = QLabel()
        self.sizeLabel.setFrameStyle(QFrame.StyledPanel|QFrame.Sunken)
        #instanciation of the status bar...
        status = self.statusBar()
        status.setSizeGripEnabled(True)
        status.addPermanentWidget(self.sizeLabel)
        #Message to display in the status bar
        #... until another is dispalyed (showMessage) or 5000ms elapse
        status.showMessage("Ready", 5000)

        #Menu
        #fileNewAction is an ATTRIBUTE of the MainWindow (use SELF.createAction)
        #&New means Alt+F N is keyboard shortcut to menu
        #Alt+F is required to open the file menu first 
        #N is then shortcut to go to New
        #self.fileNew method is triggered when this action is triggered
        #QKeySequence.New is another more direct shortcut ex; Ctrl+N
        #... nore that QKeySequnce.New is used to use the standard for this OS
        #... QKeySequnce.New is a string = to"Ctrl+N"
        #filenew.png is icon?!??!
        #Crate an image is message in status bar
        fileNewAction = self.createAction("&New...", self.fileNew,
                QKeySequence.New, "filenew", "Create an image file")
        #Note that self.createAction is an helper method
        fileOpenAction = self.createAction("&Open...", self.fileOpen,
                QKeySequence.Open, "fileopen",
                "Open an existing image file")
        fileSaveAction = self.createAction("&Save", self.fileSave,
                QKeySequence.Save, "filesave", "Save the image")
        fileSaveAsAction = self.createAction("Save &As...",
                self.fileSaveAs, icon="filesaveas",
                tip="Save the image using a new name")
        filePrintAction = self.createAction("&Print", self.filePrint,
                QKeySequence.Print, "fileprint", "Print the image")
        #Notice the custom shortcut "Crtl+Q"
        fileQuitAction = self.createAction("&Quit", self.close,
                "Ctrl+Q", "filequit", "Close the application")
        editInvertAction = self.createAction("&Invert",
                self.editInvert, "Ctrl+I", "editinvert",
                "Invert the image's colors", True, "toggled(bool)")
        editSwapRedAndBlueAction = self.createAction(
                "Sw&ap Red and Blue", self.editSwapRedAndBlue,
                "Ctrl+A", "editswap",
                "Swap the image's red and blue color components",
                True, "toggled(bool)")
        editZoomAction = self.createAction("&Zoom...", self.editZoom,
                "Alt+Z", "editzoom", "Zoom the image")

        #WHAT IS THIS?
        #ACtion groups are used when they are dependencies between actions
        #Here the image can only be mirrored H or mirrored V or unmirrored ;-)
        #Notice that the parent is set to self for garbage collection at close time only
        mirrorGroup = QActionGroup(self)
        editUnMirrorAction = self.createAction("&Unmirror",
                self.editUnMirror, "Ctrl+U", "editunmirror",
                "Unmirror the image", True, "toggled(bool)")
        mirrorGroup.addAction(editUnMirrorAction)
        editMirrorHorizontalAction = self.createAction(
                "Mirror &Horizontally", self.editMirrorHorizontal,
                "Ctrl+H", "editmirrorhoriz",
                "Horizontally mirror the image", True, "toggled(bool)")
        mirrorGroup.addAction(editMirrorHorizontalAction)
        editMirrorVerticalAction = self.createAction(
                "Mirror &Vertically", self.editMirrorVertical,
                "Ctrl+V", "editmirrorvert",
                "Vertically mirror the image", True, "toggled(bool)")
        mirrorGroup.addAction(editMirrorVerticalAction)
        #One and only one action should be on by default, given actionGroup definition
        editUnMirrorAction.setChecked(True)


        helpAboutAction = self.createAction("&About Image Changer",
                self.helpAbout)
        helpHelpAction = self.createAction("&Help", self.helpHelp,
                QKeySequence.HelpContents)

        #NOTE THAT ACTIONS HAVE BEEN CREATED, BUT NONE OF THEM WORK UNTIL
        #THEY ARE ADDED TO A MENU, TOOLBAR, OR BOTH

        #fileMenu is an instance variable, because it is populated dynamically 
        #WHY? Post filenames of previously opened files 
        self.fileMenu = self.menuBar().addMenu("&File")
        self.fileMenuActions = (fileNewAction, fileOpenAction,
                fileSaveAction, fileSaveAsAction, None,
                filePrintAction, fileQuitAction)
        #Before opening fileMenu, update the menu with previously opened files its display 
        #and then show it
        self.connect(self.fileMenu, SIGNAL("aboutToShow()"),
                     self.updateFileMenu)
        #edit menu
        #... is NOT an instance variable, because it is always the same
        editMenu = self.menuBar().addMenu("&Edit")
        self.addActions(editMenu, (editInvertAction,
                editSwapRedAndBlueAction, editZoomAction))
        #Sub menu mirrorMenu
        mirrorMenu = editMenu.addMenu(QIcon(":/editmirror.png"),
                                      "&Mirror")
        self.addActions(mirrorMenu, (editUnMirrorAction,
                editMirrorHorizontalAction, editMirrorVerticalAction))

        #Help menu
        helpMenu = self.menuBar().addMenu("&Help")
        self.addActions(helpMenu, (helpAboutAction, helpHelpAction))


        #TOOLBARS
        # 2 toolbars: fileToolbar and editToolbar
        fileToolbar = self.addToolBar("File")
        #ObjectName is required to save its position and differentiate it from EditToolBar
        fileToolbar.setObjectName("FileToolBar")
        self.addActions(fileToolbar, (fileNewAction, fileOpenAction,
                                      fileSaveAsAction))
        editToolbar = self.addToolBar("Edit")
        editToolbar.setObjectName("EditToolBar")
        self.addActions(editToolbar, (editInvertAction,
                editSwapRedAndBlueAction, editUnMirrorAction,
                editMirrorVerticalAction,
                editMirrorHorizontalAction))
        self.zoomSpinBox = QSpinBox()
        self.zoomSpinBox.setRange(1, 400)
        self.zoomSpinBox.setSuffix(" %")
        self.zoomSpinBox.setValue(100)
        self.zoomSpinBox.setToolTip("Zoom the image")
        self.zoomSpinBox.setStatusTip(self.zoomSpinBox.toolTip())
        self.zoomSpinBox.setFocusPolicy(Qt.NoFocus)
        self.connect(self.zoomSpinBox,
                     SIGNAL("valueChanged(int)"), self.showImage)
        #Add SpinBox in editToolbar
        editToolbar.addWidget(self.zoomSpinBox)

        #CONTEXT MENU OF CENTRAL WIDGET?
        self.addActions(self.imageLabel, (editInvertAction,
                editSwapRedAndBlueAction, editUnMirrorAction,
                editMirrorVerticalAction, editMirrorHorizontalAction))

        self.resetableActions = ((editInvertAction, False),
                                 (editSwapRedAndBlueAction, False),
                                 (editUnMirrorAction, True))

        #Settings are read from configuration file
        #QSettings has no argumnent -> use the organization name, etc (see main)
        settings = QSettings()
        #Read from config file in ~/.config/.../ the toStringList parameter
        self.recentFiles = settings.value("RecentFiles").toStringList()
        #QVAriant is default settings if none can be recovered
        size = settings.value("MainWindow/Size",
                              QVariant(QSize(600, 500))).toSize()
        #resize mainidow based on saved config
        self.resize(size)
        position = settings.value("MainWindow/Position",
                                  QVariant(QPoint(0, 0))).toPoint()
        self.move(position)
        self.restoreState(
                settings.value("MainWindow/State").toByteArray())
        
        self.setWindowTitle("Image Changer")
        #generate FileMenu with previously opened files
        self.updateFileMenu()
        #Make main window appears as quickly as possible 
        #Then take more time to continue processing at init
        #Note: time is set at 0 means: do this when the queue is empty, 
        #when you have nothing else to do -> ensure the show is completed!
        #loadinitialFile is always done AFTER the show
        QTimer.singleShot(0, self.loadInitialFile)


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
        #Save configuration?
        if self.okToContinue():    
            settings = QSettings()
            #QSEtting only store QVariant
            #So make sure to have QVariant at () if not initialized
            filename = QVariant(QString(self.filename)) \
                    if self.filename is not None else QVariant()
            settings.setValue("LastFile", filename)
            recentFiles = QVariant(self.recentFiles) \
                    if self.recentFiles else QVariant()
            settings.setValue("RecentFiles", recentFiles)
            settings.setValue("MainWindow/Size", QVariant(self.size()))
            settings.setValue("MainWindow/Position",
                    QVariant(self.pos()))
            #Save dockWindow position, toolbar position
            settings.setValue("MainWindow/State",
                    QVariant(self.saveState()))
        else:
            #Do not close if not ok! 
            event.ignore()


    def okToContinue(self):
        if self.dirty:
            reply = QMessageBox.question(self,
                            "Image Changer - Unsaved Changes",
                            "Save unsaved changes?",
                            QMessageBox.Yes|QMessageBox.No|
                            QMessageBox.Cancel)
            if reply == QMessageBox.Cancel:
                return False
            elif reply == QMessageBox.Yes:
                self.fileSave()
        return True


    #Load file that was opened last
    def loadInitialFile(self):
        settings = QSettings()
        #setting.value(...) is a QVariant converted to String
        fname = unicode(settings.value("LastFile").toString())
        if fname and QFile.exists(fname):
            self.loadFile(fname)


    def updateStatus(self, message):
        #Show the message with a timeout of 5 sec 
        self.statusBar().showMessage(message, 5000)
        self.listWidget.addItem(message)
        if self.filename is not None:
            #Filename is now displayed in windowTitle
            self.setWindowTitle("Image Changer - %s[*]" % \
                                os.path.basename(self.filename))
        elif not self.image.isNull():
            self.setWindowTitle("Image Changer - Unnamed[*]")
        else:
            self.setWindowTitle("Image Changer[*]")
        self.setWindowModified(self.dirty)


    def updateFileMenu(self):
        self.fileMenu.clear()
        self.addActions(self.fileMenu, self.fileMenuActions[:-1])
        current = QString(self.filename) \
                if self.filename is not None else None
        recentFiles = []
        for fname in self.recentFiles:
            if fname != current and QFile.exists(fname):
                recentFiles.append(fname)
        if recentFiles:
            self.fileMenu.addSeparator()
            for i, fname in enumerate(recentFiles):
                action = QAction(QIcon(":/icon.png"), "&%d %s" % (
                        i + 1, QFileInfo(fname).fileName()), self)
                #Note that actionData are QVariant
                #We need to convert from String to QVariant
                action.setData(QVariant(fname))
                self.connect(action, SIGNAL("triggered()"),
                             self.loadFile)
                self.fileMenu.addAction(action)
        self.fileMenu.addSeparator()
        self.fileMenu.addAction(self.fileMenuActions[-1])


    def fileNew(self):
        if not self.okToContinue():
            return
        dialog = newimagedlg.NewImageDlg(self)
        if dialog.exec_():
            self.addRecentFile(self.filename)
            self.image = QImage()
            for action, check in self.resetableActions:
                action.setChecked(check)
            self.image = dialog.image()
            self.filename = None
            self.dirty = True
            self.showImage()
            self.sizeLabel.setText("%d x %d" % (self.image.width(),
                                                self.image.height()))
            self.updateStatus("Created new image")


    def fileOpen(self):
        if not self.okToContinue():
            return
        dir = os.path.dirname(self.filename) \
                if self.filename is not None else "."
        formats = ["*.%s" % unicode(format).lower() \
                   for format in QImageReader.supportedImageFormats()]
        #getOpenfileName return a QString
        fname = unicode(QFileDialog.getOpenFileName(self,
                            "Image Changer - Choose Image", dir,
                            "Image files (%s)" % " ".join(formats)))
        if fname:
            self.loadFile(fname)


    def loadFile(self, fname=None):
        #No filename when called from recent file in fileMenu
        if fname is None:
            action = self.sender()
            if isinstance(action, QAction):
                #action.data() are QVariant -> convert it to string
                fname = unicode(action.data().toString())
                if not self.okToContinue():
                    return
            else:
                return
        #filename is set when called from fileOpen or loadInitialFile
        if fname:
            self.filename = None
            #image is a QImage object (representation of png/jpeg/... file)
            image = QImage(fname)
            if image.isNull():
                message = "Failed to read %s" % fname
            else:
                self.addRecentFile(fname)
                self.image = QImage()
                for action, check in self.resetableActions:
                    action.setChecked(check)
                self.image = image
                self.filename = fname
                self.showImage()
                self.dirty = False
                self.sizeLabel.setText("%d x %d" % (
                            image.width(), image.height()))
                message = "Loaded %s" % os.path.basename(fname)
            self.updateStatus(message)


    def addRecentFile(self, fname):
        if fname is None:
            return
        if not self.recentFiles.contains(fname):
            self.recentFiles.prepend(QString(fname))
            while self.recentFiles.count() > 9:
                self.recentFiles.takeLast()


    def fileSave(self):
        if self.image.isNull():
            return
        if self.filename is None:
            self.fileSaveAs()
        else:
            if self.image.save(self.filename, None):
                self.updateStatus("Saved as %s" % self.filename)
                self.dirty = False
            else:
                self.updateStatus("Failed to save %s" % self.filename)


    def fileSaveAs(self):
        if self.image.isNull():
            return
        fname = self.filename if self.filename is not None else "."
        formats = ["*.%s" % unicode(format).lower() \
                   for format in QImageWriter.supportedImageFormats()]
        fname = unicode(QFileDialog.getSaveFileName(self,
                        "Image Changer - Save Image", fname,
                        "Image files (%s)" % " ".join(formats)))
        if fname:
            if "." not in fname:
                fname += ".png"
            self.addRecentFile(fname)
            self.filename = fname
            self.fileSave()


    def filePrint(self):
        if self.image.isNull():
            return
        if self.printer is None:
            self.printer = QPrinter(QPrinter.HighResolution)
            self.printer.setPageSize(QPrinter.Letter)
        form = QPrintDialog(self.printer, self)
        if form.exec_():
            painter = QPainter(self.printer)
            rect = painter.viewport()
            size = self.image.size()
            size.scale(rect.size(), Qt.KeepAspectRatio)
            painter.setViewport(rect.x(), rect.y(), size.width(),
                                size.height())
            painter.drawImage(0, 0, self.image)


    def editInvert(self, on):
        if self.image.isNull():
            return
        self.image.invertPixels()
        self.showImage()
        self.dirty = True
        self.updateStatus("Inverted" if on else "Uninverted")


    def editSwapRedAndBlue(self, on):
        if self.image.isNull():
            return
        self.image = self.image.rgbSwapped()
        self.showImage()
        self.dirty = True
        self.updateStatus("Swapped Red and Blue" \
                if on else "Unswapped Red and Blue")


    def editUnMirror(self, on):
        if self.image.isNull():
            return
        if self.mirroredhorizontally:
            self.editMirrorHorizontal(False)
        if self.mirroredvertically:
            self.editMirrorVertical(False)


    def editMirrorHorizontal(self, on):
        if self.image.isNull():
            return
        self.image = self.image.mirrored(True, False)
        self.showImage()
        self.mirroredhorizontally = not self.mirroredhorizontally
        self.dirty = True
        self.updateStatus("Mirrored Horizontally" \
                if on else "Unmirrored Horizontally")


    def editMirrorVertical(self, on):
        if self.image.isNull():
            return
        self.image = self.image.mirrored(False, True)
        self.showImage()
        self.mirroredvertically = not self.mirroredvertically
        self.dirty = True
        self.updateStatus("Mirrored Vertically" \
                if on else "Unmirrored Vertically")


    def editZoom(self):
        if self.image.isNull():
            return
        percent, ok = QInputDialog.getInteger(self,
                "Image Changer - Zoom", "Percent:",
                self.zoomSpinBox.value(), 1, 400)
        if ok:
            self.zoomSpinBox.setValue(percent)


    def showImage(self, percent=None):
        """
        Show image at the current zoom factor
        """
        if self.image.isNull():
            return
        if percent is None:
            percent = self.zoomSpinBox.value()
        factor = percent / 100.0
        #width of the image, scalled up or down
        width = self.image.width() * factor
        height = self.image.height() * factor
        #An image with different zoom level?
        #Note that self.image is not changed. So no need to save when you zoom!
        image = self.image.scaled(width, height, Qt.KeepAspectRatio)
        #Show image here. Update the QLabel ;-)
        #But first convert Qimage into a QPixmap
        #Pixmap are optimized for on screen display. They are fast to draw!
        self.imageLabel.setPixmap(QPixmap.fromImage(image))


    def helpAbout(self):
        QMessageBox.about(self, "About Image Changer",
                """<b>Image Changer</b> v %s
                <p>Copyright &copy; 2007 Qtrac Ltd. 
                All rights reserved.
                <p>This application can be used to perform
                simple image manipulations.
                <p>Python %s - Qt %s - PyQt %s on %s""" % (
                __version__, platform.python_version(),
                QT_VERSION_STR, PYQT_VERSION_STR, platform.system()))


    def helpHelp(self):
        form = helpform.HelpForm("index.html", self)
        form.show()


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
    #start main event loop
    app.exec_()


main()

