#include <stdio.h>
#include <string.h>
// Faça um programa em C que receba do usuario dois nomes e compare se elas são iguais.
int main(void) {
    char nome1[30];
    char nome2[30];

    printf(" Informe seu nome1: ");
    scanf(" %[ ^\n]",&nome1);

    printf(" Nome1: %s",nome1);

    fflush(stdin);

    printf("\n Informe seu nome2: ");
    scanf(" %[ ^\n]",&nome2);

    printf("\n Nome2: %s",nome2);

    int cmp = strcmp(nome1,nome2);

    if(cmp > 0) {
        printf(" %s %5.s",nome2,nome1);

    } else if(cmp < 0) {
        printf(" %s %5.s",nome1,nome2);

    } else {
        printf(" Strings iguais");
    }


    return 0;
}