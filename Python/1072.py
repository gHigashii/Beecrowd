n = int(input())
i = 0 
soma = 0 
dentro = 0
fora = 0

while i < n:
    x = int(input())
    if (x >= 10) and (x <= 20):
        dentro = dentro + 1
    else:
        fora = fora + 1
    i = i + 1

print("%d in"  %dentro)
print("%d out" %fora)