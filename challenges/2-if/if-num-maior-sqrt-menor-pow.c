/* Criar um programa que deixe entrar com dois números e imprimir o quadrado do menor número e a raiz quadrada do maior número, se for possível. */

#include <stdio.h>
#include <math.h>

int main (void) {
    float n1,n2;

    printf("Informe o numero 1:");
    scanf("%f",&n1);
    printf("Informe o numero 2:");
    scanf("%f",&n2);

    if (n1 < n2) {
        printf("\n -> O quadrado do menor numero eh: %.2f", pow(n1,2));
        printf("\n -> A raiz quadrada do maior numero eh: %.2f", sqrt(n2));

    } else if (n2 < n1) { 
        printf("\n -> A raiz quadrada do maior numero eh: %.2f", sqrt(n1));
        printf("\n -> O quadrado do menor numero eh: %.2f", pow(n2,2));

    } else {
        printf(" #ERRO: os numeros sao iguais");
    }
    return 0;
}