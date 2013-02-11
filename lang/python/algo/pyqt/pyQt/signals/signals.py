from PyQt4.QtCore import *

class C1 (QObject):
    dataChanged = pyqtSignal()
    dataChanged2 = pyqtSignal()
    dataChanged3 = pyqtSignal()

    def __init__(self, parent=None):
        super(C1,self).__init__(parent)

    def go(self):
        self.dataChanged.emit()

    def go2(self):
        self.dataChanged2.emit()
    
    def go3(self):
        self.dataChanged3.emit()
    

class C2(QObject):
    dataChanged = pyqtSignal()
    dataChanged2 = pyqtSignal()
    #dataChanged3 = pyqtSignal()

    def __init__(self, parent=None):
        super(C2,self).__init__(parent)
        self.c1 = C1()

        self.c1.dataChanged.connect(self.on_c1_dataChanged)
        self.c1.dataChanged2.connect(self.dataChanged2.emit)

        self.dataChanged3 = pyqtSignal()
        #self.dataChanged3 = SIGNAL('dataChanged3()')
        self.c1.dataChanged3.connect(self.dataChanged3.emit)

    def on_c1_dataChanged(self):
        print 'c1_dataChanged'
        
class C3(QObject):
    def __init__(self, parent=None):
        super(C3,self).__init__(parent)
        self.c2 = C2()

        self.c2.dataChanged2.connect(self.on_c2_dataChanged2)

    def on_c2_dataChanged2(self):
        print 'c2_dataChanged2'

c2 = C2()
c2.c1.go()

c3 = C3()
c3.c2.c1.go2()
       
