#include <stdio.h>
#include <stdlib.h>
/*
Implemente um programa em linguagem C que leia os elementos inteiros de uma matriz quadrada de ordem informada pelo usuário e imprima em tela o valor do produto dos elementos de sua diagonal secundária.
*/
int main(){
    int tam_matriz;
    
    printf(" Informe o tamnho da matriz quadrada: ");
    scanf("%i",&tam_matriz);
    
    int matriz[tam_matriz][tam_matriz];
    
    printf("\n Preencha os valores da matriz:\n");
    for (int i = 0; i < tam_matriz; i++){
        for (int j = 0; j < tam_matriz; j++){
            printf(" [%02d][%02d] > ", i, j);
            scanf("%i",&matriz[i][j]);
        }
        printf("\n");
    }

    system("cls");
    
    printf("\n Matriz preenchida:\n");
    for (int i = 0; i < tam_matriz; i++){
        for (int j = 0; j < tam_matriz; j++){
            printf(" %i ", matriz[i][j]);
        }
        printf("\n");
    }
    
    int produto = 1;
    printf("\n Produto da diagonal secundaria: ");
    for (int i = 0; i < tam_matriz; i++){
        produto *= matriz[i][tam_matriz - 1 - i];
    }

    printf("%i", produto);

    return 0;
}