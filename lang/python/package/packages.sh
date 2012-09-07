#!/usr/bin/sudo /bin/sh


yum_opt=-y
#yum_opt=-y --nogpgcheck

you repolist all

#----------------------------------------------------------------------
## RPM dependencies
#----------------------------------------------------------------------
rpm -Uvh http://download1.rpmfusion.org/free/fedora/rpmfusion-free-release-stable.noarch.rpm
rpm -Uvh http://download1.rpmfusion.org/nonfree/fedora/rpmfusion-nonfree-release-stable.noarch.rpm


#----------------------------------------------------------------------
# Group install
#----------------------------------------------------------------------

#yum groupinstall "GNOME Desktop Environment"
#yum groupupdate "GNOME Desktop Environment"

#----------------------------------------------------------------------
# INSTALL
#----------------------------------------------------------------------

# Python utilities
yum ${yum_opt} install python-*
yum ${yum_opt} install python-tools
yum ${yum_opt} install python-setuptools-devel  # Easy install modules ex:sudo easy_install psutil
yum ${yum_opt} install python-pip       	# pip
yum ${yum_opt} install ipython                  # IPython shell
#Cython may be too old for pytables. need to be easy installed!
yum ${yum_opt} install Cython                   # C extension to python
yum ${yum_opt} install Pyrex
yum ${yum_opt} install python-xlib              # Xlib for python

# Python IDE
yum ${yum_opt} install eric                     # Python IDE
yum ${yum_opt} install SoQt
yum ${yum_opt} install SoQt-devel
yum ${yum_opt} install scite                    # Scintilla IDE

# Python and GUI
yum ${yum_opt} install PyQt                     # Python Qt interface
yum ${yum_opt} install PyQt-devel               # Python Qt interface devel sources
yum ${yum_opt} install PyQt-examples            # Python Qt examples code
yum ${yum_opt} install qscintilla               # Syntax correction + highlight
yum ${yum_opt} install qscintilla-devel
yum ${yum_opt} install qscintilla-python
yum ${yum_opt} install qscintilla-python-devel
yum ${yum_opt} install PyQt4                    # Python Qt4 interface
yum ${yum_opt} install PyQt4-devel              # includes pyuic4 sip
yum ${yum_opt} install PyQwt                    # For scientific plot in Qt
yum ${yum_opt} install wxPython                 # Python wx GUI widgets
yum ${yum_opt} install wxPython-devel           # Python wx GUI widgets

# Python scientific
yum ${yum_opt} install plplot-pyqt              # Scientific plotting with PyQt
yum ${yum_opt} install numpy                    # Python scientific library
yum ${yum_opt} install python-matplotlib        # Python plot library
yum ${yum_opt} install python-paida             # Python scientific library
yum ${yum_opt} install scitools                 # Python scientific library
yum ${yum_opt} install ScientificPython-qt
#yum ${yum_opt} install PyTable                 # Check from source!
yum ${yum_opt} install sage
yum ${yum_opt} install rpy			# R interface for python
yum ${yum_opt} install hdf5-devel 

