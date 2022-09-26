#include <stdio.h>
 
int main() {
    
    double tempo, vel, dist, litros;

    scanf("%lf", &tempo);
    scanf("%lf", &vel);

    dist = tempo * vel;
    litros = dist / 12;

    printf("%.3lf\n", litros);
    return 0;
}