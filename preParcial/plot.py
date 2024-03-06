import matplotlib.pyplot as plt
import numpy as np


x_initial = 0
y_initial = 0

with open("datos.txt", "r", encoding="utf-16") as file:
    line = file.readline().strip()  
    x_final, y_final = map(int, line.split())  


print("x_final:", x_final)
print("y_final:", y_final)



m = (y_final - y_initial) / (x_final - x_initial)


def f(x):
    return m * x


x_values = np.linspace(x_initial, x_final, 100)


y_values = f(x_values)


plt.plot(x_values, y_values, label=f'y = {m:.2f}x')


plt.scatter(x_initial, y_initial, color='blue', label='Inicio (0, 0)')
plt.scatter(x_final, y_final, color='red', label='Final (3, 5)')


plt.xlabel('x')
plt.ylabel('y')
plt.title('Gráfica de la función lineal')


plt.legend()


plt.grid(True)
plt.show()
