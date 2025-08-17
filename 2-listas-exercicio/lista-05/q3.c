#include <stdio.h>
#include <stdlib.h>
/*
Elabore um programa em linguagem C que leia os elementos inteiros de uma matriz quadrada de ordem informada pelo usuario. Em seguida o usuario tera a opcao de escolher entre exibir a soma de todos os elementos acima da diagonal principal ou a soma de todos os elementos abaixo da diagonal principal. 
*/
int main() {
    int tam_matriz;

    printf(" Informe o tamanho da matriz quadrada: ");
    scanf("%i", &tam_matriz);

    int matriz[tam_matriz][tam_matriz];

    // Leitura dos valores da matriz
    printf("\n Preencha os valores da matriz:\n");
    for (int i = 0; i < tam_matriz; i++) {
        for (int j = 0; j < tam_matriz; j++) {
            printf(" [%02d][%02d] > ", i, j);
            scanf("%i", &matriz[i][j]);
        }
        printf("\n");
    }

    system("cls");

    // Impressao da matriz preenchida
    printf("\n Matriz preenchida:\n");
    for (int i = 0; i < tam_matriz; i++) {
        for (int j = 0; j < tam_matriz; j++) {
            printf(" %3i ", matriz[i][j]);
        }
        printf("\n");
    }

    int opcao;
    printf("\n Deseja fazer a soma dos valores...");
    printf("\n [1] Acima da diagonal principal");
    printf("\n [2] Abaixo da diagonal principal");
    printf("\n > Opcao: ");
    scanf("%i", &opcao);

    int soma = 0;
    switch (opcao) {
        case 1:
            // Soma dos valores acima da diagonal principal
            for (int i = 0; i < tam_matriz; i++) {
                for (int j = i + 1; j < tam_matriz; j++) {
                    soma += matriz[i][j];
                }
            }
            printf("\n Soma dos valores acima da diagonal: %i\n", soma);
            break;

        case 2:
            // Soma dos valores abaixo da diagonal principal
            for (int i = 1; i < tam_matriz; i++) {
                for (int j = 0; j < i; j++) {
                    soma += matriz[i][j];
                }
            }
            printf("\n Soma dos valores abaixo da diagonal: %i\n", soma);
            break;

        default:
            printf("\n Opcao invalida!\n");
            break;
    }

    return 0;
}