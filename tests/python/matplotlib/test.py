import matplotlib.pyplot as plt
import numpy as np

ax1 = plt.subplot2grid((1,3), (0,0), colspan=2)
ax2 = plt.subplot2grid((1,3), (0,2), colspan=1)

N = 2
Spot = (6.29, 3.47)
Avg = (20.11,18.47)
Ody = (6.39,3.98)
Medium = (6.7,6.12)

ind = np.arange(N)+0.10  # the x locations for the groups
width = 0.15      # the width of the bars

ax1.bar(ind, Spot, width, color='0.35',hatch="\\")
ax1.bar(ind+width, Avg, width, color='0.55',hatch="//")
ax1.bar(ind+2*width, Ody, width, color='0.75',hatch="+")
ax1.bar(ind+3*width, Medium, width, color='0.15',hatch=".")
ax1.set_xticks(ind+2*width)
ax1.set_xticklabels(('Static', 'Dynamic'))
ax1.set_ylabel("Incorrect Decision Ratio (%)")
