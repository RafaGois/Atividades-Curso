#include <stdlib.h>
#include<stdio.h>

int main () {
    
    float imc,peso,altura;
    
    //corrigir futuramente
    printf("Informe sua altura (em Metros): \n");
    scanf("%f", &altura);


    printf("Informe o seu peso: (em Kg) \n");
    scanf("%f", &peso);


    imc = (peso / (altura * altura));

    printf("Seu IMC é: %.1f\n", imc);
    
    if (imc < 18.5)
    {
        printf("Você está muito magro");
    } else if (imc >= 18.5 && imc <= 24.9)
    {
        printf("Você está no peso ideal");
    } else if (imc >= 25 && imc <= 29.9)
    {
        printf("Você está com sobrepeso");
    } else if (imc >= 30 && imc <= 34.9)
    {
        printf("Obesidade grau I");
    } else if (imc >= 35 && imc <= 39.9)
    {
       printf("Vocẽ está com obesidade grau II");
    } else if (imc >= 40)
    {
        printf("Você está com obesidade  mórbida");
    }

    return 0;

}