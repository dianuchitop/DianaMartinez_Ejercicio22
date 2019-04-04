import numpy as np
import matplotlib.pyplot as plt




datos=np.loadtxt("MetHas.txt").T

plt.figure(figsize=[10,8])
plt.hist(datos,bins=30)
plt.title("Metropolis-Hastings para distribucion normal")
plt.savefig("MHcpp.png")