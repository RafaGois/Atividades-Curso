#include <stdio.h>
#include <stdlib.h>

int main () {

    int n,contador;
    contador = 0;

    printf("Informe um número para análise: ");
    scanf("%d", &n);

    for (int i = 1; i < n + 1; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n",i);
            contador++;
        }
    }

    if (contador <= 2)
    {
        printf("\nO número é primo.\n");
    } else
    {
        printf("\nO número não é primo.\n");
    }
    
    

}