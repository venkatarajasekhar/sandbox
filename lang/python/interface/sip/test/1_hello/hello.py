#!/usr/bin/env python


from PyQt4.QtCore import *
from PyQt4.QtGui import *

import sys

__version__ = "0.1.0"



qApp = QApplication(sys.argv)
w = QLabel("Hello")
w.show()
qApp.exec_()
