//Elabore um programa em linguagem C que gera 10 números aleatórios entre 0 e 100 e os armazena em um vetor na ordem em que eles vão sendo gerados. Em seguida, ordene o vetor de maneira crescente e exiba os elementos que foram gerados.

#include <stdio.h>
#include <stdlib.h>

#define QUANT_NUMEROS 10

int main (void) {
    int num[QUANT_NUMEROS];

    for (int i = 0; i < QUANT_NUMEROS; i++) {
        num[i] = (rand() )
    }
    

    return 0;
}