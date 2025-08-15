#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NCJ1 10
#define NCJ2 20

int main (void) {
    int conjunto_01 [NCJ1];
    int conjunto_02 [NCJ2];

    srand(time(NULL));

    // preencendo o vetor conjunto A
    printf("\n CONJUNTO A: ");
    for (int i = 0; i < NCJ1; i++) {
        conjunto_01[i] = rand() % 21; // 0 a 20
        printf("%i ", conjunto_01[i]);
    }

    printf("\n CONJUNTO B: ");
    for (int i = 0; i < NCJ2; i++) {
        conjunto_02[i] = rand() % 21; // 0 a 20
        printf("%i ", conjunto_02[i]);
    }

    int cont_rept = 0;
    printf("\n NUMEROS SEMELHANTES DOS CONJUNTOS: ");
    for (int i = 0; i < NCJ1; i++) {
        for (int j = 0; j < NCJ2; j++) {
            if (conjunto_01[i] == conjunto_02[j]) {
                printf("%i ", conjunto_01[i]);
                cont_rept += 1;
                break;
            }
        }
    }
    printf("\n\n * repeticoes: %i", cont_rept);

    return 0;
}