#include <stdio.h>
#include <stdlib.h>

int main () {

    float valores[3][2];
    float media[3];

    valores[0][0] = 15;
    valores[0][1] = 12.5;
    valores[1][0] = 13;
    valores[1][1] = 7.5;
    valores[2][0] = 100;
    valores[2][1] = 97;

    printf("Valores: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%.1f\t",valores[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Médias: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            media[i] = (valores[i][j] + valores[i][j + 1] ) / 2;
            if (j % 2 == 0)
            {
               printf("%.2f - ",media[i]);
            }
            
        }
    }
    

}