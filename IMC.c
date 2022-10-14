
#include <stdio.h>

int main()
{
    float peso, altura, imc;
    
    printf("Insira seu peso em kg: ");
        scanf("%f", &peso);
    printf("Insira seua altura em metro: ");
        scanf("%f", &altura);
    imc = peso/(altura*altura);
    
    if(imc < 18.5)
        printf("Seu imc foi de %.2f e você está abaixo do peso.", imc);
    if(imc >= 18.5 && imc <= 24.9)
        printf("Seu imc foi de %.2f e você está saudavel.", imc);
    if(imc >= 25 && imc <= 29.9)
        printf("Seu imc foi de %.2f e você está com sobrepeso.", imc);
    if(imc >= 30 && imc <= 34.9)    
        printf("Seu imc foi de %.2f e você está com obesidade grau 1.", imc);
    if(imc >= 35 && imc <= 39.9)
        printf("Seu imc foi de %.2f e você está com obesidade grau 2.", imc);
    else
        printf("Seu imc é de %.2f e você está com obesidade grau 3, procure um médico urgentemente.", imc);
    return 0;
}