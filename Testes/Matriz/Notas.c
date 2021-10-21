#include <stdlib.h>
#include<stdio.h>

int main () {

    double mat[5][4];
    int nAluno;
    char op;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Informe a nota do aluno %d, na matéria %d: ",i,j);
            scanf("%lf", &mat[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("  %.1lf",mat[i][j]);
        }
        printf("\n");
    }

    printf("Deseja ver as notas de um aluno separadamente? \n");
    printf("[S]- Sim\n");
    printf("[N]- Não\n");
    scanf(" %c", &op);

    if (op == 'S' || op == 's')
    {
    
        printf("\n");
        printf("Informe o número do aluno: ");
        scanf("%d", &nAluno);
        printf("\n");

        for (int j = 0; j < 4; j++)
        {
            printf("  %.1lf",mat[nAluno][j]);
        }

    }

}