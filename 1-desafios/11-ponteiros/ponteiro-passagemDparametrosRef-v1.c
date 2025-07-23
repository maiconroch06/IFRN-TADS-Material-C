#include <stdio.h>

// PASSAGEM DE PARÂMETROS POR VALOR
float potenciacao(float a, int b) {  // a ^ b
    float resultado = 1;

    for(int i = 0; i < b; i++) {
        resultado *= a;
    }

    a = 10; b = 20;
    printf("\n * Funcao a: %.2f   b: %i", a, b);
    printf("\n * Funcao &a: %x   &b: %x", &a, &b);

    return resultado;
}

// PASSAGEM DE PARÂMETROS POR REFERÊNCIA
int main(void) {
    float a = 2;   // base
    int b = 5;     // expoente

    printf("\n * 2^5: %.2f", potenciacao(a,b));
    printf("\n * a: %.2f   b: %i", a, b);
    printf("\n * &a: %x   &b: %x", &a, &b);

    return 0;
}