
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srand((unsigned)time(NULL));
    
    //imprime um número aleatório entre 3 e 1
    int aleatorio = (rand() % 3) + 1;

    printf("\n\n%d", aleatorio,"\n");

    if (aleatorio == 1)
    {
        printf("Você escolheu 1");
    }
    

}