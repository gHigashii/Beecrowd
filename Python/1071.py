x = int(input())
y = int(input())
soma = 0

if x > y:
    aux = x
    x = y
    y = aux

if x%2 != 0:
    x = x + 2
else:
    x = x + 1

while x<y:
    soma = soma + x
    x = x + 2

print(soma)