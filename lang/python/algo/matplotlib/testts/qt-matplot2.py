#!/usr/bin/env python

import sys
import matplotlib
matplotlib.use('Qt4Agg')
import pylab
import numpy as np

from matplotlib.backends.backend_qt4agg import FigureCanvasQTAgg as FigureCanvas
#from matplotlib.figure import Figure
import matplotlib.pyplot as plt

from PyQt4 import QtCore, QtGui

if __name__ == '__main__':
    app = QtGui.QApplication(sys.argv)

    x = np.linspace(0, 2*np.pi, 400)
    y = np.sin(x**2)

    vdim = 2
    hdim = 2

    # generate the plot
    #fig = Figure(figsize=(600,600), dpi=72, facecolor=(1,1,1), edgecolor=(0,0,0))
    #ax = fig.add_subplot(111)
    fig, axarr = plt.subplots(hdim, vdim)
    ax = axarr[0][0]
    #ax.plot([0,5])
    ax.plot(x,y)
    # generate the canvas to display the plot
    canvas = FigureCanvas(fig)

    win = QtGui.QMainWindow()
    # add the plot canvas to a window
    win.setCentralWidget(canvas)

    win.show()

    sys.exit(app.exec_())
