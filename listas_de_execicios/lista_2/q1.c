#include <stdio.h>

int main (void) {
    float num1,num2;

    printf(" - - - Comparar dois numeros - - -");
    
    printf("\n\n Numero 1: ");
    scanf("%f",&num1);

    printf("\n Numero 2: ");
    scanf("%f",&num2);

    if (num1 != num2) {
        printf("\n -> Os numeros sao diferentes: %.2f != %.2f",num1,num2);

    } else {
        printf("\n -> Os numeros sao iguais: %.2f == %.2f",num1,num2);
    }

    return 0;
}
