#include <stdio.h>
//tipo de variaves
int main(void) {

    int num1, num2; //Guarda numeros

    printf("Digite o Primeiro Numero: ");
    scanf("%i",&num1);

    printf("\nDigite o Segundo Numero: ");
    scanf("%i",&num2);

    int resultado; 
    resultado = num1 + num2;

    printf("Resultado: %f", resultado);
    // Outra forma de representar: "("%i + %i = %i" , num1, num2, resultado);"
    return 0;
}

