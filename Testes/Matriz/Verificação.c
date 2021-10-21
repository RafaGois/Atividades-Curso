#include <stdlib.h>
#include<stdio.h>

int main () {

    char mat[3][3];
    char caractere;

    printf("Informe um caractere qualquer: ");
    scanf(" %c", &caractere);

    mat[0][2] = caractere;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(mat[i][j] == 'f') {
                printf("Caractere encontrada !!!\n");
                printf("Na posição : %d - %d",i,j);
            }
        }
    }
    

}