#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 10
#define COLUNAS 10

int main(void)
{

    srand(time(NULL));

    int matriz[LINHAS][COLUNAS] = {0};

    // abrir gaveta e ver se tem alguem igual se sim alterar por outro valor aleatorio

    // exibindo O tabuleiro
    for (int i = 0; i < COLUNAS; i++)
    {
        for (int j = 0; j < LINHAS; j++)
        {
            printf(" %i ", matriz[i][j]);
        }
        printf("\n");
    }

    // 5 é o numero que queremos quantas vezes apareça
    int linhas_aleatorias[5];
    int colunas_aleatorias[5];

    for (int i = 0; i < 5; i++)
    {
        linhas_aleatorias[i] = (rand() % 10);
        colunas_aleatorias[i] = (rand() % 10);
    }

    printf("\n\n Disposicao de linhas: ");
    // 5 é o numero que queremos quantas vezes apareça
    for (int i = 0; i < 5; i++)
    {
        printf(" %i ", linhas_aleatorias[i]);
    }

    printf("\n\n Disposicao de colunas: ");
    for (int i = 0; i < 5; i++)
    {
        printf(" %i ", colunas_aleatorias[i]);
    }

    return 0;
}