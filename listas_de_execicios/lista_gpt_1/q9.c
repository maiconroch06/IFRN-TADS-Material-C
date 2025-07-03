#include <stdio.h>

int main (void) {
    int de, ate;

    printf(" De o numero: ");
    scanf("%i",&de);
    printf(" Ate o numero: ");
    scanf("%i",&ate);

    int cont_par = 0, cont_imp = 0;
    while (de < ate + 1) {
        if (de % 2 == 0) {
            cont_par++;
        } else {
            cont_imp++;
        }
        de++;
    }
    
    printf(" Quantidade de pares: %i\n", cont_par);
    printf(" Quantidade de impares: %i", cont_imp);

    return 0;
}