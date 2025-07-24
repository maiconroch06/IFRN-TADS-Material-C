/* 19.Monte uma pirâmide numérica como a seguir para n=5:
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
*/

#include <stdio.h>

#define TAMANHO 5

int main (void) {

    for (int i = 1; i <= TAMANHO; i++) {
        for (int j = 1; j <= i; j++) {
            printf(" %i ", j);
        }
    printf("\n");
    }

    return 0;
}