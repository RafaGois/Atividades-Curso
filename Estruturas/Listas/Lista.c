#include <stdio.h> 
#include <stdlib.h> 

int main(int argc, char const *argv[])
{
    //cria uma estrutura com o nome lista
    struct Lista
    {
        //aq é onde vão os elementos da lista, por ex esta lista tem o elemento valor e seu ponteiro(proximo), mas é possível atribuir mais elementos a ela...
        int valor;
        struct Lista * proximo;
    };

    struct Lista m1,m2,m3;
    struct Lista * gancho = &m1;

    m1.valor = 30;
    m2.valor = 20;
    m3.valor = 30;

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = (struct Lista *) 0;

    while (gancho != (struct Lista *) 0)
    {
        printf("%i\n", gancho -> valor);
        gancho = gancho -> proximo;
    }
    
    
    return 0;
}
