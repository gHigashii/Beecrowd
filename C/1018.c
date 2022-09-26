#include <stdio.h>
 
int main() {
 
    int n, troco, n100 , n50 , n20 , n10 , n5 , n2 , n1;
    scanf("%d",&n);
    
    troco = n;

    n100 = troco / 100;
    troco = troco - (n100 *100);

    n50 = troco / 50;
    troco = troco - (n50 * 50);

    n20 = troco / 20;
    troco = troco - (n20 * 20);

    n10 = troco /10;
    troco = troco -(n10 * 10);

    n5 = troco / 5;
    troco = troco - (n5 * 5);

    n2 = troco / 2;
    troco = troco - (n2 * 2);


    printf("%d\n",n);
    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n",  n50);
    printf("%d nota(s) de R$ 20,00\n",  n20);
    printf("%d nota(s) de R$ 10,00\n",  n10);
    printf("%d nota(s) de R$ 5,00\n",   n5);
    printf("%d nota(s) de R$ 2,00\n",   n2);
    printf("%d nota(s) de R$ 1,00\n",   troco);
    
    return 0;
}