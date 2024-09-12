import matplotlib.pyplot as plt
from random import uniform
import math
import numpy as np

def generate1():
    a = uniform(0, 1)
    b = uniform(0, 1)
    return (a * math.cos(2 * math.pi * b), a * math.sin(2 * math.pi * b))

# print(np.array(generate1())[0])
# print(np.array(generate1())[1])

a = plt.scatter(np.array(generate1())[0], np.array(generate1())[1])
plt.show()