import matplotlib.pyplot as plt
import numpy as np

# Cargar los datos del archivo de texto
datos = np.loadtxt("C:\\Users\\Niko\\Documents\\cpp2\\Tarea3_cpp\\output\\datos_error.txt", delimiter=",")

h = datos[:, 0]
error_forward = datos[:, 1]
error_central = datos[:, 2]

# Crear la figura y el gráfico
fig, ax = plt.subplots()

# Graficar los errores en la misma figura con escala log-log
ax.loglog(h, error_forward, label="Error Forward")
ax.loglog(h, error_central, label="Error Central")

# Agregar etiquetas y título
ax.set_xlabel("h")
ax.set_ylabel("Error")
ax.set_title("Error de los métodos Forward y Central en función de h")
ax.legend()

# Mostrar la gráfica
plt.grid(True)
plt.show()


