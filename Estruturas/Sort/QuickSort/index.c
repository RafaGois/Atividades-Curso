#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    char vet[] = {'r','a','f','a','e','l'};

    printf("Vetor antes da organização: \n");
    for (size_t i = 0; i < 6; i++)
    {
        printf(" |%c|", vet[i]);
    }

    quickSort(vet,0,6);
    
    printf("\nVetor depois da organização: \n");
    for (size_t i = 0; i < 6; i++)
    {
        printf(" |%c|", vet[i]);
    }
    printf("\n");

    return 0;
}

void quickSort (char vet [],int began, int end)
{
    int i,j,pivo,aux;
    i = began;
    j = end - 1;

    pivo = vet[(began + end) / 2];

    while (i <= j)
    {
        while (vet[i] < pivo && i < end)
        {
            i++;
        }
        while (vet[j] > pivo && j > began)
        {
            j--;
        }
        if (i <= j)
        {
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
            i++;
            j--;
        }
    }
    if (j > began)
    {
        quickSort(vet, began, j +1);
    }
    if (i < end)
    {
        quickSort(vet,i,end);
    }
}
