#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Elabore um programa em linguagem C que preencha um vetor de 100 números inteiros entre 0 e 200. Em seguida, o usuário deve informar um valor e o seu programa deve verificar se o valor informado pode ser encontrado no vetor. Em caso positivo, o programa deve exibir quantas vezes existe o número no vetor e em quais posições (índices).
*/
int main(){
    int vetor[100];

    srand(time(NULL));
    for (int i = 0; i < 100; i++){
        vetor[i] = rand() % 201;
    }
    
    printf(" Vetor de 100 numeros de 0-200:\n");
    for (int i = 0; i < 100; i++){
        printf(" %3.d", vetor[i]);
        if (i != 0 && i % 10 == 0){
            printf("\n");
        }
    }
    
    return 0;
}