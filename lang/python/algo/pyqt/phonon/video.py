#!/usr/bin/env python

from PyQt4.QtCore import *
from PyQt4.QtGui import *
from PyQt4.phonon import Phonon


#----------------------------------------------------------------------
class LVideoWidget(Phonon.VideoWidget):
    def __init__(self,parent):
        super(LVideoWidget,self).__init__(parent)
        self.setupUi()
        self.setContextMenuPolicy(Qt.CustomContextMenu)

        self.playList = []
        self.playIndex = 0

    def setupUi(self):
        self.rewindButton = QPushButton(self)
        rewindButtonIcon = self.style().standardIcon(QStyle.SP_MediaSkipBackward)
        self.rewindButton.setIcon(rewindButtonIcon)

        hLayout = QHBoxLayout()
        hLayout.addWidget(self.rewindButton)

        buttonPanel = QWidget()
        buttonPanel.setLayout(hLayout)

        vLayout = QVBoxLayout()
        vLayout.addWidget(buttonPanel)

        self.setLayout(vLayout)

    def addToPlayList(self,url):
        ''' add a url to a playlist '''
        self.playList.append(url)

    def play(self,index=0):
        ''' Set playing url to index '''
        if index < len(self.playList):
            playUrl = self.playList[playIndex]
    








#----------------------------------------------------------------------
# MAIN
#----------------------------------------------------------------------
def main():
    import sys 

    qApp = QApplication(sys.argv)
    widget = LVideoWidget()
    widget.addToPlayList("rtsp://172.17.1.51/mpeg4/media.amp")
    widget.show()
    widget.play()
    sys.exit(qApp.exec_())

if __name__ == "__main__":
    main()
