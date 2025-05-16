//if (se): o que tiver dentro do if é o bloco de decisão, se a condição dela for V, irá executa-lo se n nada acontesse.
//aula com ds4, ds5 e ds6
#include <stdio.h>

int main (void) {
    int n;

    printf(" -> Informe um numero para saber se ele e par ou impar: ");
    scanf("%i", &n);

    if (n % 2 == 0) {
        printf("\n                  --> Sim, %i e par! <--", n);
    } else {
        printf("\n                  --> Nao, %i e impar! <--", n);
    }

    printf("\n\n - - - - - - - - - - Final do programa - - - - - - - - -");

    return 0;
}