#include <stdio.h>
#include <math.h>
//faorial
int maiorN(int n1[], int tamanho) {
    int maior;
    maior = n1[0];
    
    for (int i = 0; i < tamanho; i++)
    {
        if (i > n1[i])
        {
            maior = n1[i];
        }
        
    }
    return maior;
    
}

#define TAM 10

int main (void) {
    int op;

    while (op) {
        int num[] = {0, 24, 11, 23, 15};
        int tamanho = sizeof(num)/sizeof(int);

        printf("\n ============== MAIOR NUMERO NO VETOR ==============\n");
        /*for (int i = 0; i < TAM; i++) {
        printf(" -> Informe um numero: ");
        scanf("%i",&num[i]);
        }*/

        printf(" MAIOR VALOR: %i", maiorN(num, tamanho));

        printf("\n ================================================\n");
        printf("\n -> Digite [0] para sair: ");
        scanf("%i",&op);
    }

    printf("\n ================================================\n");
    printf("                                saindo...........");


    return 0;
}