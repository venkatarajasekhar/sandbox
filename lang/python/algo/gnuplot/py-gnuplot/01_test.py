#!/usr/bin/env python
from numpy import *
import Gnuplot
"""
Demonstrates how to use gnuplot for graphs. Plots 2 graphs with different styles.
"""
x = linspace(0,10,31)
y = x**2
y2 = 10*sin(pi*x)
g = Gnuplot.Gnuplot() #!! Won't be able to use 'with' in python 2.6?
#d = Gnuplot.Data(x,y,title='squared', with='lp lt 1 pt 6') 
#d2=Gnuplot.Data(x,y2,title='sine',with='p pt 7 ps 4')
d = Gnuplot.Data(x,y,title='squared') 
d2=Gnuplot.Data(x,y2,title='sine')
g('set grid')
g.xlabel('x axis')
g.ylabel('y axis')
g.plot(d,d2)
ans = raw_input('Enter f to create .png file, or Enter to quit ')
if ans == 'f':
    g.hardcopy('filename.png',terminal = 'png')
    #g.hardcopy('filename.ps',terminal='postscript',enhanced=1,color=1)
g.reset()
