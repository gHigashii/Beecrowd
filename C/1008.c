#include <stdio.h>
 
int main() {
 
    int id;
    float hour, sal, money;

    scanf("%d", &id);
	scanf("%f", &hour);
	scanf("%f", &money);
	    
    sal = hour * money;

    printf("NUMBER = %d\n", id);
    printf("SALARY = U$ %.2f\n", sal);
    
    return 0;
}