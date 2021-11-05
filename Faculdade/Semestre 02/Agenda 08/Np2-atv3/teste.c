#include <stdio.h>
#include <stdlib.h>

int SIZE = 20;

int main(int argc, char const *argv[])
{
    int vet[] = {4,5,7,9,3,2,1,10,6,3,5,6,7,8,9,5,3,4,7,8};
    int n;
    int exLinear = 0,exBin = 0;

    for (int i = 0; i < SIZE; i++)
    {
        printf("|%d|",vet[i]);
    }

    printf("\nInforme um número que deseja pesquisar: ");
    scanf("%d",&n);

    printf("\n--- BUSCA LINEAR ---");
    exLinear = busca_linear(vet,n);
    printf("\nExecuções: %d", exLinear);

    printf("\n--- BUSCA BINARIA ---");
    exLinear = pesquia_binaria(vet,n,0,SIZE-1);
    printf("\nExecuções: %d", exLinear);
    

    return 0;
}

int busca_linear(int vet[], int x)
{ 
    for (int i = 0; i < SIZE; i++)
    {
        if (vet[i] == x)
        {
            printf("Encontrou!");
        }
        
    }
    return i;
}   

int pesquia_binaria (int vet[], int key, int left, int right)
{
    int mid, contador = 0;
    while (left < right)
    {
        mid = (left + right) /2;
        if (vet[mid] == key)
        {
            return mid;
        } else if (key < vet[mid])
        {
            right = mid-1;
            
        } else {
            left = mid+1;
            
        }
        contador++;
    }
    return contador;
}