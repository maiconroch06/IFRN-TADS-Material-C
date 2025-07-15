//Calcule e imprima a soma dos números de 1 a 50.
#include <stdio.h>

int main (void) {
    int soma = 0;

    for (int i = 1; i <= 50; i++) {    
        soma += i;
    }
    
    printf(" -> A soma eh: %i",soma);
    
    return 0;
}