#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    int vet[] = {45,7,10,4,13,17,20,16,41,21,38,43,31,2};

    size_t size = sizeof(vet)/sizeof(vet[0]);

    printf("Vetor antes da organização: \n");
    for (size_t i = 0; i < size; i++)
    {
        printf(" |%d|", vet[i]);
    }

    quickSort(vet,0,size);
    
    printf("\nVetor depois da organização: \n");
    for (size_t i = 0; i < size; i++)
    {
        printf(" |%d|", vet[i]);
    }
    printf("\n");

    return 0;
}

void quickSort (int vet [],int began, int end)
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
