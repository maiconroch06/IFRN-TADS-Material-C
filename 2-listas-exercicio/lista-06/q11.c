#include <stdio.h>
/*
Desenvolva uma função que recebe por referência três números reais (𝑎, 𝑏 e 𝑐) e organize-os/ordene-os de tal maneira que em 𝑎 deve ser armazenado o maior valor, em 𝑏 o valor intermediário e 𝑐 o menor valor.
*/

void ordenador(float * a, float * b, float * c);

int main() {
    float a, b, c;

    printf("\n --> Infomer 3 numeros reais <--");
    printf(" > Numero 01: ");
    scanf("%f", &a);
    printf(" > Numero 02: ");
    scanf("%f", &b);
    printf(" > Numero 03: ");
    scanf("%f", &c);
    
    printf("\n > Valores Definidos: %.2f %.2f %.2f", a, b, c);
    
    ordernador(&a, &b, &c);

    printf("\n > Valores Organizados: %.2f %.2f %.2f", a, b, c);

    return 0;
}

void ordenador(float * a, float * b, float * c) {
    float aux;

    if (*a < *b) {
        aux = *a;
        *a = *b;
        *b = aux;
    } if (*a < *c) {
        aux = *a;
        *a = *c;
        *c = aux;
    } if (*b < *c) {
        aux = *b;
        *b = *c;
        *c = aux;
    }
    
}