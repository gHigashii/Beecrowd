#include <stdio.h>

int main(){

    int N, x, y, a, b, resultado;

    scanf("%d", &N);

    for (a = 1; a <= N; a++)
    {
        scanf("%d %d", &x, &y);

        if (x%2 == 1)
        {
            resultado = 0;
            for (b = 1; b <= y; b++)
            {
                resultado += x;
                x+= 2;
            }
            printf("%d\n", resultado);
        } 
        else
        {
            resultado = 0;
            x++;
            for (b = 1; b <= y; b++)
            {
                resultado += x;
                x+=2;
            }
            printf("%d\n", resultado);            
        }
    }
    
    return 0;
}