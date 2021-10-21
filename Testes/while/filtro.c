#include <stdlib.h>
#include <stdio.h>

int main () {

    int contador = 1;
    int par [50];
    int impar [50];
    int a,b;

    while (contador <= 100)
    {
        if (contador % 2 == 0)
        {
            printf("%d --> Par\n",contador);
            impar[a] = contador;
            a++;
        } else
        {
            printf("%d --> Impar\n",contador);
            par[b] = contador;
            b++;
        }
        
        contador = contador + 1;
    }
    
}