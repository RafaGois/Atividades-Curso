#include <stdio.h>
#include <stdlib.h>

struct item
{
    int cod;
    int quantidade;
};

typedef struct item Item;

struct node
{
    Item item;
    struct node *left;
    struct node *right;
};

typedef struct node Node;

Node *initialize()
{
    return NULL;
}

Item itemCreate (int cod)
{
    Item item;
    item.cod = cod;
    return item;
}

Item quantidadeCreate (int quantidade)
{
    Item item;
    item.quantidade = quantidade;
    return item;
    
}

Node *insert(Node *root,Item x)
{
    if (root == NULL)
    {
        Node *aux = (Node*)malloc(sizeof(Node));
        aux->item = x;
        aux->left = NULL;
        aux->right = NULL;
        return aux;
    } else
    {
        if (x.cod > root->item.cod)
        {
            root->right = insert(root->right,x);
        } else if (x.cod < root->item.cod)
        {
            root->left = insert(root->left,x);
        } 
    }
    return root;
}

void treePrint(Node *root)
{
    if (root != NULL)
    {
        printf("%d ",root->item.cod);
        treePrint(root->left);
        treePrint(root->right);
    }
}

void treeFree(Node *root)
{
    if (root != NULL)
    {
        treeFree(root->left);
        treeFree(root->right);
        free(root);
    }
}

Node *treeSearch (Node *root,int cod)
{
    if (root != NULL)
    {
        if (root->item.cod == cod)
        {
            return root;
        } else
        {
            if (cod > root->item.cod)
            {
                return treeSearch(root->right,cod);
            } else
            {
                return treeSearch(root->left,cod);
            }
        } 
    }
    return NULL;
}

Node *treeMin (Node *root)
{
    if (root != NULL)
    {
        Node *aux = root;
        while (root->left != NULL)
        {
            aux = aux->left;
        }
        return aux;
    }
    return NULL;
}

Node *treeRemove (Node *root,int cod)
{
    if (root != NULL)
    {
        if (cod > root->item.cod)
        {
            root->right = treeRemove(root->right,cod);
        } else if (cod < root->item.cod)
        {
            root->left = treeRemove(root->left,cod);
        } else {
            if (root->left == NULL && root->right ==NULL)
            {
                free(root);
                return NULL;
            } else if (root->left == NULL && root->right != NULL)
            {
                Node *aux = root->right;
                free(root);
                return aux;
            } else if (root->left != NULL && root->right ==NULL)
            {
                    Node *aux = root->left;
                    free(root);
                    return aux; 
            } else 
            {
                Node *aux = treeMin(root->right);
                Item itemAux = aux->item;
                root = treeRemove(root,itemAux.cod);
                root->item = itemAux;
            }
        }
        return root;
    } 
    return NULL;
}

int main(int argc, char const *argv[])
{
    Node *root = initialize();
    int op = 1, n;

    while (op != 0)
    {
        printf("\nEscolha uma das opcoes:");
        printf("\n[1]- Inserir elementos");
        printf("\n[2]- Excluir elementos");
        printf("\n[3]- Buscar elementos");
        printf("\n[4]- Imprimir elementos");
        printf("\n[0]- Sair\n");
        scanf("%d",&op);

        switch (op)
        {
        case 1:
            printf("Informe o número que deseja adicionar: ");
            scanf("%d",&n);
            root = insert(root,itemCreate(n));
            break;
        case 2:
            printf("Informe o número que deseja excluir: ");
            scanf("%d",&n);

            root = treeRemove(root,n);

            printf("Elemento: %d excluido...",n);
            break;
        case 3:
            printf("Informe o número que deseja Buscar: ");
            scanf("%d",&n);

            procura(root,n);
            break;
        case 4:
            printf("\nConteudo da arvore: ");
            treePrint(root);
            printf("\n");
            break;
        case 0:
            printf("\nPrograma finalizado com sucesso!\n ");
            break;
        default:
            printf("Opcao não encontrada...");
            break;
        }
    }
    return 0;
}

void procura(Node *root,int n)
{
    Node *tmp = treeSearch(root,n);
     if (tmp == NULL)
     {
        printf("\n>> Elemento nao encontrado <<\n");
     } else
     {
        printf("\n>> Elemento Encontrado <<\n");
        printf("Temp -> %d",tmp);
     }
} 