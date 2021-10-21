#include <stdio.h>
#include <stdlib.h>

int main () {

    int numero;

    printf("Informe um número qualquer: ");
    scanf("%d", &numero);

    if (numero > 0)
    {
        printf("O número é positivo.");
    } else if (numero < 0 )
    {
        printf("O número é negativo");
    } else {
        printf("O número é zero.");
    }
}