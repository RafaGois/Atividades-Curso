#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int TAM_MAX = 10;

int main(int argc, char const *argv[])
{
    int vet[TAM_MAX]; 


    agrega(vet);

    printf("\nVetor antes do BubleSort:\n");
    for (size_t i = 0; i < TAM_MAX; i++)
    {
        printf("|%d| ", vet[i]);
    }

    printf("\n");

    insertionSort(vet);
    printf("\nVetor depois do BubleSort:\n");
    for (size_t i = 0; i < TAM_MAX; i++)
    {
        printf("|%d| ", vet[i]);
    }
    
    printf("\n");

    return 0;
}

int agrega (int vet[])
{
    srand((unsigned)time(NULL));

    for (size_t i = 0; i < TAM_MAX; i++)
    {
        int aleatorio = (rand() % 20) + 0;
        vet[i] = aleatorio;
    }
}

void insertionSort (int vet[])
{
    int i,j,aux;

    for (size_t i = 1; i < TAM_MAX; i++)
    {
        aux = vet[i];
        j = i - 1;
        while (j >= 0 && vet[j] > aux)
        {
            vet[j + 1] = vet[j];
            j = j - 1;
        }
        vet[j + 1] = aux;
    }
    
    
}
