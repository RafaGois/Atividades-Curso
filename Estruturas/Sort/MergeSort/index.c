#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vet [10];

    agrega(vet);
    printf("Vetor antes da organização: \n");
    for (size_t i = 0; i < 10; i++)
    {
        printf(" |%d|", vet[i]);
    }

    mergeSort(vet,0,9);

    printf("\nVetor depois da organização: \n");
    for (size_t i = 0; i < 10; i++)
    {
        printf(" |%d|", vet[i]);
    }

    printf("\n");

    return 0;
}

int agrega (int vet[])
{
    srand((unsigned)time(NULL));

    for (size_t i = 0; i < 10; i++)
    {
        int aleatorio = (rand() % 20) + 0;
        vet[i] = aleatorio;
    }
}

void merge(int vetor[], int inicio, int meio, int fim) {
    int com1 = inicio, com2 = meio+1, comAux = 0, tam = fim-inicio+1;
    int *vetAux;
    vetAux = (int*)malloc(tam * sizeof(int));

    while(com1 <= meio && com2 <= fim){
        if(vetor[com1] < vetor[com2]) {
            vetAux[comAux] = vetor[com1];
            com1++;
        } else {
            vetAux[comAux] = vetor[com2];
            com2++;
        }
        comAux++;
    }

    while(com1 <= meio){  //Caso ainda haja elementos na primeira metade
        vetAux[comAux] = vetor[com1];
        comAux++;
        com1++;
    }

    while(com2 <= fim) {   //Caso ainda haja elementos na segunda metade
        vetAux[comAux] = vetor[com2];
        comAux++;
        com2++;
    }

    for(comAux = inicio; comAux <= fim; comAux++){    //Move os elementos de volta para o vetor original
        vetor[comAux] = vetAux[comAux-inicio];
    }
    
    free(vetAux);
}

void mergeSort(int vetor[], int inicio, int fim){
    if (inicio < fim) {
        int meio = (fim+inicio)/2;

        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio+1, fim);
        merge(vetor, inicio, meio, fim);
    }
}