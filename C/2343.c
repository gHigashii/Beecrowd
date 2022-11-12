#include <stdio.h>

int main(){
    int x, y, grid[5][8], resp=0;
    int i=0, n=0, row=0, col=0;
    
    //lê o número de repetições que irá ocorrer.
    scanf("%d", &n);

    //sempre que colocar uma posição, o grid[x][y] recebe +1.
    for (i=0;i<n; i++){
        scanf("%d %d", &x, &y);
        grid[x][y] += 1;
    }

    //verifica cada espaço da matriz, procurando um resultado maior que 1.
    for (row=0;row<5;row++){
        for (col=0;col<8;col++){
            if (grid[row][col] > 1){
                resp ++;
            }   
        }   
    }
    
    //se tiver algum espaço maior que 1, ele printa '1', caso não, '0'.
    if (resp >= 2) {printf("1\n");}
    if (resp == 1) {printf("0\n");}
}