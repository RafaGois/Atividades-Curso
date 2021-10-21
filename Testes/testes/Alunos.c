#include <stdlib.h>
#include<stdio.h>

int main ()
 {
     int meninos, meninas,alunos;

     printf("Informe a quantidade de meninas: ");
     scanf("%d", &meninas);

     printf("Informe a quantidade de meninos: ");
     scanf("%d", &meninos);

    
    alunos = meninas + meninos;

    printf("O total de alunos é: %d",alunos);

    return 0;

 }