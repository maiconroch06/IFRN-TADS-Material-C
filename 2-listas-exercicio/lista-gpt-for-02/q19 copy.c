/* 19.Monte um triangulo de pascal como a seguir para n=5:
    1
    1 1
    1 2 1
    1 3 3 1
    1 4 5 4 1
    1 5 9 9 5 1 
*/

#include <stdio.h>

#define TAMANHO 5

int main (void) {
    int n = 1;
    int p = 1;
    
    for (int i = TAMANHO; i > 0; i--) {
        n *= i;
    }
    for (int j = 0; j > 0; j--)
    {
        p *= j
    }

    printf("\n");
    printf(" %i ", n);
    

    return 0;
}