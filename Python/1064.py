a = float(input())
b = float(input())
c = float(input())
d = float(input())
e = float(input())
f = float(input())

x=0
y=0

t=[a, b, c, d, e, f]

for i in t:
    if i > 0:
        x = x + 1
        y = y + i

print('{} valores positivos'.format(x))
print('{:.1f}'.format(y/x))