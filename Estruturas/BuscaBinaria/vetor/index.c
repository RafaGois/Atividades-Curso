#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int MAX_TAM = 10;

int main(int argc, char const *argv[])
{
    int vet[] = {7,5,4,3,8,3,5,9,0,1};
    int pos;

    for (size_t i = 0; i < 10; i++)
    {
        printf(" |%d|", vet[i]);
    }

    pos = buscaBinaria(vet,10,0,MAX_TAM-1);
    if (pos < 0)
    {
        printf("\nValor nao encontrado...\n");
    } else {
        printf("\nEncontrou o valor na posicao %d\n",pos);
    }
    
        
    return 0;
}

int buscaBinaria (int vet[], int key,int left, int right)
{
    int mid;

    while (left <= right)
    {
        mid = (left <= right) / 2;
        if (vet[mid] == key)
        {
            return mid;
        } else if (key < vet[mid])
        {
            right = mid-1;
        } else {
            left = mid+1;
        }
    }
    return -1;
    
}

