
# ~~~ example
import numpy as np
import matplotlib.pyplot as plt

fig, ax = plt.subplots()
ax.imshow(np.random.uniform(size=(10, 10)))

ax_inset = fig.add_axes([0.3, 0.3, 0.2, 0.2])
ax_inset.plot([0, 1])
plt.savefig('plot0')

fig.delaxes(ax_inset)
ax_inset = fig.add_axes([0.5, 0.5, 0.2, 0.2])
ax_inset.plot([1, 0])
plt.savefig('plot1')
