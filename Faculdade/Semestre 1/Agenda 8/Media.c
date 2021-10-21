#include <stdlib.h>
#include<stdio.h>

int main () {

    float n1,n2,n3,n4,media;

    printf("Informe a nota 1: ");
    scanf("%f", &n1);

    printf("Informe a nota 2: ");
    scanf("%f", &n2);

    printf("Informe a nota 3: ");
    scanf("%f", &n3);

    printf("Informe a nota 4: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf("Média = %f",media);  
}