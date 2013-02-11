


from PyQt4.QtCore import *
from PyQt4.QtGui import *
from PyQt4.phonon import Phonon


class MediaVideoWidget(Phonon.VideoWidget):
    def __init__(self, parent=None):
        super(MediaVideoWidget, self).__init__(parent)
        


class LWidget(QWidget):
    def __init__(self,parent=None):
        super(LWidget,self).__init__(parent)
        media = Phonon.MediaObject()
        #audio = Phonon.AudioOutput()
        #audioPath = Phonon.Path()
        self.setupUi()

    def setupUi(self):

        m_videoWidget = MediaVideoWidget()
        
        previousButton = QPushbutton()
        previousButton.setIcon(self.style().standardIcon(QStyle.SP_MediaSkipBackward))

        layout = QVBoxLayout()
        layout.addWidget(m_videoWidget)
        layout.addWidget(previousButton)
        self.setLayout(layout)



#----------------------------------------------------------------------

if __name__ == "__main__":
    import sys

    qApp = QApplication(sys.argv)
    w = LWidget()
    w.show()
    sys.exit(qApp.exec_())

