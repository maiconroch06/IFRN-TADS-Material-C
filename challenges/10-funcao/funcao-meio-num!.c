#include <stdio.h>
#include <math.h>
//comparar dois numeros 
int compara_valores(float,float)

#define TAM 2

int main (void) {
    int op = 1;

    while (op) {
        float num1,num2;
        printf("\n ============== CALCULE QUEM EH MAIOR ==============\n");
        printf(" -> Informe num1: ");
        scanf("%f",&num1);

        printf(" -> Informe num2: ");
        scanf("%f",&num2);
        

        int resultado = compara_valores(num1,num2);

        switch (resultado)
        {
        case 1:
            printf(" %.2f > %.2f ",num1, num2);
            break;

        case 0:
            printf(" %.2f == %.2f ",num1, num2);
            break;

        case -1:
            printf(" %.2f < %.2f ",num1, num2);
            break;
        }

        printf("\n ===================================================\n");
        printf("\n -> Digite [0] para sair: ");
        scanf("%i",&op);
    }

    printf("\n =======================================================\n");
    printf("                                      saindo...........");


    return 0;
}

int compara_valores(float n1, float n2) {
    if (n1 > n2) {
        return 1;
    } else if (n1 < n2) {
        return -1;
    } else {
        return 0;
    }
}