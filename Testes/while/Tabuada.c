#include <stdlib.h>
#include <stdio.h>

int main () {

    int contador = 0, n;

    printf("Informe um número qualquer: ");
    scanf("%d", &n);

    while (contador <= 10)
    {
        printf("%d X %d = %d\n",n,contador ,n * contador);
        contador = contador + 1;
    }
    


}