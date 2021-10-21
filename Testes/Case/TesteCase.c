#include <stdlib.h>
#include <stdio.h>


int main () {

    int marca,modelo;

    printf("Informe a marca:\n");
    printf("[1]- Apple\n");
    printf("[2]- Samsung\n");
    printf("[3]- Xiaomi\n");
    scanf("%d", &marca);

    
    switch (marca)
    {
    case 1:

        printf("Escolha um dos modelos:\n");
        printf("[1]- 8 plus\n");
        printf("[2]- X\n");
        printf("[3]- 11 Pro Max\n");
        printf("[4]- 12 Pro Max\n");
        scanf("%d", &modelo);

        if (modelo == 1)
        {
            printf("Você escolheu um Apple modelo 8 plus\n");
        } else if (modelo == 2)
        {
            printf("Você escolheu um Apple modelo X\n");
        } else if (modelo == 3)
        {
            printf("Você escolheu um Apple modelo 11 Pro Max\n");
        } else if (modelo == 4)
        {
            printf("Você escolheu um Apple modelo 12 Pro Max\n");
        } else
        {
            printf("Opção inválida...\n");
        }
        
        break;

    case 2:

        printf("Escolha um dos modelos:\n");
        printf("[1]- M51\n");
        printf("[2]- A51\n");
        printf("[3]- S20\n");
        printf("[4]- S21\n");
        scanf("%d", &modelo);

        if (modelo == 1)
        {
            printf("Você escolheu um Samsung modelo M51\n");
        } else if (modelo == 2)
        {
            printf("Você escolheu um Samsung modelo A51\n");
        } else if (modelo == 3)
        {
            printf("Você escolheu um Samsung modelo S20\n");
        } else if (modelo == 4)
        {
            printf("Você escolheu um Samsung modelo S21\n");
        } else
        {
            printf("Opção inválida...\n");
        }
        
        break;

    case 3:

        printf("Escolha um dos modelos:\n");
        printf("[1]- Redmi note 10s\n");
        printf("[2]- Redmi note 9s\n");
        printf("[3]- Mi 10 lite\n");
        printf("[4]- Mi 10s\n");
        scanf("%d", &modelo);

        if (modelo == 1)
        {
            printf("Você escolheu um Xiaomi modelo Redmi note 10s\n");
        } else if (modelo == 2)
        {
            printf("Você escolheu um Xiaomi modelo Redmi note 9s\n");
        } else if (modelo == 3)
        {
            printf("Você escolheu um Xiaomi modelo Mi 10 lite\n");
        } else if (modelo == 4)
        {
            printf("Você escolheu um Xiaomi modelo Mi 10s\n");
        } else
        {
            printf("Opção inválida...\n");
        }
        
        break;              
    
    default:
        printf("Opção inválida...\n");
        break;
    }


}