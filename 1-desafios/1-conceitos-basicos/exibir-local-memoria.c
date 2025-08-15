#include <stdio.h>
// Faça um programa em C que exiba o valo e endereços de tipos de variaveis.
int main(void) {

    int       num1 = 3;
    short int num2 = 4;
    long int  num3 = 7;

    printf("\n Bytes <int>: %i", sizeof(int));
    printf("\n Bytes <short int>: %i", sizeof(short));
    printf("\n Bytes <long int>: %i\n", sizeof(num3));

    printf("\n Endereco num1: %p", &num1);
    printf("\n Valor em num1: %i\n", num1);

    printf("\n Endereco num2: %p", &num2);
    printf("\n Valor em num2: %i\n", num2);

    printf("\n Endereco num3: %p", &num3);
    printf("\n Valor em num3: %i", num3);

    return 0;
}