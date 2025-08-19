#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Implemente um programa em linguagem C que preenche de forma aleatória uma matriz quadrada de ordem TAM com números inteiros entre 0 e TAM0. Em seguida, cada linha da matriz deve ser ordenada de forma crescente. 
*/


int main(){
    const int TAM = 10;
    int matriz[TAM][TAM];
    
    // Preenchendo matriz
    srand(time(NULL));
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            matriz[i][j] = rand() % 101;
        }
    }
    
    printf("\n > Matriz antes:\n");
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            printf(" %i ", matriz[i][j]);
        }
        printf("\n");
    }
    
    // Ordenando linhas
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            for (int k = 0; k < TAM; k++){
                if (matriz[i][j] < matriz[i][k]){
                    int aux = matriz[i][j];
                    matriz[i][j] = matriz[i][k];
                    matriz[i][k] = aux;
                }
            }
        }
    }

    printf("\n > Matriz depois:\n");
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            printf(" %i ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}