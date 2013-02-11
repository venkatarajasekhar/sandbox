#!/usr/bin/python 

#!/usr/bin/ipython -pylab

#Note: doesn't work with regular python! Why?!?!?!
#BECAUSE YOU NEED TO SHOW THE PLOT !!!!
#!/usr/bin/python 


import matplotlib.pyplot as plt
import matplotlib.image as mpimg
import numpy as np



fig=plt.figure()
ax1=fig.add_subplot(211)
#plt.plot([1,2,3])
#plt.ylabel('some numbers')
#plt.show()
img=mpimg.imread('stinkbug.png')
#imgplot=plt.imshow(img)
lum_img=img[:,:,0]
imgplot=plt.imshow(lum_img)
imgplot.set_cmap('hot')
plt.colorbar()
#Select the colorbar range
imgplot.set_clim(0.4,0.8)

ax2=fig.add_subplot(212)
#plt.hist(lum_img.flatten(),256,range(0.0,1.0),fc='k',ec='k')
plt.hist(lum_img.flatten(),256,fc='k',ec='k')


plt.show()
