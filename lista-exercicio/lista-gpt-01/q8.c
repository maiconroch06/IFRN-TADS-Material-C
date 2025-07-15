#include <stdio.h>
// Calcule e exiba a tabuada de um número de 1 a 10
int main (void) {
    int num;

    printf(" ============ TABUADA ============\n");
    printf(" -> Informe o numero: ");
    scanf("%i",&num);

    for (int i = 0; i < 10; i++) {
        printf(" %i * %i = %i\n", num, i + 1, num * (i + 1));
    }

    return 0;
}