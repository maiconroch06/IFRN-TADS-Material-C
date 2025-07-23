//Leia 10 números inteiros e indique se há duplicatas.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QUANT_NUMEROS 10

int main (void) {
    int num[QUANT_NUMEROS];


    printf("\n =============== REPETICAO DE NUMEROS ===============\n");
    printf(" => SEQUENCIA: {");
    srand(time(NULL)); //Muda a semente com o tempo, torna mais aleatorio ao executar
    
    for (int i = 0; i < QUANT_NUMEROS; i++) {
        num[i] = rand() % 10;
        printf("%i",num[i]);
        if (i < QUANT_NUMEROS - 1) {
            printf(", ");
        }
        
    }
    printf("}");
    
    int cont_repeticao = 0;
    for (int i = 0; i < QUANT_NUMEROS; i++) {
        for (int j = 0; j < i; j++) {
            // Verifica se já contou esse número como repetido
            if (num[i] == num[j]) {
                cont_repeticao++;
            }
        }        
    }

    printf("\n Qantidade de repeticoes: %i", cont_repeticao);
    printf("\n=====================================================");
    return 0;
}