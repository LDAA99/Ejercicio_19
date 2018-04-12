import numpy as np
import matplotlib.pyplot as plt



datos=np.loadtxt("primeror.txt")

x=datos[:, 0]
y=datos[:, 1]
yt=np.exp(-x)

error=(abs(yt-y))/yt
plt.plot(x, error)
plt.show()

