#include <stdio.h>
#include <stdlib.h>

int maior(int v[], int tam, int indice){
    if(tam == 0)
        return v[indice];
    else{
        if(v[tam - 1] > v[indice])
            return maior(v, tam - 1, tam - 1);
        else
            return maior(v, tam - 1, indice);
    }
}

int menor(int v[], int tam, int indice){
    if(tam == 0)
        return v[indice];
    else{
        if(v[tam - 1] < v[indice])
            return menor(v, tam - 1, tam - 1);
        else
            return menor(v, tam - 1, indice);
    }
}

int soma (int x) {
    int resultado;

    if (x == 0)
    {
        resultado = 0;
    } else {
        resultado = x + soma(x - 1);
    }
    
    return resultado;

}

int main () {

    int x, n;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &x);

    int vet[x];

    for (int i = 0; i < x; i++)
    {
        printf("Informe o %d número: ",i);
        scanf("%d", &vet[i]);
    }
    
    printf("\n");
    printf("Maior número: %d\n", maior(vet, x, 0));
    printf("Menor número: %d\n", menor(vet, x, 0));
    n = menor(vet, x, 0);
    printf("Soma : %d",soma(n));
    printf("\n");

    return 0;
}