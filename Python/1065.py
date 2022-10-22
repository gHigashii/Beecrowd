a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())

x = 0

t=[a, b, c, d, e]

for i in t:
    if i%2 == 0:
        x = x + 1

print(x, 'valores pares')