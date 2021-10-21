#include <stdio.h>
#include <stdlib.h>

float adicao (float n1, float n2)
{
    return n1 + n2;
}

float subtracao (float n1, float n2)
{
    return n1 - n2;
}

float multiplicacao (float n1, float n2)
{
    return n1 * n2;
}

float divisao (float n1, float n2)
{
    return n1 / n2;
}


int main () {

    int op;
    float n1,n2;

    op = 2;

    while (op != 0)
    {

        printf("Escolha uma das opções:\n");
        printf("[1]- Adição.\n");
        printf("[2]- Subtração.\n");
        printf("[3]- Multiplicação.\n");
        printf("[4]- Divisão.\n");
        printf("[0]- Sair\n");
        scanf("%d", &op);

        if (op >= 1 && op <= 4)
        {

            printf("Informe o pimeiro valor: ");
            scanf("%f", &n1);

            printf("Informe o segundo valor: ");
            scanf("%f", &n2);

            if (op ==1)
            {
                printf("\nA adição é: %.1f\n", adicao(n1,n2));
                
            } else if (op == 2)
            {
                printf("\nA subtração é: %.1f\n", subtracao(n1,n2));
            } else if (op == 3)
            {
                printf("\nA multiplicação é: %.1f\n", multiplicacao(n1,n2));
            } else {
                
                printf("\nA divisão é: %.1f\n", divisao(n1,n2));
            }
        
        } else if (op == 0)
        {
            printf("\nPrograma finalizado com sucesso !\n");
        } else
        {
            printf("\nOpção informada inválida.\n");
        }
        
        
    }
}