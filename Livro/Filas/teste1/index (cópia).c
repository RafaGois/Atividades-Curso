#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


#define MAX 100

char *p[MAX];
char *qretrieve(void);
int spos = 0;
int rpos = 0;
void enter (void);
void qstore(char *q);
void review (void);
void delete(void);

void main(void)
{
    char s[80];
    register int t;
    clrscr();

    for (t=0;t<MAX; t++) p[t] = NULL;
    
    for (;;) {
        printf("Inserir, Listar, Remover, Sair:");
        gets(s);
        *s = toupper(*s);

        switch (*s)
        {
        case 'E':
            enter();
            break;
        case 'L':
            review();
            break;  

        case 'R':
            delete();
            break;

        case 'Q':
            exit(1);

        default :
            printf("Deu erro...");
            printf("Pressione qualquer tecla para continuar");
            getch();
            exit(2);
        }
    }
    getch();
}


void enter (void) {

    char s [256], *p;

    do
    {
        printf("Insira o evento %d:",spos+1);
        gets(s);

        if (*s == 0) break;
        p = (char *)malloc(strlen(s)+1);
        if (!p)
        {
            printf("Sem memória.\n");
            return;
        }
        strcpy(p,s);
        if(*s) qstore(p);
    } while (*s);
}

void review (void) {
    register int t;

    for (t = rpos; t < spos; t++)
    {
        printf("%d. %s\n", t+1,p[t]);
    }
}

void delete (void) {
    char *p;

    if ((p=qretrieve()) == NULL) return;
    printf("%s\n",p);
}

// armazena o evento
void qstore(char *q) {
    if (spos == MAX)
    {
        printf("*** A LISTA ESTÁ CHEIA ***");
        return;
    }
    p[spos] = q;
    spos++;
}

// recupera evento

char *qretrive() {
    if (rpos == spos)
    {
        printf("Sem evento...");
        return NULL;
    }
    rpos++;
    return p[rpos-1];
}

// O spos estará apontando para a proxima célula para a adição de um novo elemento.
// Já o rpos estará apontando para o próximo item a ser recuperado