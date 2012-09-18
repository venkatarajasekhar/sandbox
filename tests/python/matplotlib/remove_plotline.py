from matplotlib import pyplot
import numpy
a = numpy.arange(int(1e3))
fig = pyplot.Figure()
ax  = fig.add_subplot(1, 1, 1)
lines = ax.plot(a)

print lines

for i, line in enumerate(ax.lines):
    ax.lines.pop(i)
    line.remove()

