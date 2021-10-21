#include <stdlib.h>
#include<stdio.h>

int main () {

    int vetor[3];
    

    for (int i = 0; i < 3; i++)
    {
        printf("Infrome o valor do vetor posição %d: ",i);
        scanf("%d", &vetor[i]);
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("\n%d",vetor[i],"\n");
    }
    

}