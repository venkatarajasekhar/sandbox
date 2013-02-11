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



class Vid:
    def __init__(self, windowId):
        self.player = gst.Pipeline("player")
        self.source = gst.element_factory_make("v4l2src", "vsource")
        self.sink = gst.element_factory_make("autovideosink", "outsink")
        self.source.set_property("device", "/dev/video0")
        self.source = gst.element_factory_make('videotestsrc', 'video-src')
        #self.scaler = gst.element_factory_make("videoscale", "vscale")
        self.fvidscale = gst.element_factory_make("videoscale", "fvidscale")
        self.fvidscale_cap = gst.element_factory_make("capsfilter", "fvidscale_cap")
        self.fvidscale_cap.set_property('caps', gst.caps_from_string('video/x-raw-yuv, width=256, height=192'))
        self.window_id = None
        self.windowId = windowId
        print windowId
    
        self.player.add(self.source, self.fvidscale, self.fvidscale_cap, self.sink)
        gst.element_link_many(self.source,self.fvidscale, self.fvidscale_cap, self.sink)

        bus = self.player.get_bus()
        bus.add_signal_watch()
        bus.enable_sync_message_emission()
        bus.connect("message", self.on_message)
        bus.connect("sync-message::element", self.on_sync_message)

    def on_message(self, bus, message):
        t = message.type
        if t == gst.MESSAGE_EOS:
            self.player.set_state(gst.STATE_NULL)
        elif t == gst.MESSAGE_ERROR:
           err, debug = message.parse_error()
           print "Error: %s" % err, debug
           self.player.set_state(gst.STATE_NULL)

    def on_sync_message(self, bus, message):
        if message.structure is None:
            return
        message_name = message.structure.get_name()
        if message_name == "prepare-xwindow-id":
            win_id = self.windowId
            assert win_id
            imagesink = message.src
            imagesink.set_property("force-aspect-ratio", True)
            imagesink.set_xwindow_id(win_id)
    def startPrev(self):
        self.player.set_state(gst.STATE_PLAYING)
    def pausePrev(self):
        self.player.set_state(gst.STATE_NULL)


def main() :
    gobject.threads_init()
    qApp = QApplication(sys.argv)
    
    cameraWindow = QWidget()
    cameraWindow.setGeometry(QRect(530, 20, 256, 192))
    cameraWindow.setObjectName("cameraWindow")
    cameraWindow.setAttribute(0, 1); # AA_ImmediateWidgetCreation == 0
    cameraWindow.setAttribute(3, 1); # AA_NativeWindow == 3

    global wId
    wId = cameraWindow.winId()

    camera = Vid(wId)
    
    camera.startPrev()

    cameraWindow.show()
    sys.exit(qApp.exec_())

if __name__ == "__main__":
    main()
