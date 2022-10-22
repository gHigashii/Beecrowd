a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())

par = 0
imp = 0
pos = 0
neg = 0

t=[a, b, c, d, e]

for i in t:
    if i%2 == 0:
        par = par + 1

    if i%2 == 1:
        imp = imp + 1

    if i > 0:
        pos = pos + 1
    
    if i < 0:
        neg = neg + 1

print(par, "valor(es) par(es)")
print(imp, "valor(es) impar(es)")
print(pos, "valor(es) positivo(s)")
print(neg, "valor(es) negativo(s)")