#include <stdio.h>
#include <math.h>
// Faça um programa C, em que receba 3 numeros e exiba x1 e x2 da seguinte equação do 2º grau f(x)(ax^2)+bx+c.
int main(void) {
    float a,b,c,delta,x1,x2;

    printf("\n ============ CALULADORA ============");
    printf("\n Equacao: f(x)=(ax^2)+bx+c");
    
    printf("\n Informe a: ");
    scanf("%f", &a);

    printf("\n Informe b: ");
    scanf("%f", &b);
    
    printf("\n Informe c: ");
    scanf("%f", &c);
    
    delta = pow(b,b) - 4 * a * c;
    x1 = -b + pow(delta,2)/(2 * a);
    x2 = -b - pow(delta,2)/(2 * a);
    
    printf("\n ============ RESULTADO =============");
    printf("\n          x1: %.2f   x2:%.2f", x1, x2);
    printf("\n ====================================");

    return 0;
}




