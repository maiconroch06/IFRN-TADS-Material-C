//Mostre a soma dos quadrados dos 15 primeiros números naturais.
#include <stdio.h>

int main(void) {
    int soma = 0;

    for (int i = 1; i <= 15; i++) {
        soma += i * i;
        printf("%i^2: %i\n",i,i * i);
    }

    printf(" -> A soma eh: %i\n",soma);

    return 0;
}