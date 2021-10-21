#include <stdio.h>
#include <stdlib.h>

int main () {
    int n1 = 5;
    int n2 = 9;
    int r;

    r = n1;
    n1 = n2;
    n2 = r;

    printf("N1 era %d e agora é: %d \n",n2,n1);
    printf("N2 era %d e agora é: %d ",n1,n2);
}