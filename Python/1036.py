v = input().split()
a, b, c = v

a = float(a)
b = float(b)
c = float(c)

if a == 0.0  or (b ** 2 - 4 * a * c) < 0:
    print('Impossivel calcular')
else:
    x1 = (- b + (b ** 2 - 4 * a * c) ** (1/2) )/(2 * a)
    x2 = (- b - (b ** 2 - 4 * a * c) ** (1/2) )/(2 * a)
    print('R1 = {:.5f}'.format(x1))
    print('R2 = {:.5f}'.format(x2))

"""
from calendar import SATURDAY
import math


x = input().split()
a, b, c = x

a = float(a)
b = float(b)
c = float(c)

if x == 0.0 or (b * b) - (4 * a * c) < 0:
    print("Impossivel calcular")
else:
    delta = b ** 2 - 4 * a * c
    delta2 = math.sqrt(delta)
    
    x1 = (-b + delta2) / (2 * a)

    x2 = (-b - delta2) / (2 * a)
    print('R1 = {:.5f}'.format(x1))
    print('R2 = {:.5f}'.format(x2))
"""
