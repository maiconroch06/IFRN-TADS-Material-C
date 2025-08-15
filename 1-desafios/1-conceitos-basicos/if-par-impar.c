#include <stdio.h>
// Faça um programa em C que recebe um numero do usuario e exiba se ele é par ou impar.
int main(void) {
    int num;
    
    printf("\n ============ IMPAR OU PAR??? ============");
    printf("\n -> Informe um numero: ");
    scanf("%i", &num);
    
    if (num % 2 == 0) {
        printf("\n > Sim, %i e par!", num);
    } else {
        printf("\n > Nao, %i e impar!", num);
    }
    printf("\n =========================================");

    return 0;
}