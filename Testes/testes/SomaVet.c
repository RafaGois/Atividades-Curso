#include <stdio.h>
#include <stdlib.h>

int main () {

    int vet1[5],vet2[5];

    vet1[0] = 7;
    vet1[1] = 2;
    vet1[2] = 3;
    vet1[3] = 4;
    vet1[4] = 5;

    vet2[0] = 1;
    vet2[1] = 2;
    vet2[2] = 3;
    vet2[3] = 4;
    vet2[4] = 5;

    for (int i = 0; i < 5; i++)
    {
        vet1[i] = vet1[i] + vet2[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d-",vet1[i]);
    }
    

}