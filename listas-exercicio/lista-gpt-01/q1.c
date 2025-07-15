#include <stdio.h>
//Escreva um programa que leia dois números inteiros e exiba o maior deles.
int main () {
    int num[2];
    int op;

    do {
    //inicio
    printf("\n ------------ COMPARE DOIS NUMEROS ------------\n");    
    //entrada de valores
    for (int i = 0; i <= 1; i++) {
        printf(" -> Numero %i: ", i + 1);
        scanf("%i",&num[i]);
    }

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

    printf("                                   * Saindo...");

    return 0;
}
