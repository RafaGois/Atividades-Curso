#include <stdlib.h>
#include<stdio.h>

int main () {

    double salario;

    printf("Infrome o salário bruto: \n");
    scanf("%lf", &salario);

    printf("\nSalario bruto de %.2lf - 15(por cento) do IF = ",salario,"\n");
    salario = salario - ((salario * 15) / 100);
    printf("%.2lf", salario);

    printf("\nSalario de %.2lf - 11(por cento) do INSS = ",salario,"\n");
    salario = salario - ((salario * 11) / 100);
    printf("%.2lf", salario);

    printf("\nSalario de %.2lf - 3(por cento) do sindicato = ",salario,"\n");
    salario = salario - ((salario * 3) / 100);
    printf("%.2lf", salario);

    printf("\nSalário líquido: R$ ");
    printf("%.2lf", salario);
}