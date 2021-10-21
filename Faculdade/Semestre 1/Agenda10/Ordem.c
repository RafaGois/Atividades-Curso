#include <stdio.h>
#include <stdlib.h>

int main () {

    int n1,n2,n3;

    printf("Informe o primeiro nuemro: \n");
    scanf("%d", &n1);

    printf("Informe o segundo nuemro: \n");
    scanf("%d", &n2);

    printf("Informe o terceiro nuemro: \n");
    scanf("%d", &n3);

    if (n1 < n2)
    {
        if (n2 < n3)
        {
            printf("%d - %d - %d",n1,n2,n3);
        } else if (n1 < n3)
        {
            printf("%d - %d - %d",n1,n3,n2);
        } else {
            printf("%d - %d - %d",n3,n1,n2);
        }
        
    } else if (n2 < n3)
    {
        if (n1 < n3)
        {
            printf("%d - %d - %d",n2,n1,n3);
        } else {
            printf("%d - %d - %d",n2,n3,n1);
        }
        
    } else {
        printf("%d - %d - %d",n3,n2,n1);
    }
}