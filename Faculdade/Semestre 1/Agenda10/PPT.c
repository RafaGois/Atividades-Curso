#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    
    int op;
    int aleatorio;


    srand((unsigned)time(NULL));
    aleatorio = (rand() % 3) + 1;

    printf("Escolha uma das opções: \n");
    printf("[1]- Pedra\n");
    printf("[2]- Papel\n");
    printf("[3]- Tesoura\n");
    scanf("%d", &op);

  
    if (aleatorio == 1)
    {
        printf("O computador escolheu pedra.\n");

        if (op == 1)
        {
            printf("Deu empate\n");
        }

        if ( op == 2)
        {
            printf("Você ganhou!\n");
            printf("Papel embrulha pedra.\n");
        } 
        if (op == 3) {
            printf("Você perdeu!\n");
            printf("Pedra quebra tesoura.\n");
        }
        
    }
    
    if (aleatorio == 2)
    {
        printf("O computador escolheu papel.\n");

        if (op == 1)
        {
            printf("Você Perdeu!\n");
            printf("Papael embrulha pedra.\n");
        }

        if ( op == 2)
        {
            printf("Deu empate\n");
        } 

        if (op == 3) {
            printf("Você Ganhou\n");
            printf("Tesoura corta papel.\n");
        }
        
    } else {

        printf("O computador escolheu tesoura\n");

        if (op == 1)
        {
            printf("Você Ganhou!\n");
            printf("Pedra quebra tesoura.\n");
        }

        if ( op == 2)
        {
            printf("Você perdeu\n");
            printf("Tesoura corta papel.\n");
        }

        if (op == 3) {
            printf("Deu empate\n");
        }

    }
    
    

}