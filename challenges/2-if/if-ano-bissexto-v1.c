#include <stdio.h>

int main(void) {
    int ano;

    printf("Infome um ano para descobrir que se ele e bissexto: ");
    scanf("%f",&ano);

    if (ano % 4 == 0) {
        printf("O ano e bissexto");

    } else if (ano % 400 == 0) {
        printf("O ano e bissexto");

    } else if (ano % 100 == 1) {
        printf("Nao e bissexto");

    } else {
        printf("Nao e bissexto");
    }

    printf("ERRO! O ano informado nao pode ser negativo!");
    

    return 0;
}