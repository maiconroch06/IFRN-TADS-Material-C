//Escreva um programa que leia dois números inteiros e exiba o maior deles.
#include <stdio.h>

int main () {
    int num[1];
    int op;

    do {
    //entradad de valores
    printf("\n ------------ COMPARE DOIS NUMEROS ------------\n");    
    printf(" -> Numero 1: ");
    scanf("%i",&num[0]);
    printf(" -> Numero 2: ");
    scanf("%i",&num[1]);

    //comparação e exibição
    if (num[0] > num[1]) {
        printf(" => %i eh maior do que %i",num[0],num[1]);
    }else if (num[1] > num[0]) {
        printf(" => %i eh maior do que %i",num[1],num[0]);
    }else if (num[1] == num[0]) {
        printf(" => Os numeros sao iguais!");    
    } else {                        
        printf(" # ERRO: valores invalidos!");
    }
    
    printf("\n\n");
    printf(" * Digite [0] para continuar: ");
    scanf("%i",&op);

    printf("\n-----------------------------------------------\n");
    } while (op == 0);

    if (op == 0) {
    printf("                                   * Saindo...");
    }

    return 0;
}





/*

Leia uma temperatura em Celsius e converta para Fahrenheit.



*/