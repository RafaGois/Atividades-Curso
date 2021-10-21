#include <stdio.h>
#include <stdlib.h>

int op(n) {

    n = n * n;
    return n;
}

int main () {

    int n;

    printf("Informe um número qualquer: ");
    scanf("%d", &n);

    printf("%d\n",op(n));
    
}