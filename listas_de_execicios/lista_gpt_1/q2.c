#include <stdio.h>
//Leia um número e diga se ele é par ou ímpar.
int main () {
    int num;
    int op;

    do {
    //entradad de valores
    printf("\n ----------------- IMPAR OU PAR? -----------------\n");    
    printf(" -> Numero: ");
    scanf("%i",&num);

    //comparação e exibição
    if (num % 2 == 0) {
        printf(" => Eh par!");
    }else if (num % 2 != 0) {
        printf(" => Eh impar!");
    } else {                        
        printf(" # ERRO: valor invalido!");
    }
    
    printf("\n\n");
    printf(" * Digite [0] para continuar: ");
    scanf("%i",&op);

    printf("\n--------------------------------------------------\n");
    } while (op == 0);

    if (op == 0) {
    printf("                                   * Saindo...");
    }

    return 0;
}
