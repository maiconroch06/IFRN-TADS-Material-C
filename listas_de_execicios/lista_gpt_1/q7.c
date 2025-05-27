//Solicite 10 números ao usuário e diga quantos deles são positivos.

#include <stdio.h>

int main (void) {
    int cont_positivo = 0;
    int cont_negativo = 0;

    for (int i = 0; i <= 10; i++) {    
        printf(" Informe o Nummero: ");
        scanf("%i",&i);

        if (i > 0) {
            cont_positivo++;
        } else if (i < 0) {
            cont_negativo++;
        }
        
    }
    
    printf(" -> Positivos: %i\n",cont_positivo);
    printf(" -> Negativos: %i",cont_negativo);
    
    return 0;
}