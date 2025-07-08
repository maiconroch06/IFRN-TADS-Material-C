//Leia uma matriz 3x3 e exiba a soma da diagonal principal.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 3
#define COLUNAS 3

int main (void) {
    int matriz[LINHAS][COLUNAS];
    int som = 0;

    srand(time(NULL));
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            matriz[i][j] = 10 + rand() % 90;
            printf("  %i  ", matriz[i][j]);

            if (i == j)
            {
                som += matriz[i][j];
            }
        }
        printf("\n");
    }

    // exibição da matriz


    printf("\n Soma dos valores da diagonal: %i", som);

    return 0;
}