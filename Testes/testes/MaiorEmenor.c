#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main () {

    int vetor[10];
    int maior = 0,menor = 999;


    srand((unsigned)time(NULL));
    
    //imprime um número aleatório entre 30 e 1
    int aleatorio = (rand() % 30) + 1;


    for (int i = 0; i < 10; i++)
    {

        if (aleatorio < menor)
        {
            menor = aleatorio;
        }

        if (aleatorio > maior)
        {
            maior = aleatorio;
        }
        
        

        vetor[i] = aleatorio;
        printf("%d\n", vetor[i]);
        aleatorio = aleatorio + 1;
    }
    printf("O maior número é: %d\n",maior);
    printf("O menor número é: %d\n",menor);
    
}