#include <stdlib.h>
#include <stdio.h>

int main () {

    float segundos;

    printf("Informe os segundos : ");
    scanf("%f", &segundos);

    printf("%.1f: %.1f: %.0f",segundos / 3600,segundos / 60,segundos);
}