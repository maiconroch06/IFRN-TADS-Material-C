#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Faça um procedimento que recebe uma matriz quadrada de ordem 10 preenchida de forma aleatória, realiza as trocas a seguir listadas e retornar a matriz alterada. 
- A linha 2 com a linha 8; 
- A coluna 4 com a coluna 10; 
- A diagonal principal com a secundária; 
- A linha 5 com a coluna 10.
*/
void realizarTrocas(int matriz[10][10]);
void imprimirMatriz(int matriz[10][10]);

int main() {
    int matriz[10][10];
    srand(time(NULL));

    // Preenchendo matriz com valores aleatórios de 0 a 99
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            matriz[i][j] = rand() % 100;

    printf(" Matriz original:\n");
    imprimirMatriz(matriz);

    realizarTrocas(matriz);

    printf("\n Matriz apos as trocas:\n");
    imprimirMatriz(matriz);

    return 0;
}

// Procedimento que realiza as trocas
void realizarTrocas(int matriz[10][10]) {
    int temp;

    // Troca linha 2 com linha 8
    for (int j = 0; j < 10; j++) {
        temp = matriz[1][j];
        matriz[1][j] = matriz[7][j];
        matriz[7][j] = temp;
    }

    // Troca coluna 4 com coluna 10
    for (int i = 0; i < 10; i++) {
        temp = matriz[i][3];
        matriz[i][3] = matriz[i][9];
        matriz[i][9] = temp;
    }

    // Troca diagonal principal com secundária
    for (int i = 0; i < 10; i++) {
        temp = matriz[i][i];
        matriz[i][i] = matriz[i][9 - i];
        matriz[i][9 - i] = temp;
    }

    // Troca linha 5 com coluna 10
    for (int i = 0; i < 10; i++) {
        temp = matriz[4][i];
        matriz[4][i] = matriz[i][9];
        matriz[i][9] = temp;
    }
}

// Função para imprimir a matriz
void imprimirMatriz(int matriz[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}
