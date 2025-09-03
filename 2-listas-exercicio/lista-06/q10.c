#include <stdio.h>
/*
Desenvolva uma função que indica se um caractere recebido como parâmetro é ou não uma letra do alfabeto. A função deve retornar 1 caso positivo e 0 em caso contrário. Observação. Faça uso do conhecimento da Tabela ASCII
*/
int ehLetra(char c);

int main() {
    char caractere;

    printf("\n ======== INFORME UM CARACTERE ========\n");
    printf(" > ");
    scanf(" %c", &caractere);

    int ehletra = ehLetra(caractere);

    if (ehletra == 1) {
        printf(" > Eh uma letra");
    } else if (ehletra == 0) {
        printf(" > Nao eh uma letra");
    } else {
        printf(" #ERRO INESPERADO.");
    }

    return 0;
}

int ehLetra(char c) {
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
        return 1; // É uma letra
    } else {
        return 0; // Não é uma letra
    }
}