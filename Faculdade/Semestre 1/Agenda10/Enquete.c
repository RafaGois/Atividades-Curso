#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main () {

    int op,windows,unixs,linuxs,netware,mac,outros;
    windows = 0;
    unixs = 0;
    linuxs = 0;
    netware = 0;
    mac = 0;
    outros = 0;
    
    printf("***** ENQUETE *****");

    do
    {

        printf("\nEscolha uma das opções abaixo:\n");
        printf("[1]- Windows Server.\n");
        printf("[2]- Unix\n");
        printf("[3]- Linux\n");
        printf("[4]- Netware\n");
        printf("[5]- Mac OS\n");
        printf("[6]- Outros\n");
        printf("[0]- Sair\n");
        scanf("%d", &op);

        if (op < 0 || op > 6)
        {
            printf("\nValor inválido...\n");
            printf("Informe os valores novamente:");
            printf("\nEScolha uma das opções abaixo:\n");
            printf("[1]- Windows Server.\n");
            printf("[2]- Unix\n");
            printf("[3]- Linux\n");
            printf("[4]- Netware\n");
            printf("[5]- Mac OS\n");
            printf("[6]- Outros\n");
            printf("[0]- Sair\n");
            scanf("%d", &op);

        } else {

            if (op == 1)
            {
                windows++;
            } else if (op == 2)
            {
                unixs++;
            } else if (op == 3)
            {
                linuxs++;
            } else if (op == 4)
            { 
                netware++;
            } else if (op == 5)
            {
                mac++;
            } else if (op == 6)
            {
                outros++;
            }

        }

    } while (op != 0);

    float total;
    total = windows + unixs + linuxs + netware + mac + outros;

    printf("\n***** INFO *****\n\n");
    printf("Windows -> %d -> %.1f%%\n", windows, (windows / total) * 100);
    printf("Unix -> %d -> %.1f%%\n", unixs, (unixs / total) * 100);
    printf("Linux -> %d -> %.1f%%\n", linuxs, (linuxs / total) * 100);
    printf("Netware -> %d -> %.1f%%\n", netware, (netware / total) * 100);
    printf("Mac OS -> %d -> %.1f%%\n", mac, (mac / total) * 100);
    printf("Outros -> %d -> %.1f%%\n", outros, (outros / total) * 100);
    
}