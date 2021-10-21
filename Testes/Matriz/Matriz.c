#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main () {

    int mat[6][6];
    srand(time(NULL));

    
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            mat[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i == j)
            {
                printf("%d", mat[i][j]);
            } else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}