#include <stdio.h>
#include <stdlib.h>

int main () {

    int mes;

    printf("Informe um mês (em numero)");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1:
        
        printf("Você escolheu Janeiro");

        break;

    case 2:

        printf("Você escolheu Fevereiro");

        break;

    case 3:

        printf("Você escolheu Março");

        break;

    case 4:

        printf("Você escolheu Abril");

        break;

    case 5:

        printf("Você escolheu Maio");

        break;

    case 6:

        printf("Você escolheu Junho");

        break;

    case 7:

        printf("Você escolheu Julho");

        break;

    case 8:

        printf("Você escolheu Agosto");

        break;

    case 9:

        printf("Você escolheu Setembro");

        break;

    case 10:

        printf("Você escolheu Outubro");

        break;

    case 11:

        printf("Você escolheu Novembro");

        break;

    case 12:

        printf("Você escolheu Dezembro");

        break;
    }
}