#include <stdlib.h>
#include<stdio.h>


int main () {

    int mat[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Informe o valor da posição %d,%d : ",i,j);
            scanf("%d", &mat[i][j]);
        }
        
        printf("\n");
    }


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d | ",mat[i][j]);
            
        }
        
        printf("\n");
    }
    
}