#include <stdio.h>
/*
Crie um programa em linguagem C que leia do usuário um vetor de inteiros de 10 elementos (sem restrições). Em seguida, o seu programa deve retirar todos os valores nulos ou negativos do vetor que foram informados pelo usuário. Imprima em tela o vetor após a retirada dos números indesejados, nulos e negativos. Veja exemplo no pdf.
*/
int main(){
    int vetor[10];

    printf(" > Informe um numero inteiro:\n");
    for (int i = 0; i < 10; i++){
        printf(" %02d > ", i + 1);
        scanf("%i",&vetor[i]);
    }

    // Impressão antes da troca de posições
    printf(" Vetor de Entrada: |");
    for (int i = 0; i < 10; i++){
        printf(" %i ", vetor[i]);
        printf("|");
    }
    
    // Processo de troca de posições
    for (int i = 0; i < 10; i++){
        for (int j = i; j < 10; j++){
            if (vetor[i] <= 0){
                int aux = vetor[i];
                if (vetor[j] > 0){
                    vetor[i] = vetor[j];
                    vetor[j] = aux;
                }
            }
        }
    }
            
            
    // Impressão pos troca de posições
    printf("\n Vetor de Saida:   |");
    for (int i = 0; i < 10; i++){
        if (vetor[i] > 0){
            printf(" %i ", vetor[i]);
            if (i > 0){
                printf("|");
            } else {
                printf("|");
            }
            
        }
    }

    return 0;
}