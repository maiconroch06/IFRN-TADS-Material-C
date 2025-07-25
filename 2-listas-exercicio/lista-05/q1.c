#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Desenvolva um programa em linguagem C que leia os elementos inteiros de uma matriz quadrada 
    de ordem 𝑛 e, em seguida, exiba em tela somente os seus elementos da diagonal principal. A ordem 
    da matriz deve ser informada pelo usuário. Observação. Caso queira, os elementos da matriz podem 
    ser gerados de forma aleatória.
*/

int exibicao_escolha (int);
int matriz_quadrada (int);

int main (void) {
    

    matriz_quadrada(tamanho_matriz);


    return 0;
}

int matriz_quadrada (int tam) {
    int matriz[tam][tam];
    // definir o tamanho da matriz
    srand(time(NULL));
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            matriz[i][j] = rand() % 100;
        }
    }

    return ;
}

int exibicao_escolha (int) 
int tamanho_matriz;
    printf("============================\n");
    printf(" [1] - 2x2");
    printf(" [2] - 4x4");
    printf(" [3] - 6x6");
    printf(" [4] - 8x8");
    printf(" [5] - 10x10");
    printf(" -> Escolha sua matriz: ");
    scanf("%i", &tamanho_matriz);