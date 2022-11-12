int main()
{
    int golInter,golGremio,c,d,i,n,g,h,Empate,Gremio,Inter;
    c=0,d=0,i=0,Empate=0,Gremio=0,Inter=0;
    while(1)
    {
        scanf ("%d%d", &golInter, &golGremio);
        if(golInter>golGremio) Inter++;
        if(golInter<golGremio) Gremio++;
        if(golInter==golGremio) Empate++;
        c+=golInter;
        d+=golGremio;
        i++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&n);
        if(n==1)
            continue;
        if(n==2)
            break;
    }
    printf("%d grenais\n",i);
    printf("Inter:%d\n",Inter);
    printf("Gremio:%d\n",Gremio);
    printf("Empates:%d\n",Empate);
    if(Inter>Gremio)
        printf("Inter venceu mais\n");
    if(Inter<Gremio)
        printf("Gremio venceu mais\n");
    if(Gremio==Inter)
        printf("Nao houve vencedor\n");
    return 0;
}