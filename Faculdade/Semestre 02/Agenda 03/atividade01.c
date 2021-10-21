#include <stdlib.h>
#include <stdio.h>

typedef struct ponto
{
    int n1,n2,n3;
    struct ponto * proximo;
}t_ponto;

int main(int argc, char const *argv[])
{
    t_ponto * ini_ponto;
    t_ponto * prox_ponto;
    int resp;
    int contador = 3;

    ini_ponto = (t_ponto *)malloc(sizeof(t_ponto));
    if(ini_ponto == NULL)
        exit(1);
    prox_ponto = ini_ponto;

    while (1)
    {
        printf("Informe n1: ");
        scanf("%d", &prox_ponto -> n1);

        printf("Informe n2: ");
        scanf("%d", &prox_ponto -> n2);

        printf("Informe n3: ");
        scanf("%d", &prox_ponto -> n3);

        printf("Deseja continuar?\n");
        printf("[1]- SIM\n");
        printf("[2]- NÃO\n");
        scanf("%d", &resp);
        if (resp == 1)
        {
            contador = contador + 3;
            prox_ponto -> proximo = (t_ponto *)malloc(sizeof(t_ponto));
            prox_ponto = prox_ponto -> proximo;
        } else
        {
            break;
        }
    }

    printf("\n");

    prox_ponto-> proximo = NULL;
    prox_ponto = ini_ponto;
    while (prox_ponto != NULL)
    {
       
        printf("Nó 1: %d - Nó 2: %d - Nó 3: %d\n",prox_ponto->n1,prox_ponto->n2,prox_ponto->n3);
        prox_ponto = prox_ponto->proximo;
        
    }
    
    printf("Tamanho - %d",contador);

    for (int i = 0; i < contador; i++)
    {
        if (prox_ponto->n1 == 3)
        {
            printf("Encontrado");
        } else
        {
            printf("Não encontrado");
        }
        
        
    }
    
    
    return 0;
}