#!/usr/bin/env python


from PyQt4.QtGui import *
from PyQt4.QtCore import *
from PyQt4.phonon import Phonon





class LVideoWidget(QWidget):
    def __init__(self,  parent = None):
        super(LVideoWidget, self).__init__(parent)

        self.__fileName = ""

        openButton = QPushButton(self.tr("Open..."))
        self.__playButton = QPushButton()
        self.__playButton.setEnabled(False)
        
        self.__playButton.setIcon(self.style().standardIcon(QStyle.SP_MediaPlay))

        #self.__positionSlider = Phonon.SeekSlider(self)
        #self.__positionSlider.setIconVisible(False)
        #self.__positionSlider.show()

        controlLayout = QHBoxLayout()
        controlLayout.setMargin(0)
        controlLayout.addWidget(openButton)
        controlLayout.addWidget(self.__playButton)
        #controlLayout.addWidget(self.__positionSlider)

        self.__player = Phonon.VideoWidget()
        self.__player.setSizePolicy(QSizePolicy.Expanding, QSizePolicy.Expanding)
        audioOutput = Phonon.AudioOutput(Phonon.VideoCategory, self)

        self.__mediaObj = Phonon.MediaObject()
        Phonon.createPath(self.__mediaObj,  self.__player)
        Phonon.createPath(self.__mediaObj, audioOutput);

        #self.__positionSlider.setMediaObject(self.__mediaObj)

        layout = QVBoxLayout()
        layout.addWidget(self.__player)
        layout.addLayout(controlLayout)

        self.setLayout(layout)

        # Signals
        self.__playButton.clicked.connect(self.play)
        #openButton.clicked.connect(self.open)
        self.__mediaObj.hasVideoChanged.connect(self.hasVideoChanged)
        location = QString("rtsp://camera_1/mpeg4/media.amp")
        self.__mediaObj.setCurrentSource(Phonon.MediaSource(QUrl.fromEncoded(location.toUtf8())))
        self.__mediaObj.play()


    @pyqtSlot("bool")
    def hasVideoChanged(self,  res):
        if self.__mediaObj.hasVideo():
            self.__playButton.setEnabled(True)


    @pyqtSlot()
    def play(self):
        print "play"
        if not self.__mediaObj.state() == Phonon.PlayingState:
            self.__mediaObj.play()
            self.__playButton.setIcon(self.style().standardIcon(QStyle.SP_MediaPause))
        else:
            self.__mediaObj.pause()
            self.__playButton.setIcon(self.style().standardIcon(QStyle.SP_MediaPlay))


    def openFile(self,  filename):
        if  not fileName.isEmpty():
            self.__playButton.setEnabled(False)
            self.__fileName = fileName
            self.__mediaObj.setCurrentSource(Phonon.MediaSource(self.__fileName))


if __name__ == "__main__":
    import sys

    qApp = QApplication(sys.argv)
    qApp.setApplicationName("toto")                 
    # <--- required otherwise:
    # WARNING: Phonon needs QCoreApplication::applicationName to be set to export audio output names through the DBUS interface
    widget = LVideoWidget()
    widget.show()
    sys.exit(qApp.exec_())
