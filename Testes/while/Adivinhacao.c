#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main () {

    int op, num,validacao;

     srand(time(NULL));

     num = rand() % 10;

    do
    {
        printf("\nInforme um número aleatório: ");
         scanf("%d", &op);

         if (op == num )
         {
             validacao = 1;
             printf("\nVocê acertou... Parabens\n");
         } else
         {
             printf("\nVocê errou...\n");
         }

    } while (validacao != 1);
     
}