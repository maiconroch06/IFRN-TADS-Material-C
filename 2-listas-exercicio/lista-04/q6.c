/*
    Faça um programa em linguagem C que leia um vetor de 10 elementos. Logo após, encontre e exiba 
    o menor elemento e a sua posição (índice) no vetor. Por fim, o programa deve dividir todos os 
    elementos do vetor pelo seu menor elemento e mostrar o vetor modificado após a realização dos 
    cálculos.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main(void) {
    float vetor_numeros[TAM];
    int divisor_menor;
    int posicao;

    srand(time(NULL));
    for (int i = 0; i < TAM; i++) {
        vetor_numeros[i] = rand() % 100;
    }


    for (int i = 0; i < TAM; i++) {
        if (vetor_numeros[i] < divisor_menor) {
            divisor_menor = vetor_numeros[i];
            posicao = i;
        }
    }

    if (divisor_menor == 0) {
        printf(" # ERRO: divisao por 0");
        return 1;
    }

    printf(" MENOR NUMERO: %i\n POSICAO: %i", divisor_menor, posicao);

    printf("\n\n SEQUENCIA ANTES DA DIVISAO:");
    for (int i = 0; i < TAM; i++) {
        printf(" %.0f", vetor_numeros[i]);
    }
    
    for (int i = 0; i < TAM; i++) {
        vetor_numeros[i] =  vetor_numeros[i] / divisor_menor;
    }

    printf("\n SEQUENCIA DEPOIS DA DIVISAO:");
    for (int i = 0; i < TAM; i++) {
        printf(" %.1f", vetor_numeros[i]);
    }

    return 0;
}