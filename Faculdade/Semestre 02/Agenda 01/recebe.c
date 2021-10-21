#include <stdlib.h>
#include <stdio.h>

int main () {

    int t;

    printf("Informe o tamanho do vetor: ");
    scanf("%d",&t);

    int vet1[t];
    int vet2[t];

    for (int i = 0; i < t; i++)
    {
        printf("Informe o %d número: ",i);
        scanf("%d",&vet1[i]);

        vet2[i] = vet1[i];
    }

    printf("Vetor 1:  ");

    for (int i = 0; i < t; i++)
    {
        printf("%d ",vet1[i]);
    }

    printf("\n");
    printf("Vetor 2:  ");

    for (int i = 0; i < t; i++)
    {
        printf("%d ",vet2[i]);
    }
    

}