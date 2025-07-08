#include <stdio.h>
#include <math.h>

int main (void) {
	float a,b,c,x1,x2,dt;

	printf("- - - Considere a equação quadratica dada por f(x): ax2 + bx + c = 0 - - - ");
	printf("\n -> Informe o valor de a: ");
    scanf("%f", &a);
	printf(" -> Informe o valor de b: ");
	scanf("%f", &b);
    printf(" -> Informe o valor de c: ");
	scanf("%f", &c);

	dt = (b*b) - (4*a*c);

    if (dt > 0) {
        x1 = (-b + sqrt(dt)) / (2*a);
        x2 = (-b - sqrt(dt)) / (2*a);
        printf(" - - - Valor de x1: %.2f - - -\n - - - Valor de x2: %.2f - - - ",x1, x2);

    } else if (dt == 0) {
        x1 = -b / (2 * a);
        printf(" - - - A equacao possui uma unica raiz real em que x1: %.0f", x1);

    } else {
        printf(" - - - Nao ha raizes reais! - - -");
    }
	return 0;
}
