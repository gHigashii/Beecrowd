#include <stdio.h>
 
int main() {
    
    char nome;
    double a, b;

    scanf("%s",&nome);

    scanf("%lf %lf", &a, &b);

    printf("TOTAL = R$ %.2f\n",(a+(b*0.15)));

    return 0;
}
