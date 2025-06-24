#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//gerar uma matriz 10x10, dois jogadores que descobrir as posições dos numeros 1 dentro da matriz que gera aleatorio
#define N_LINHAS 10
#define N_COLUNAS 10

int main(void) {
    int matriz[N_LINHAS][N_COLUNAS] = {0};
    //int cont_tentativas[2] = {0};

    //gerar em 10 posições aleatorias de 0 a 9
    srand(time(NULL));
    int linha_aleatoria[10] = 1 + rand() % 1;
        //adiciona o numero na posição
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                matriz[i][j] = (1 + rand() % 1);
            }
            
        }

    //só para exibir matriz
    for (int i = 0; i < N_LINHAS; i++){
        for (int j = 0; j < N_COLUNAS; j++){
            printf("   %i  ", matriz[i][j]);
        }
        printf("\n\n");
    }
    

    return 0;
}