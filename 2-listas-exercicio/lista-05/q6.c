#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Crie um programa em linguagem C que preenche uma matriz de ordem 5 com números inteiros informados pelo usuário. Além disso, deve verificar quais números da matriz são primos. Caso o número seja primo, ele deve ser substituído pelo número zero.
*/
int main() {
    const int TAM = 5;
    int matriz[TAM][TAM];

    srand(time(NULL));
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            matriz[i][j] = rand() % 101;
        }
    }

    printf("\n > Matriz antes:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf(" %i ", matriz[i][j]);
        }
        printf("\n");
    }

    // Ira contar quantos divisores terá para definir se é ou não primo
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            int Eh_primo = 1;
            if (matriz[i][j] < 2) {
                Eh_primo = 0;
            } else {
                for (int k = 2; k < matriz[i][j]; k++) { // Se algum numero entre 1 e matriz[i][j] divide matriz[i][j] então logo não será primo.
                    if (matriz[i][j] % k == 0 || matriz[i][j] == 1) {
                        Eh_primo = 0; // Numero 0 esta dizendo que não Eh_primo
                        break;
                    }
                }
            }
            
            if (Eh_primo == 1) {
                matriz[i][j] = 0;
            }
        }
    }

    printf("\n > Matriz depois:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf(" %i ", matriz[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}