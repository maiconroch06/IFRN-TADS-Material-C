#include <stdio.h>
//Crie um vetor de 5 inteiros, leia os valores e exiba a soma total.
int main () {
    int num[4];
    int som = 0;

    for (int i = 0; i <= 4; i++) {
        printf(" Informe o numero %i: ",i + 1);
        scanf("%i",&num[i]);
        som += num[i];
    }

    printf("\n => RESULTADO:");
    for (int i = 0; i < 4; i++) {
        printf(" %i +",num[i]);
    }
    printf(" %i = %i",num[4],som);

    return 0;
}
