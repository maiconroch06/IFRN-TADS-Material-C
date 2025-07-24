/*
    Desenvolva um programa em linguagem C que deve armazenar 10 números digitados pelo usuário. 
    Os valores digitados devem ser armazenados em dois vetores: um que armazena somente os 
    números pares, e outro que armazena somente os números ímpares. No final, os valores dos dois 
    vetores devem ser exibidos na tela. Observação. As posições dos vetores que não receberem valores 
    devem armazenar o valor zero.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main(void) {
    int vetor_numeros[TAM];

    srand(time(NULL));
    for (int i = 0; i < TAM; i++) {
        vetor_numeros[i] = 10 + rand() % 90;
    }

    int vetor_par[TAM] = {0};
    int vetor_imp[TAM] = {0};
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (vetor_numeros[i] % 2 == 0) {
                vetor_par[i] = vetor_numeros[i];
            } else {
                vetor_imp[i] = vetor_numeros[i];
            }
        }
    }

    printf(" SEQUENCIA ORIGINAL:");
    for (int i = 0; i < TAM; i++) {
        printf(" %i", vetor_numeros[i]);
    }

    printf("\n SEQUENCIA PAR:     ");
    for (int i = 0; i < TAM; i++) {
        printf(" %i", vetor_par[i]);
    }
    
    printf("\n SEQUENCIA IMPAR:   ");
    for (int i = 0; i < TAM; i++) {
        printf(" %i", vetor_imp[i]);
    }

    return 0;
}