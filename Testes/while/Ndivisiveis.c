#include <stdlib.h>
#include <stdio.h>

int main () {

    int n = 1,contador = 1;

    printf("Informe um número qualquer: ");
    scanf("%d", &n);

    while (contador <= 100)
    {
        if (contador % n == 0)
        {
            printf("%d\n",contador);
        }
        contador = contador + 1;
    }
}