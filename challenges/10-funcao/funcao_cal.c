#include <stdio.h>

float calulo(float num1, float num2, char operador) {
    switch (operador) {
        case '+':
            return num1 + num2;
            break;
        case '-':
            return num1 - num2;
            break;
        case '*':
            return num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                return num1 / num2;
            } else {
                printf("\n #ERRO: divisao por zero");
            }
            break;
    default:
            printf("\n #ERRO: valores fora do escopo");
        break;
    }
}

typedef struct Calculadora {
    float x, y, resultado;
    char op;
    int continuar;
};


int main (void) {

    struct Calculadora calcula;

    do {
    printf(" =========== Calculadora ===========\n");
    printf(" [+] - Adicao        [-] - Subtracao\n");
    printf(" [*] - Multiplicacao [/] - Divisao\n");
    printf(" ===================================\n\n");

    printf(" -> Operacao: ");
    scanf("%c",&calcula.op);
    printf(" -> Numero 1: ");
    scanf("%f",&calcula.x);
    printf(" -> Numero 2: ");
    scanf("%f",&calcula.y);

    calcula.resultado = calulo(calcula.x, calcula.y, calcula.op);

    printf("\n ============ RESULTADO ============\n");
    printf("       -- %.1f %c %.1f = %.1f --", calcula.x, calcula.y, calcula.op, calcula.resultado);
    printf("\n ===================================\n");

    
    printf(" -> Digite [0] para sair: ");
    scanf("%i", &calcula.continuar);

    } while (calcula.continuar != 0);
    

    return 0;
}