vi = 0
vg = 0
e = 0

while True:
    gi, gg = list(map(int, input().split()))

    if(gi == gg):
        e += 1
    else:
        if(gi>gg):
            vi += 1
        else:
            vg += 1

    print("Novo grenal (1-sim 2-nao)")
    resp = int(input())
    if(resp == 2):
        break

print("%d grenais" %(vi+vg+e))
print("Inter:%d" %vi)
print("Gremio:%d" %vg)
print("Empates:%d" %e)

if(vi == vg):
    print("Nao houve vencedor")
else:
    if(vi>vg):
        print("Inter venceu mais")
    else:
        print("Gremio venceu mais")
