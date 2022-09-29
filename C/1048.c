#include <stdio.h>
 
int main(){ 

    float s;
    scanf("%f", &s);

    if (s > 0.00 && s <= 400.00)
    {
        printf("Novo salario: %.2f\n", s * 1.15);
        printf("Reajuste ganho: %.2f\n", s * 0.15);
        printf("Em percentual: 15 %%\n");
    } else {
        if ( s > 400.01 && s <= 800.00)
    {
        printf("Novo salario: %.2f\n", s * 1.12);
        printf("Reajuste ganho: %.2f\n", s * 0.12);
        printf("Em percentual: 12 %%\n");
    } else {
        if ( s > 800.01 && s <= 1200.00)    
    {
        printf("Novo salario: %.2f\n", s * 1.10);
        printf("Reajuste ganho: %.2f\n", s * 0.10);
        printf("Em percentual: 10 %%\n");
    } else {
        if (s > 1200.01 && s <= 2000.00)
    {
        printf("Novo salario: %.2f\n", s * 1.07);
        printf("Reajuste ganho: %.2f\n", s * 0.07);
        printf("Em percentual: 7 %%\n");
    } else {
        printf("Novo salario: %.2f\n", s * 1.04);
        printf("Reajuste ganho: %.2f\n", s * 0.04);
        printf("Em percentual: 4 %%\n"); 
    }
    }
    }
    }

    return 0;
}