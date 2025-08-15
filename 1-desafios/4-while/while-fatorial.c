#include <stdio.h>

int main(void) {
    int n;
    int fat = 1;
    
    printf("Informe um numero: ");
    scanf("%i",&n);

    if (n >= 0) {

        printf(" -> %i! = ", n);

        while (n > 1) {
            fat = fat * n;
            n = n - 1; /* n-- ou n -= 1*/
        }

        printf("%i",fat);

    } else {
        printf(" #ERRO: valor invalido");
    }

    return 0;
}