#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 100

typedef struct
{
    int Item[MAXTAM];
    int Topo;
} TPilha;

void TPilha_Inicia (TPilha *p) {
    p->Topo = -1;
}

int TPilha_Vazia (TPilha *p) {
    if (p->Topo == -1)
    {
        return 1;
    } else {
        return 0;
    }
}

int TPilha_Cheia (TPilha *p) {
    if (p->Topo == MAXTAM-1)
    {
        return 1;
    } else
    {
        return 0;
    }
}

void TPilha_Insere(TPilha *p, int x) {
    if (TPilha_Cheia(p) == 1)
    {
        printf("\nERRO: Pilha cheia...");
    } else {
        p->Topo++;
        p->Item[p->Topo] = x;
    }
}

int TPilha_Remove (TPilha *p) {
    int aux;

    if (TPilha_Vazia(p) == 1)
    {
        printf("\nERRO: Pilha vazia...");
    } else
    {
        aux = p->Item[p->Topo];
        p->Topo--;
        return aux;
    }
}

int main(int argc, char const *argv[])
    {
        TPilha *p = (TPilha*)malloc(sizeof(TPilha));
        TPilha_Inicia(p);

        int op = 2,n;

        while (op != 0) 
        {
            printf("\nEscolha uma das opções: ");
            printf("\n[1]- Continuar");
            printf("\n[0]- Sair\n");
            scanf("%d", &op);

            if (op == 1)
            {
                printf("\nInforme o valor que deseja adicionar: ");
                scanf("%d",&n);
                TPilha_Insere(p,n);
            }

            
        }

        //É passado o p que referencia o último valor da pilha
        //Apenas adiciona e exclui elementos do topo.

        int aux;
        aux = TPilha_Remove(p);
        printf("\nSaiu o %d", aux);
        

        return 0;
    }


