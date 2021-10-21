#include <stdio.h>
#include <stdlib.h>

int main () {

    int numero,i;

    printf("Informe um número para verificação: ");
    scanf("%d", &numero);

    printf("\nNúmeros divisiveis por %d :\n",numero);
    for (i = 1; i < numero + 1; i++)
    {
        if (numero % i == 0)
        {
            printf("%d - ",i);
        }
    }

    printf("\nNúmeros não divisiveis por %d\n",numero);
    for (i = 1; i < numero + 1; i++)
    {
        if (numero % i != 0)
        {
            printf("%d - ",i);
        }   
    }




}