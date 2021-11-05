#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tam,n;

    printf("Informe o tamanho do vetor: ");
    scanf("%d",&tam);

    int vet[tam];

    emprega(vet,tam);
    insertionSort(vet,tam);
    imprime(vet,tam);

    printf("\nInforme o número que deseja procurar: ");
    scanf("%d",&n);

    valida(pesquisa_binaria(vet,n,0,tam));

    return 0;
}

void emprega(int vet[],int tam)
{
    for (size_t i = 0; i < tam; i++)
    {
        printf("Informe o valor da posição %d: ",i);
        scanf("%d",&vet[i]);
    }  
}

void valida(int n)
{
    if (n < 0)
    {
        printf("Valor não encontrado");
    } else {
        printf("Valor encontrado na posicao %d",n);
    }
    
}

void imprime(int vet[],int tam)
{
    for (size_t i = 0; i < tam; i++)
    {
        printf("|%d|",vet[i]);
    }
}

int pesquisa_binaria (int vet[], int key, int left, int right)
{
    int mid;
    mid = (left + right) / 2;

    if (right < left)
    {
        return -1;
    }
    if (vet[mid] == key)
    {
        return mid;
    } else if (key < vet[mid])
    {
        return pesquisa_binaria(vet,key,left, mid-1);
    } else {
        return pesquisa_binaria(vet,key,mid+1,right);
    }
}

void insertionSort (int vet[],int tam)
{
    int i,j,aux;

    for (size_t i = 1; i < tam; i++)
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
