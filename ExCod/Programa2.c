#include <stdio.h>
#include <stdlib.h>

struct item
{
    int cod;
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
        printf("%d\n",root->item.cod);
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

    root = insert(root,itemCreate(15));
    root = insert(root,itemCreate(10));
    root = insert(root,itemCreate(12));
    root = insert(root,itemCreate(14));
    root = insert(root,itemCreate(11));
    root = insert(root,itemCreate(13));
    root = insert(root,itemCreate(17));
    root = insert(root,itemCreate(18));
    root = insert(root,itemCreate(16));
    root = insert(root,itemCreate(19));

    // Node *tmp = treeSearch(root,15);
    // if (tmp == NULL)
    // {
    //     printf("\n>> Elemento nao encontrado <<\n");
    // } else
    // {
    //     printf("\n>> Elemento Encontrado <<\n");
    // }
    printf("Antes da remoção");
    treePrint(root);
    root = treeRemove(root,14);
    printf("Depois da remoção\n");    
    treePrint(root);
    return 0;
}
