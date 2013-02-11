#!/usr/bin/python



import sys

from PyQt4.QtCore import *
from PyQt4.QtGui import *

import numpy as np
from matplotlib.figure import Figure
from matplotlib.backends.backend_qt4agg import FigureCanvasQTAgg as FigureCanvas


class Qt4MplCanvas(FigureCanvas):
  """
  My widget, my plot
  """
  def __init__(self):
    #Starndard matplotlib to generate the plot
    self.figure1 = Figure()
    FigureCanvas.__init__(self, self.figure1)
    self.axes=self.figure1.add_subplot(111)
    self.x=np.arange(0.0,3.0,0.01)
    self.y = np.cos(2*np.pi*self.x)
    self.axes.plot(self.x, self.y)
    #initialize the canvas where the figures render into



qApp =QApplication(sys.argv)
mpl=Qt4MplCanvas()
mpl.show()
qApp.exec_()
