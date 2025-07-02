
#include <stdio.h>

int main(void) {
    int ano;

    printf("Infome um ano para descobrir que se ele e bissexto: ");
    scanf("%i",&ano);

    if (ano < 0) {
        printf("ERRO: NAO EXISTE ANO BISSEXTO!");

    } else if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("O ano e bissexto");

    } else {
        printf("Nao e bissexto");
    }

    return 0;

}