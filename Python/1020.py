n = int(input())

a = n / 365
aux = (n % 365) / 30
m = aux / 30
d = aux % 30

print("%d ano(s)" %a)
print("%d mes(es)" %m)
print("%d dia(s)" %d)