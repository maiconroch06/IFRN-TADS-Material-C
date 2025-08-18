#include <stdio.h>
#include <time.h>
#include <stdlib.h> 
/*
Crie um programa em linguagem C que gera duas matrizes 𝐴 e 𝐵 de número reais de mesma dimensão, que devem ser preenchidas randomicamente com números entre -5 e 5. O programa deve calcular a matriz 𝐶 = 𝐴 − 𝐵 e exibir em tela os elementos da matriz 𝐶. A dimensão das matrizes (número de linhas e colunas) deve ser informada pelo usuário.
*/
int main() {
    int tam; 

    printf("\n > Informe o tamanho das matrizes: ");
    scanf("%i",&tam); 

    float A[tam][tam];
    float B[tam][tam];
    float C[tam][tam]; 

    srand(time(NULL));
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            A[i][j] = ((float)rand() / RAND_MAX) * 10.0 - 5.0;
            B[i][j] = ((float)rand() / RAND_MAX) * 10.0 - 5.0;
        }
    }


    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    } 

    printf("\n Matriz A:\n");
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf(" %.2f ", A[i][j]);
        }
    printf("\n");
    } 

    printf("\n Matriz B:\n");
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf(" %.2f ", B[i][j]);
        }
    printf("\n");
    } 

    printf("\n Matriz C:\n");
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf(" %.2f ", C[i][j]);
        }
    printf("\n");
    } 
    return 0;
}