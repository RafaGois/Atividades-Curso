#include <stdlib.h>
#include <stdio.h>

int main () {

    
    int maior = 0,menor = 999;
    int j;


    printf("Informe o tamanho do vetor: ");
    scanf("%d",&j);

    int vetor[j];

    for (int i = 0; i < j; i++)
    {
        printf("Informe o %d valor: ",i);
        scanf("%d",&vetor[i]);

        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }

        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    
    printf("Entre os elementos do vetor: \n");

     for (int i = 0; i < j; i++)
    {
        printf("%d - ",vetor[i]);
    }
    printf("\nO maior número é: %d\n",maior);
    printf("O menor número é: %d\n",menor);
    
}