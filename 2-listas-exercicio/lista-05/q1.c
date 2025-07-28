#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Desenvolva um programa em linguagem C que leia os elementos inteiros de uma matriz quadrada 
de ordem 𝑛 e, em seguida, exiba em tela somente os seus elementos da diagonal principal. A ordem 
da matriz deve ser informada pelo usuário. Observação. Caso queira, os elementos da matriz podem 
ser gerados de forma aleatória.
*/
int main (void) {
    int linhas, colunas;

    printf(" =============== TAMANHO DA MATRIZ ===============\n");
    printf(" -> Quantidade de linhas: ");
    scanf("%i", &linhas);

    printf(" -> Quantidade de colunas: ");
    scanf("%i", &colunas);

    if (linhas > 1 && colunas > 1) {
        int matriz_quadrada[linhas][colunas];

        srand(time(NULL));
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                if (i != j) {
                    matriz_quadrada[i][j] = "-";
                } else if (i == j) {
                    matriz_quadrada[i][j] = rand() % 100;
                }
            }
        }

        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                printf(" %i ", &matriz_quadrada[linhas][colunas]);
            }
            printf("\n");
        }
    }
    
    return 0;
}