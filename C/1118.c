#include <stdio.h>

float validar(float nota){
    float notaux = nota;

    while (nota<0 || nota>10){
        printf("nota invalida\n");
        scanf("%f", &nota);
    
        notaux = nota;
    }
    return notaux;
}
    
int main(){
    float n1, n2, nota = 0, media = 0;
    int n = 1;

    while(n == 1){
        scanf("%f", &nota);
        n1 = validar(nota);
        
        scanf("%f", &nota);
        n2 = validar(nota);
        
        printf("media = %.2f\n", (n1 + n2) /2); 
        n=0;

        while (n<1 || n>2){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &n);
        }
    }    
}
