#include <stdio.h>
//faorial
int fatorial(int n1) {
    int resultado = 1;
    
    for (int i = 1; i <= n1; i++) {
        resultado = i;
    }
    return resultado;
}

int main (void) {
    int op = 1;

    while (op) {
        int n;

        printf("\n ============== CALCULE O FATORIAL ==============\n");
        printf(" -> Informe um numero: ");
        scanf("%i",&n);

        if (n >= 0) {
            int f = fatorial(n);
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