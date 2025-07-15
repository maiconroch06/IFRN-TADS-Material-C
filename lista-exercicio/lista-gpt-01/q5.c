#include <stdio.h>
//Crie um vetor de 5 inteiros, leia os valores e exiba a soma total.
#define N_VALORES 5

int main () {
    int valores[N_VALORES];
    int soma_valores = 0;

    for (int i = 0; i < N_VALORES; i++) {
        printf(" Informe o valoresero %i: ",i + 1);
        scanf("%i",&valores[i]);
        soma_valores += valores[i];
    }

    printf("\n => RESULTADO: ");
    for (int i = 0; i < N_VALORES; i++) {
        printf("%i",valores[i]);

        if (i < N_VALORES - 1)
        {
            printf(" + ");
        }
    }
    
    printf(" = %i",soma_valores);

    return 0;
}
