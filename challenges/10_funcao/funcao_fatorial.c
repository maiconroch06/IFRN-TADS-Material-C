#include <stdio.h>
#include <math.h>
//faorial
int fatorial(int n1) {
    int resultado = 1;
    
    for (int i = 0; i < n1; i++) {
        resultado *= n1 - i;
    }
    return resultado;
}

int main (void) {
    int num1;
    int op;

    while (op != 0) {
        printf("\n ============== CALCULE O FATORIAL ==============\n");
        printf(" -> Informe um numero: ");
        scanf("%i",&num1);

        if (num1 >= 0) {
            int f = fatorial(num1);
            printf(" -> RESULTADO: %i",f);
        } else {
            printf(" # ERRO: numero deve ser maior ou igual a 0!");
            continue;
        }

        printf("\n ================================================\n");
        printf("\n -> Digite [0] para sair: ");
        scanf("%i",&op);
    }

    printf("\n ================================================\n");
    printf("                                saindo...........");


    return 0;
}