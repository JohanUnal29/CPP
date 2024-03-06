import matplotlib.pyplot as plt
import numpy as np
import os

x, y = np.genfromtxt("datos.txt", unpack=True)

plt.plot(x, y, label="Data")
plt.savefig("plot.pdf", format="pdf")
plt.show