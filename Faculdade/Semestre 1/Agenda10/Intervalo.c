#include <stdio.h>
int main() {
   int nmin, nmax;

    printf("Informe o número máximo: ");
    scanf("%d", &nmax);

    printf("Informe o número mínimo: ");
    scanf("%d", &nmin);

    printf("\n");

   while (nmin <= nmax) {
       
      printf("%d - ", nmin);
      nmin++;
   }
   return 0;
}