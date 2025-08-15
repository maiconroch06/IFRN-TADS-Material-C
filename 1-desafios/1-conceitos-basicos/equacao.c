#include <stdio.h>
#include <math.h>
// Faça um programa em C que receba um valor real do usuário, representado por x para a seguinte equação f(x)=(x^2)+2x-5, e exiba o resultado de f(x).
int main(void) {
    float x, resultado;
    printf("\n ============ CALULADORA ============");
    printf("\n Equacao: f(x)=(x^2)+2x-5");

    printf("\n x pertence aos numeros reais, quem e x: ");
    scanf("%f",&x);

    resultado = pow(x,x) + 2 * x - 5;

    printf("\n ============ RESULTADO =============");
    printf("\n          f(%.2f) = %.2f", x, resultado);
    printf("\n ====================================");


    return 0;

    }

