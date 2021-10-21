#include <stdio.h> 
#include <stdlib.h> 
struct node 
{ 
    int num;                        //dados do nó 
    struct node *nextptr;           //endereço do próximo nó 
}*stnode; 
void createNodeList(int n); // function para criar a lista 
void displayList();         // function para mostrar a lista 
int searchList(int num); 
int main() 
{ 
    int n; 
    int num; 
    printf("\n\n Listas encadeadas : Para criar e exibir listas encadeadas :\n"); 
    printf("-------------------------------------------------------------\n"); 
 
    printf(" Insira o número de nós : "); 
    scanf("%d", &n); 
    createNodeList(n); 
    printf("Qual o número que deseja encontrar?"); 
    scanf("%d", &num); 
    int res = searchList(num); 
    if (res == -1) { 
        printf("Item não encontrado"); 
    } else { 
        printf("Item encontrado na posição %d", res); 
    } 
    printf("\n Dados inseridos na lista: \n"); 
    displayList(); 
    return 0; 
} 
void createNodeList(int n) 
{ 
    struct node *fnNode, *tmp; 
    int num, i; 
    stnode = (struct node *)malloc(sizeof(struct node)); 
    if(stnode == NULL) //verifica se o fnnode está como NULL e se não há alocação de memória 
    { 
        printf("Memória não pode ser alocada."); 
    } 
    else 
    { 
// lê os dados pelo teclado 
        printf(" Insira os dados para o nó 1: "); 
        scanf("%d", &num); 
        stnode->num = num; 
        stnode->nextptr = NULL; // vincula o campo endereço a NULL 
        tmp = stnode; 
// cria n nós e manda pra lista 
        for(i=2; i<=n; i++) 
        { 
            fnNode = (struct node *)malloc(sizeof(struct node)); 
            if(fnNode == NULL) 
            { 
                printf("Memória não pode ser alocada"); 
                break; 
            } 
            else 
            { 
                printf("Insira os dados para o nó %d: ", i); 
                scanf(" %d", &num); 
 
                fnNode->num = num;      // vincula o campo num do fnnode com num 
                fnNode->nextptr = NULL; // vincula o endereço do fnnode com NULL 
 
                tmp->nextptr = fnNode; // vincula o nó anterior ao fnnode 
                tmp = tmp->nextptr; 
            } 
        } 
    } 
} 
void displayList() 
{ 
    struct node *tmp; 
    if(stnode == NULL) 
    { 
        printf("Lista está vazia."); 
    } 
    else 
    { 
        tmp = stnode; 
        while(tmp != NULL) 
        { 
            printf(" Dado = %d\n", tmp->num);       // mostra o dado do nó atual 
            tmp = tmp->nextptr;                     // avança a posição do nó 
        } 
    } 
} 
 
int searchList(int item) { 
    printf("item %d", item); 
    struct node *tmp; 
    if (stnode == NULL) { 
        printf("Lista está vazia."); 
    } else { 
        tmp = stnode; 
        int posicao = 0; 
        while (tmp != NULL) { 
            if (tmp->num == item) { 
                return posicao; 
            } else { 
                tmp = tmp->nextptr;                     // avança a posição do nó 
                posicao ++; 
            } 
        } 
        return -1; 
    } 
}  