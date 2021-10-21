#include <stdio.h>
#include <stdlib.h>

int main () {

    float n1,n2,n3;

    printf("Informe o valor do primeiro número: ");
    scanf("%f", &n1);

    printf("Informe o valor do segundo número: ");
    scanf("%f", &n2);

    printf("Informe o valor do terceiro número: ");
    scanf("%f", &n3);

    printf("\nO resto da divisão é: %.1f",(n1 + n2 + n3)/3);

}