#include <stdio.h>
#include <stdlib.h>

int main () {
    float n1,n2,n3,total;
    int Nalunos;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &Nalunos);

    for (int i = 0; i < Nalunos; i++)
    {
        printf("\n***** Aluno %d *****\n",i);
        printf("Informe a primeira nota: \n");
        scanf("%f", &n1);

        printf("Informe a segunda nota: \n");
        scanf("%f", &n2);

        printf("Informe a terceira nota: \n");
        scanf("%f", &n3);

        printf("A média do aluno %d é %.1f\n",i, (n1 + n2 + n3)/3);
        total = n1 + n2 + n3 + total;
    }

    printf("\nA média final da turma é: %.2f",total / (Nalunos * 3));
    
}