#include <stdio.h>

int main(){
    int qdeAlunos, matricula, matriculaMaior;
    float nota, notaMaior;
    
    notaMaior = 0;

    scanf("%d", &qdeAlunos);
    while (qdeAlunos--)
    {    
        scanf("%d %f", &matricula, &nota);

        if (nota > notaMaior)
        {
            notaMaior = nota;
            matriculaMaior = matricula;
        }
    }

    if (notaMaior >= 8)
        printf("%d\n", matriculaMaior);
    else
        printf("Minimum note not reached\n");
     
    return 0;
}