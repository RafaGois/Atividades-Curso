#include <stdio.h>
#include <stdlib.h>

int main () {

    int numero,contador;
    contador = 0;

    printf("Informe um número inteiro: ");
    scanf("%d", &numero);

    printf("\n***Sucessores e antecessores ***\n");
   
    printf("O sucessor de %d é: %d ", numero, (numero + 1),"\n");
    printf("\nO antecessor de %d é: %d ", numero, (numero - 1)),"\n";
    printf("\n");
    
    printf("\n*** Tabuada ***\n");

    for (int i = 0; i < 11; i++)
    {
        printf("%d x %d = %d",numero,i,numero * i);
        printf("\n");
    }

    printf("\n*** Sequencia ***\n");

    for (int i = 0; i < 3;i++)
    {
        printf("Contador : %d \n", numero + contador);
        contador = contador + 2;
    }
    
    return 0;
}