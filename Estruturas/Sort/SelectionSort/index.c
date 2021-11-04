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

    selectSort(vet);
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

void selectSort (int vet[])
{

    int i,j,min,aux;

    for (size_t i = 0; i < (TAM_MAX - 1); i++)
    {
        min = i;
        for (size_t j = (i+1); j < TAM_MAX; j++)
        {
            if (vet[j] < vet[min])
            {
                min = j;
            }
        }
        if (i != min)
        {
            aux = vet[i];
            vet[i] = vet[min];
            vet[min] = aux;
        }  
    }
}
