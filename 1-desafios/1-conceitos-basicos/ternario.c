#include <stdio.h>
// Faça um programa em C que utilize o operador TERNARIO para comparar dois numeros, se o priemiro numero é maior diminua com o segundo, caso o contraio, faça uma some. Exiba a comparação e o valor do resultado.
int main(void) {
    int num1,num2;

    printf(" Informe o primeiro numero: ");
    scanf("%i",&num1);

    printf(" Informe o segundo numero: ");
    scanf("%i",&num2);

    /* Seria o mesmo deste if else:
    if (num1 >= num2) {
        printf("num1 >= num2");
    } else {
        printf("num1 < num2");
    }
    */

    num1 >= num2 ? printf("\n num1 >= num2") : printf("\n num1 < num2");

    int resultado = num1 >= num2 ? num1 - num2 : num1 + num2;

    printf("\n RESULTADO: %i",resultado);
    
    return 0;
}