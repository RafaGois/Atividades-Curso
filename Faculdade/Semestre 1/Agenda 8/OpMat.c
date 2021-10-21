#include <stdlib.h>
#include<stdio.h>

int main () {
    
    int n1,n2;

    printf("\nInforme o primeiro valor: ");
    scanf("%d", &n1);

    printf("\nInfrome o segundo valor: ");
    scanf("%d", &n2);

    printf("\n*** Adição *** \n");
    printf("%d + %d = %d",n1,n2, n1 + n2);

    printf("\n\n*** Subtração ***\n");
    printf("%d - %d = %d",n1,n2, n1 - n2);

    printf("\n\n*** Multiplicação *** \n");
    printf("%d x %d = %d",n1,n2, n1 * n2);

    printf("\n\n*** Divisão *** \n");
    printf("%d / %d = %f",n1,n2, n1 / n2);
}