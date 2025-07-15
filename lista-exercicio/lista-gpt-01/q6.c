#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Leia 10 números e exiba o num_maior e o num_menor
#define N_NUMEROS 10
int main (void) {
    int num_aleatorios[N_NUMEROS];
    int num_maior, num_menor;
    
    srand(time(NULL));
    for (int i = 0; i < N_NUMEROS; i++)
    {
        num_aleatorios[i] = rand() % 101;

        if (i == 0) {
            num_maior = num_menor = num_aleatorios[0];
        } else if (num_aleatorios[i] > num_maior) {
            num_maior = num_aleatorios[i];
        } else if (num_aleatorios[i] < num_menor) {
            num_menor = num_aleatorios[i];
        }
        
    }
    
    printf(" SEQUENCIA:");
    for (int i = 0; i < N_NUMEROS; i++)
    {
        printf(" %i ", num_aleatorios[i]);
    }

    printf("\n MAIOR: %i", num_maior);
    printf("\n MENOR: %i", num_menor);

    return 0;
}