#include <stdlib.h>
#include <stdio.h>

typedef struct ponto
{
    int x;
    struct ponto * proximo;
}t_ponto;

int main(int argc, char const *argv[])
{
    t_ponto * ini_ponto;
    t_ponto * prox_ponto;
    int resp;

    ini_ponto = (t_ponto *)malloc(sizeof(t_ponto));
    if(ini_ponto == NULL)
        exit(1);
    prox_ponto = ini_ponto;

    while (1)
    {
        printf("Informe um número: ");
        scanf("%d", &prox_ponto -> x);

        printf("Deseja continuar?\n");
        printf("[1]- SIM\n");
        printf("[2]- NÃO\n");
        scanf("%d", &resp);
        if (resp == 1)
        {
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
        printf("x: %d\n",prox_ponto->x);
        prox_ponto = prox_ponto->proximo;
    }
    
    
    return 0;
}