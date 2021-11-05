#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int vet[] = {45,7,10,4,13,17,20,16,41,21,38,43,31,2};

    size_t size = sizeof(vet)/sizeof(vet[0]);
    

    printf("\nVetor antes do BubleSort:\n");
    for (size_t i = 0; i < size; i++)
    {
        printf("|%d| ", vet[i]);
    }

    printf("\n");

    bublesort(vet,size);
    printf("\nVetor depois do BubleSort:\n");
    for (size_t i = 0; i < size; i++)
    {
        printf("|%d| ", vet[i]);
    }
    
    printf("\n");

    return 0;
}

void bublesort (int vet[], int size)
{

int aux;

    for (size_t contador = 0; contador < size; contador++)
    {
        for (size_t i = 0; i < size - 1; i++)
        {
            if (vet[i] > vet[i + 1])
            {
                aux = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = aux;
            } 
        }
    }
}
