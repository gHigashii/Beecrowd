#include <stdio.h>

int main(){
    int x, y;

    scanf("%d %d", &x, &y);

    while (x!=0 && y!=0){
        if (x>0 && y>0)
            printf("primeiro");
        if (x<0 && y>0)
            printf("segundo");
        if (x<0 && y<0)
            printf("terceiro");
        if (x>0 && y<0)
            printf("quarto");
        
        scanf("%d %d", &x, &y);
    }
}