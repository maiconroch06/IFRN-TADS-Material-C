#include <stdio.h>

int main (void) {
    int num;

    printf(" - - - Tente a Sorte e Descubra 3 Numeros de 0 a 1000! - - -\n");
    printf("Informe um numero inteiro: ");
    scanf("\n%i",&num);

    if (num <= 1000 && num >= 500) {
        printf("Esse numero esta entre 500 e 1000");

    } else if (num == 5) {
        printf("Esse numero eh igual a 5");

    } else if (num == 200) {
        printf("Esse numero eh igual a 200");

    } else if (num == 400) {
        printf("Esse numero eh igual a 400");

    } else {
        printf("Esse numero esta fora do escopo");

    }
	return 0;
}
