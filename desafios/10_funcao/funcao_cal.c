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
	float x,y,resultado;
    char op;

    printf(" ======= Calculadora =======\n");
    printf("  [1] - Adicao\n");
    printf("  [2] - Subtracao\n");
    printf("  [3] - Multiplicacao\n");
    printf("  [4] - Divisao\n");
    printf(" ===========================\n");

    printf("\n -> Escolha a operacao desejada: ");
    scanf("%c",&op);
        
    printf("\n -> Informe o primeiro numero: ");
    scanf("%f",&x);
    printf(" -> Informe o segundo numero: ");
    scanf("%f",&y);

    resultado = calulo(x,y,op);

    printf("\n -> %.1f %c %.1f = %.1f", x, op, y, resultado);

    return 0;
}