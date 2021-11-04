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

    bublesort(vet);
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

void bublesort (int vet[])
{

int aux;

    for (size_t contador = 0; contador < TAM_MAX; contador++)
    {
        for (size_t i = 0; i < TAM_MAX - 1; i++)
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
