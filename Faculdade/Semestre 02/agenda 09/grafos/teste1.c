#include <stdio.h>
#include <stdbool.h>



int grafo[5][5] = {
        {0,0,1,0,0},
        {0,0,1,0,0},
        {1,1,0,1,1},
        {0,0,1,0,1},
        {0,0,1,1,0}
    };

int main(int argc, char const *argv[])
{
    
    if (temLigacao(2,2) == 1)
    {
        printf("Tem ligacao\n");
    } else {
        printf("Não tem ligacao\n");
    }
    
    return 0;
}

int temLigacao (int v1,int v2)
{
    if (grafo[v1][v2])
    {
        return 1;
    } else {
        return 0;
    }
    
}