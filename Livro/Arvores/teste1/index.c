#include <stdio.h>
#include <stdlib.h>

// Estrutura que representa um no,possui o valor e dois ponteiros.
struct no
{
    int isbn;
    struct no *esq,*dir;
};
//Definimos que o arvBin é um ponteiro para a estrutura do no.
typedef struct no* arvBin;

arvBin* criaArvBin();

int main(int argc, char const *argv[])
{
    // Ponteiro para arvBin(ponteiro de ponteiro)
    arvBin* raiz;
    raiz = criaArvBin();
    return 0;
}

// Raiz da arvore

arvBin* criaArvBin ()
{
    arvBin* raiz = (arvBin*) malloc(sizeof(arvBin));
    if (raiz != NULL)
    {
        *raiz = NULL;
        return raiz;
    }
    
}
// Verifica um nó por vez e caso estejam vazios os libera.
void liberaNo (struct no* no)
{
    if (no == NULL)
    {
        return;
    }
    liberaNo(no->esq);
    liberaNo(no->dir);
    free(no);
    no = NULL;
}

// Caso o nõ raiz esteja vazio o libera
void liberaArvBin (arvBin* raiz)
{
    if (raiz == NULL)
    {
        return;
    }
    liberaNo(*raiz);
    free(raiz);
}

// Faz a soma do grau da árvore, executa a até encontrar um nó folha
int alturaArvBin (arvBin *raiz)
{
    if (raiz == NULL)
    {
        return 0;
    }
    if (*raiz == NULL)
    {
        return 0;
    }
    int altesq = alturaArvBin(&((*raiz)->esq));
    int altdir = alturaArvBin(&((*raiz)->dir));
    if (altesq > altdir)
    {
        return (altesq + 1);
    } else {
        return(altdir + 1);
    }
}

int insereArvBin (arvBin *raiz, int valor)
{
    // Se ocorreu algum erro na criação da arvore retorna 0, indicando o erro.
    if (raiz == NULL)
    {
        return 0;
    }
    //Cria um novo no
    struct no* novo;
    // Aloca memoria de forma dinamica
    novo = (struct no*) malloc(sizeof(struct no));
    // Se ocorreu algum erro na alocacao de memoria do novo no, retorna 0 indicando o erro.
    if (novo == NULL)
    {
        return 0;
    }
    // Guarda info do novo no e faz seus ponteiros apontarem para null
    novo->isbn = valor;
    novo->dir = NULL;
    novo->esq = NULL;
    //Vai encontrar onde inserir o novo no
    // Se o nosso no especial estiver apontando para NULL, significa que temos uma arvore vazia.
    // o nosso unico no eh o que acabou de ser criado.
    if (*raiz == NULL)
    {
        *raiz = novo;
        //Caso contrario será avaliado onde será colocado o novo no
    } else {
        // sera usado um auxiliar atual
        struct no* atual = *raiz;
        //outro ant ede anterior a atual
        struct no* ant = NULL;
        //enquanto o atual n for NULL, ou seja um nó folha
        while (atual != NULL)
        {
            //vai guardar o end de atual.
            ant = atual;
            //se o valor que queremos inserir for igual a um existente na arvore, não será inserido.
            if (valor == atual->isbn)
            {
                free(novo);
                return 0;
            }
            //se for maior, vamos percorrer a arvore da direita
            if (valor > atual->isbn)
            {
                atual = atual->dir;
                //menor, a arvore da esquerda
            } else
            {
                atual = atual->esq;
            }
            //tudo isso é feito até achar uma folha candidata
            //o anterior vai ns guiar se vamos adicionar o novo no na direita ou na esquerda.
        }
        if (valor > ant->isbn)
        {
            ant->dir = novo;
        }
        return 1;
    }
}