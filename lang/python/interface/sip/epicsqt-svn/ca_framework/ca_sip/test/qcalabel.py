#!/usr/bin/env python 


from PyQt4.QtCore import * 
from PyQt4.QtGui import * 
from CaFramework import *

import sys

__version__ = "0.1.0"


if __name__ == "__main__":
    qApp = QApplication(sys.argv)
    pvName = "DMC2183:1:DscrptnSI"
    label = QCaLabel(pvName)
    label.activate()
    label.show()
    sys.exit(qApp.exec_())

