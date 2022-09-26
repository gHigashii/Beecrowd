#include <stdio.h>

int main(){
    
    int a, b, c, n1, n2, n3;

    scanf("%d %d %d", &a, &b, &c);

    if (a>b && a>c){
        n3 = a;
            if (b>c){
            n2 = b;
            n1 = c;
            }else{
            n2 = c;
            n1 = b;}
    }else

    if (b>a && b>c){
        n3 = a;
            if (a>c){
            n2 = a;
            n1 = c;
            }else{
            n2 = c;
            n1 = a;}
    }else{
        n3 = c;
            if (a>b){
            n2 = a;
            n1 = b;
            }else{
            n2 = b;
            n1 = a;}
    }

    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);
    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    
    return 0;
}


/*
#include <stdio.h>

int main()

{

    int num1, num2, num3, cont1, cont2, cont3, comparador;

    scanf("%d %d %d", &num1, &num2, &num3);

    cont1 = num1;

    cont2 = num2;

    cont3 = num3;

    if (cont1 < cont2)

    {

        comparador = cont1;
 
        cont1 = cont2;

        cont2 = comparador;

    }

    if (cont2 < cont3)

    {

        comparador = cont2;

        cont2 = cont3;

        cont3 = comparador;

    }

    if (cont1 < cont2)

    {

        comparador = cont1;

        cont1 = cont2;

        cont2 = comparador;

    }

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",cont3,cont2,cont1,num1,num2,num3);

    return 0;

}
*/ 