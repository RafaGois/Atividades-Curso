#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {

    int numero;

    printf("Informe um número inteiro: ");
    scanf("%d", &numero);

    for (int i = 0; i < 11; i++)
    {
        printf("%d",numero * i);
        printf("\n");
    }
    

}