x = 0
maior = 0
posi = 0

while x<100:
    n = int(input())
    x = x + 1

    if n > maior:
        maior = n
        posi = x
    
print(maior)
print(posi)
