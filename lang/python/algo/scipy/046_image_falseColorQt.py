#!/usr/bin/python 


import sys
import matplotlib.pyplot as plt
import matplotlib.image as mpimg
import numpy as np

import Image

from PyQt4.QtGui import *
from PyQt4.QtCore import *
from matplotlib.backends.backend_qt4agg import FigureCanvasQTAgg as FigureCanvas
from matplotlib.figure import Figure
from matplotlib.colorbar import Colorbar

#Colormap
from matplotlib import cm, colors


class Qt4MplCanvas(FigureCanvas):
  """
  My widget, my plot
  """
  def __init__(self):
    #Starndard matplotlib to generate the plot
    self.figure1 = Figure()
    FigureCanvas.__init__(self, self.figure1)
    #subplot(Y, X, id)
    #id: start from top, count per row start from left to right then down
    self.axeSubplot1=self.figure1.add_subplot(321)
    self.axeSubplot2=self.figure1.add_subplot(322)
    self.axeSubplot3=self.figure1.add_subplot(313)
    self.axeSubplot4=self.figure1.add_subplot(323)
    self.x=np.arange(0.0,3.0,0.01)
    self.y = np.cos(2*np.pi*self.x)
    self.axeSubplot1.plot(self.x, self.y)
    self.axeSubplot2.plot(self.x, -self.y)
   
    #HERE WE USE THE PIL FUNCTIONS DUPLICATED IN MATPLOTLIB
    np_image_raw=mpimg.imread('stinkbug.png')
    np_image_raw=mpimg.imread('stinkbug.png')
    np_image_luminosity=np_image_raw[:,:,0]
    #np_image_rotated=np_image_raw.transpose(mpimg.Image.ROTATE_180)
    #np_image_rotated=np_image_raw.transpose(mpimg.Image.ROTATE_180)
    self.axeSubplot3.imshow(np_image_luminosity)		# <-- PLOT ARRAY AS AN IMAGE!
    #self.subplot3.imshow(np_image_rotated)
    #self.subplot3.set_cmap('hot')


    #initialize the canvas where the figures render into

    #HERE WE ARE FALLING BACK ON THE PIL
    img=Image.open('stinkbug.png')
    #self.figure1.colorbar(self.axeSubplot1)
    rimg=img.rotate(45)
    #rimg.set_cmap('hot')
    rsize = rimg.resize((rimg.size[0]/10,rimg.size[1]/10)) # Use PIL to resize
    rsizeArr = np.asarray(rsize)  # Get NUMPY array back
    #color_range=cm.ScalarMappable(norm=colors.Normalize, cmap=cm.hot) 
    color_range=cm.ScalarMappable(cmap=cm.hot) 
    #color_range=cm.ScalarMappable() 
    color_range.set_array(rsizeArr)
    print rsizeArr[0][0]
    #rsizeArr[0][0]=[ 255, 0, 0]
    print rsizeArr[0][0]
    #imgplot = mpimg.imshow(rsizeArr)
    self.axeSubplot4.imshow(rsizeArr)
    cbar=Colorbar(self.axeSubplot4, color_range)
    #self.figure1.colorbar(cbar)



##fig=plt.figure()
##ax1=fig.add_subplot(211)
#plt.plot([1,2,3])
#plt.ylabel('some numbers')
#plt.show()
##img=mpimg.imread('stinkbug.png')
#imgplot=plt.imshow(img)
##lum_img=img[:,:,0]
##imgplot=plt.imshow(lum_img)
##imgplot.set_cmap('hot')
##plt.colorbar()
#Select the colorbar range
##imgplot.set_clim(0.4,0.8)

##ax2=fig.add_subplot(212)
#plt.hist(lum_img.flatten(),256,range(0.0,1.0),fc='k',ec='k')
##plt.hist(lum_img.flatten(),256,fc='k',ec='k')


##plt.show()




if __name__ == "__main__":
    app = QApplication(sys.argv)
    form = Qt4MplCanvas()
    #img=mpimg.imread('stinkbug.png')
    #lum_img=img[:,:,0]
    #imgplot=plt.imshow(lum_img)
    #imgplot.set_cmap('hot')
    #plt.colorbar()
    #imgplot.set_clim(0.4,0.8)
    form.show()
    app.exec_()


