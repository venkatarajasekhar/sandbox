#!/usr/bin/env python  


from PyQt4.QtCore import *
from PyQt4.QtGui import * 

import sys
import os
import gobject 
import pygst
pygst.require('0.10')
import gst
import time

from setup import *
from lti.core.decorators import LInAndOut, LSignal, LSlot

#----------------------------------------------------------------------
class LVideoViewWidget(QWidget):

    def __init__(self,parent=None):
        super(LVideoViewWidget,self).__init__(parent)
        self.setupUi(self)
        self.started=False
        self.debug = ( DEBUG & WIDGET )

        #Object has properties!!!
        self.videoPlayerPipeline = gst.Pipeline('player')

        #Gstream elements
        #self.videoFileSource = gst.element_factory_make('filesrc', 'file-source')
        self.videoTestSource = gst.element_factory_make('videotestsrc', 'video-src')
        self.videoSink = gst.element_factory_make('autovideosink', 'video-sink')
        #Build Gstrem pipeline
        self.videoPlayerPipeline.add(self.videoTestSource, self.videoSink)
        gst.element_link_many(self.videoTestSource, self.videoSink)

        self.bus = self.videoPlayerPipeline.get_bus()
        self.bus.add_signal_watch()
        self.bus.enable_sync_message_emission()
        self.bus.connect("sync-message::element", self.on_sync_message)
        self.bus.connect('message', self.on_message)


        # Context Menu
        self.setContextMenuPolicy(Qt.ActionsContextMenu)
        self.setContextMenuPolicy(Qt.ActionsContextMenu)
        startAction = self.createAction("&Start", self.on_startAction_triggered)
        stopAction = self.createAction("&Stop", self.on_stopAction_triggered)
        self.addActions(self, (startAction, stopAction,))

    @pyqtSlot(str)
    def setRtspVideoSource(self, uri):
        ''' set the source and start immediately to read from it '''
        if self.started:
            self.videoPlayerPipeline.set_state(gst.STATE_NULL)
        self.video_source = gst.element_factory_make('videotestsrc', 'video-src')
        self.videoPlayerPipeline.set_state(gst.STATE_PLAYING)
        self.started=True

    @pyqtSlot(str)
    def setFileVideoSource(self, uri):
        if self.started:
            self.videoPlayerPipeline.set_state(gst.STATE_NULL)
        self.video_source = gst.element_factory_make('videotestsrc', 'video-src')
        self.videoPlayerPipeline.set_state(gst.STATE_PLAYING)
        self.started=True

    @LInAndOut(DEBUG & WIDGET)
    def on_startAction_triggered(self):
        if not self.started:
            self.videoPlayerPipeline.set_state(gst.STATE_PLAYING)
            self.started=True

    @LInAndOut(DEBUG & WIDGET)
    def on_stopAction_triggered(self):
        if self.started:
            self.videoPlayerPipeline.set_state(gst.STATE_NULL)
            self.started=False
            self.repaint()	    #repaint underlying widget

    @LInAndOut(DEBUG & WIDGET)
    def on_message(self, bus, message):
        t = message.type
        if t == gst.MESSAGE_EOS:
            self.videoPlayerPipeline.set_state(gst.STATE_NULL)
        elif t == gst.MESSAGE_ERROR:
            self.videoPlayerPipeline.set_state(gst.STATE_NULL)
            err, debug = message.parse_error()
            print '[ERROR] %s' % err, debug

    @LInAndOut(DEBUG & WIDGET)
    def on_sync_message(self, bus, message):
        #if self.debug: print "%s %s %s" % ( self, bus, message)
        if message.structure is None:
            return
        message_name = message.structure.get_name()
        if message_name == "prepare-xwindow-id":
            self.imagesink = message.src
            #Keep image ratio of video 
            self.imagesink.set_property("force-aspect-ratio", True)
            self.imagesink.set_xwindow_id(self.winId())

    @pyqtSlot(bool)
    def forceAspectRatio(self, flag):
        self.imagesink.set_property("force-aspect-ratio", flag)

    @LInAndOut(DEBUG & WIDGET)
    def closeEvent(self, event):
        ''' stop the thread before closing '''
        self.on_stopAction_triggered()
        #event.accept()

    #--- UI

    def setupUi(self, widget):
        widget.resize(400, 300)
        combo = QLineEdit()
        combo.setText("toto")
        hl = QHBoxLayout(widget)
        hl.addWidget(combo)
        widget.setMouseTracking(False)
        widget.sPolicy = QSizePolicy(QSizePolicy.Fixed,QSizePolicy.Minimum)
        widget.sPolicy.setHeightForWidth(True)
        widget.sPolicy.setVerticalStretch(0)
        widget.sPolicy.setHorizontalStretch(0)
        widget.setSizePolicy(self.sPolicy)
        QMetaObject.connectSlotsByName(widget)

    #--- HELPERS

    @LInAndOut(DEBUG & HELPERS)
    def createAction(self, text, slot=None, shortcut=None, icon=None, tip=None, checkable=False, signal="triggered()"):
        action = QAction(text, self)
        if icon is not None:
            action.setIcon(icon)
        if shortcut is not None:
            action.setShortcut(shortcut)
        if tip is not None:
            action.setToolTip(tip)
            action.setStatusTip(tip)
        if slot is not None:
            self.connect(action, SIGNAL(signal), slot)
        if checkable:
            action.setCheckable(True)
        return action

    @LInAndOut(DEBUG & HELPERS)
    def addActions(self, target, actions):
        for action in actions:
            if action is None:
                target.addSeparator()
            else:
                target.addAction(action)


#----------------------------------------------------------------------
# MAIN
#----------------------------------------------------------------------

def main():
    gobject.threads_init()
    qApp = QApplication(sys.argv)
    #qApp.connect(qApp, SIGNAL('lastWindowClosed()'), qApp, SLOT('quit()'))
    widget = QDialog()
    widget1 = LVideoViewWidget()
    widget2 = LVideoViewWidget()
    h = QHBoxLayout(widget)
    h.addWidget(widget1)
    h.addWidget(widget2)
    widget.show()
    sys.exit(qApp.exec_())

if __name__ == '__main__':
    main()

