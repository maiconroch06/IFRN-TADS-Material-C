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

int main (void) {
	float x, y, resultado;
    char op;

    printf(" =========== Calculadora ===========\n");
    printf(" [+] - Adicao        [-] - Subtracao\n");
    printf(" [*] - Multiplicacao [/] - Divisao\n");
    printf(" ===================================\n\n");

    printf(" -> Operacao: ");
    scanf("%c",&op);
    printf(" -> Numero 1: ");
    scanf("%f",&x);
    printf(" -> Numero 2: ");
    scanf("%f",&y);

    resultado = calulo(x,y,op);

    printf("\n ============ RESULTADO ============\n");
    printf("       -- %.1f %c %.1f = %.1f --", x, op, y, resultado);
    printf("\n ===================================\n");

    return 0;
}