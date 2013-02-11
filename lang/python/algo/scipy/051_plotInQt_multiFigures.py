#!/usr/bin/python

# For detailed comments on animation and the techniqes used here, see
# the wiki entry http://www.scipy.org/Cookbook/Matplotlib/Animations

import os
import sys

#import matplotlib
#matplotlib.use('Qt4Agg')
from matplotlib.figure import Figure
from matplotlib.backends.backend_qt4agg import FigureCanvasQTAgg as FigureCanvas

from PyQt4 import QtCore, QtGui

ITERS = 1000

import numpy as np
import time

class BlitQT(FigureCanvas):

    def __init__(self):
        #Only one widget at a time!
        #self.fig2=Figure()
        #FigureCanvas.__init__(self, self.fig2)
        #self.graph2 = self.fig2.add_subplot(111)
        #self.graph2.grid()

        self.fig1=Figure()
        FigureCanvas.__init__(self, self.fig1)
        self.graph1 = self.fig1.add_subplot(111)
        self.graph1.grid()
        self.x = np.arange(0.0,3.0,0.01)
        self.y = np.cos(2*np.pi*self.x)
        self.graph1.plot(self.x,self.y,label="cos(2.pi*x)")
        #Must be after label have been defined!
        self.graph1.legend()

app = QtGui.QApplication(sys.argv)
widget = BlitQT()
#Display first widget
widget.show()

widget2 = BlitQT()
#Display second widget
widget2.show()

sys.exit(app.exec_())
