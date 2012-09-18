#!/usr/bin/env python

import sys
import matplotlib
matplotlib.use('Qt4Agg')
import pylab
import numpy as np

from matplotlib.backends.backend_qt4agg import FigureCanvasQTAgg as FigureCanvas
from matplotlib.figure import Figure
import matplotlib.pyplot as plt

from PyQt4 import QtCore, QtGui

if __name__ == '__main__':
    app = QtGui.QApplication(sys.argv)

    x = np.linspace(0, 2*np.pi, 400)
    y = np.sin(x**2)

    #--- Fig1 -- ok
    fig1 = Figure(figsize=(100,100), dpi=72, facecolor=(1,1,1), edgecolor=(0,0,0))
    ax1 = fig1.add_subplot(222)
    ax1.plot(x,y)

    #--- Fig2 -- ok
    # Just a figure and one subplot
    fig2, ax2 = plt.subplots()     #111
    ax2.plot(x, y)
    ax2.set_title('Simple plot')

    print fig2.as_list()

    #--- Fig3
    fig3 = Figure(figsize=(600,600), dpi=72, facecolor=(1,1,1), edgecolor=(0,0,0))
    rect2 = -5,-7, 100,30
    ax = fig3.add_axes(rect2, axisbg='r', label='axes2')
    ax.plot(x,y)

    fig4 = Figure(figsize=(600,600), dpi=72, facecolor=(1,1,1), edgecolor=(0,0,0))
    #ax4 = AxesSubplot(fig4, [1, 1, 1,1])
    ax4 = plt.Axes(fig4, [-1, -1, 1,1])
    ax4.plot(x,y)


    #canvas = FigureCanvas(fig1)
    canvas = FigureCanvas(fig2)
    #canvas = FigureCanvas(fig3)
    #canvas = FigureCanvas(fig4)

    win = QtGui.QMainWindow()
    # add the plot canvas to a window
    win.setCentralWidget(canvas)

    win.show()

    sys.exit(app.exec_())
