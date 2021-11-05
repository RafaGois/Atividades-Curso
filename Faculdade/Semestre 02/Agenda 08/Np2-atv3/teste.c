#include <stdio.h>

int TAM_MAX = 10;

int main(int argc, char const *argv[])
{
    int n;

    int vet[TAM_MAX];

    emprega(vet,TAM_MAX);
    insertionSort(vet,TAM_MAX);
    imprime(vet,TAM_MAX);

    printf("\nInforme o número que deseja procurar: ");
    scanf("%d",&n);
    printf("\n--- EXECUCOES SEQUENCIAL ---");
    quantidade(pesquisa_sequencial(vet,n));
    printf("\n--- EXECUCOES BINARIA ---");
    quantidade(pesquisa_binaria(vet,n));

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
        printf("\nValor não encontrado");
    } else {
        printf("\nValor encontrado na posicao %d",n);
    }
    
}

void imprime(int vet[],int tam)
{
    for (size_t i = 0; i < tam; i++)
    {
        printf("|%d|",vet[i]);
    }
}

int pesquisa_binaria (int vet[], int key)
{
    int mid;
    int contador = 0;
    int left = 0;
    int right = TAM_MAX;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (key < vet[mid])
        {
            right = mid - 1;
        } else
        {
            left = mid + 1;
        }
        contador++;
    }
    return contador;
}

int pesquisa_sequencial (int vet[], int n)
{
    int contador = 0;
    int aux = 0;

    for (int i = 0; i < TAM_MAX; i++) {

        if (vet[i] == n) {
            
        }
        contador++;
    }
    if (aux <= 0)
    {
        
    }
    return contador;
}

int quantidade (int q) {
    printf("\nExecuções: %d",q);
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
