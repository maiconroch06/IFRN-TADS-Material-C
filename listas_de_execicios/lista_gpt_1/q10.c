//Leia um vetor de 10 números e exiba quantos são positivos
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_NUMEROS 10
int main (void) {
    int num_aleatorios[N_NUMEROS];
    int cont_positivos = 0, cont_negativos = 0, cont_zeros = 0;
    
    srand(time(NULL));
    
    for (int i = 0; i < N_NUMEROS; i++) {
        num_aleatorios[i] = (rand() % 201) - 100;

        if (num_aleatorios[i] > 0) {
            cont_positivos++;
        } else if (num_aleatorios[i] < 0) {
            cont_negativos++;
        } else {
            cont_zeros++;
        }
    }

    printf(" SEQUENCIA:");
    
    for (int i = 0; i < N_NUMEROS; i++) {
        printf(" %i", num_aleatorios[i]);
    }

    printf("\n Quantidade de positivos: %i", cont_positivos);
    printf("\n Quantidade de negativos: %i", cont_negativos);
    printf("\n Quantidade de zeros: %i", cont_zeros);
    

    return 0;
}