#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tam;

    printf("Informe o tamanho do vetor: ");
    scanf("%d",&tam);

    int vet[tam];
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
