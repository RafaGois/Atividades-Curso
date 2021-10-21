#include <stdio.h>
#include <stdlib.h>

int main () {

    int op,quantidade;
    float preco;

    preco = 12.50;

    printf("\nEscolha uma das opções abaixo: \n");
    printf("[1]- Vingadores 4 – da Marvel\n");
    printf("[2]- Como Treinar o Seu Dragão 3\n");
    printf("[3]- Dumbo\n");
    printf("[4]- Shazam!\n");
    printf("[5]- Sair\n");
    scanf("%d", &op);

if (op == 1 || op || 2 || op == 3 || op == 4)
{
    

    switch (op)
    {
    case 1:
        printf("Você escolheu Vingadores 4 – da Marvel\n");
        break;
    
    case 2:
        printf("Você escolheu Como Treinar o Seu Dragão 3\n");
        break;

    case 3:
        printf("Você escoleu Dumbo\n");
        break;

    case 4:
        printf("Você escolheu Shazam!\n");
        break;        
    }
} else {
    printf("Opção não encontrada\n");

}

    printf("Informe a quantidade de infressos: \n");
    scanf("%d", &quantidade);
    printf("\n");
    printf("Você deverá pagar : R$ %.2f",quantidade * preco,"\n");

}