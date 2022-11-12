#include <stdio.h>

int main(){
    int i = 0, M = 1, N = 1, aux = 0, soma = 0;

    scanf("%d %d", &M, &N);

    while (M > 0 && N > 0)
    {
        if (N < M){
            aux = M; M = N; N = aux;}

        for (i=M; i<=N; i++)
        {
            soma += i;
            printf("%d ", i);
        }
        
        printf("Sum=%d\n", soma);
        soma = 0;
        scanf("%d %d", &M, &N);
    }
    
}