#include <stdio.h>
/*
O 𝑚𝑖𝑛𝑚𝑎𝑥 de uma matriz corresponde ao menor elemento da linha em que se encontra o maior elemento dessa matriz. Sabendo disso, crie uma função que recebe como parâmetro uma matriz quadrada de ordem 5 e retorna o valor de seu 𝑚𝑖𝑛𝑚𝑎𝑥 e a sua posição por meio da passagem de parâmetros por referência.
*/
void encontrarMinMax(int matriz[5][5], int *minmax, int *linha, int *coluna);

int main() {
    int matriz[5][5] = {
        {3, 8, 1, 4, 9},
        {7, 2, 5, 6, 0},
        {4, 3, 9, 1, 2},
        {6, 7, 8, 5, 3},
        {1, 2, 3, 4, 5}
    };
    int minmax, linha, coluna;
    
    printf(" Matriz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf(" %i ", matriz[i][j]);
        }
        printf("\n");
    }

    encontrarMinMax(matriz, &minmax, &linha, &coluna);

    printf("\n Minmax: %d\n", minmax);
    printf(" Posicao: linha %d, coluna %d\n", linha, coluna);

    return 0;
}

void encontrarMinMax(int matriz[5][5], int *minmax, int *linha, int *coluna) {
    int maior = matriz[0][0];
    int linhaMaior = 0;

    // Encontrar o maior elemento e sua linha
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linhaMaior = i;
            }
        }
    }

    // Encontrar o menor elemento na linha do maior
    *minmax = matriz[linhaMaior][0];
    *linha = linhaMaior;
    *coluna = 0;

    for (int j = 1; j < 5; j++) {
        if (matriz[linhaMaior][j] < *minmax) {
            *minmax = matriz[linhaMaior][j];
            *coluna = j;
        }
    }
}
