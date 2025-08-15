#include <stdio.h>

int main(void) {

    int n = 1;
    int cont_positivo = 0;
    int cont_negativo = 0;
    int s = 0;


    while (n != 0) {
        printf(" -> Digite um numero (0 para sair): ");
        scanf("%i",&n);
        if (n > 0) {
            cont_positivo++;
        } else if (n < 0) {
            cont_negativo++;
        }
        s = s + n;
    }

    printf("\n # Positivos: %i",cont_positivo);
    printf("\n # Negativos: %i",cont_negativo);
    printf("\n -> Somatorio: %i",s);

    return 0;
}