#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main (void) {
    srand(time(NULL));

    int vetor[N];
    int n_inseridos = 0;
    int numero; // numero que vai ser inserido no vetor
    int existe_numero = 0;        // 0: nao existe 1: existe

    printf(" NUMEROS GERADOS: ");

    do {
        numero = rand() % 21;
        existe_numero = 0; // flag
        printf("%i ", numero);

        for(int i = 0; i < N; i++) {
            if (numero == vetor[i]) {
                existe_numero = 1; // numero ja existe no vetor
                break;
            }
            
        }
        
        if (!existe_numero) {
            vetor[n_inseridos] = numero;
            n_inseridos++;
        }
        

    } while (n_inseridos < N);
    
    printf(" \n VETOR: ");
    for (int i = 0; i < N; i++) {
        printf("%i ", vetor[i]);
    }
   
    return 0;
}