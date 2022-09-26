#include <stdio.h>
 
int main() {
    int num, maior;
    
    scanf("%d", &num);
    maior = num;
    while(num != 0){
        scanf("%d", &num);
        if(num > maior){
            maior = num;
        }
    }
    printf("%d\n", maior);
}