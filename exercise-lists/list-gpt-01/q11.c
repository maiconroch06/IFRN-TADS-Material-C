// Crie um algoritmo que leia 5 números e os ordene em ordem crescente.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QUANT_NUMEROS 5

int main (void) {
    int num[QUANT_NUMEROS];

    printf("\n =============== ORDENACAO DE NUMEROS ALEATORIOS ===============\n");
    printf(" => SEQUENCIA ALEATORIA: {");
    srand(time(NULL)); //Muda a semente com o tempo, torna mais aleatorio ao executar
    
    for (int i = 0; i < QUANT_NUMEROS; i++) {
        num[i] = 10 + (rand() % (101 - 10));
        printf("%i",num[i]);
        if (i < QUANT_NUMEROS - 1) {
            printf(", ");
        }
        
    }
    printf("}");
    
    for (int i = 0; i < QUANT_NUMEROS; i++) {
        for (int j = 0; j < i; j++) {
            if (num[i] < num[j]) {
                int aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }        
        }
    }
    
    printf("\n => SEQUENCIA CRESCENTE: {");
    
    for (int i = 0; i < QUANT_NUMEROS; i++) {
        printf("%i",num[i]);
        if (i < QUANT_NUMEROS - 1) {
            printf(", ");
        }
    }

    printf("}");

    return 0;
}