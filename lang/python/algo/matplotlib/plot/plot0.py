#!/usr/bin/env python 

from pylab import *
import time

t = arange(0.0, 10.0, 0.20)
s = sin(2*pi*t)
x0 = int(time.time())
x = [ x0 + i for i in range(len(s)) ]
plot(x, s, 'ro--', linewidth=5.0)

xlabel('time (s)')
ylabel('voltage (mV)')
title('About as simple as it gets, folks')
grid(True)
show()
