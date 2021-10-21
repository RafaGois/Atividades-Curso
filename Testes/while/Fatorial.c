#include <stdlib.h>
#include <stdio.h>

int main () {

    int n, contador, multi = 1;

    printf("Informe um número qualquer: ");
    scanf("%d", &n);

    contador = n;

    for (int i = 0; i < contador; i++)
    {
        multi = n * multi;
        n = n - 1;
    }
    printf("\nO fatorial de %d é: %d\n",contador, multi);
}
