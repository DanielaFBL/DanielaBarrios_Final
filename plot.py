import numpy as np
import matplotlib.pyplot as plt

datos = np.loadtxt("campo.dat")

plt.figure(figsize=(10,10))

# Trayectoria

plt.subplot(3,3,1)
plt.plot(datos[:,0], datos[:,1])
plt.title("Campo Electrico")
plt.xlabel("x)
plt.ylabel("y)



