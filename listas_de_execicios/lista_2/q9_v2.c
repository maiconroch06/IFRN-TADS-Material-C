#include <stdio.h>
#include <math.h>

int main (void) {
	float a,b,c,x1,x2,dt;

	printf("- - - Considere a equacao quadratica dada por f(x): ax2 + bx + c = 0 - - -\n");
	printf(" -> Informe o valor de a: ");
	scanf("%f",&a);
	
    if (a == 0) {
        printf(" - - - Nao eh raiz! - - -");

    } else if (a != 0 ) {  
        printf(" -> Informe o valor de b: ");
	    scanf("%f",&b);

	    printf(" -> Informe o valor de c: ");
	    scanf("%f",&c);
        
        dt = (pow(b,2) - 4*a*c);

    } else if (dt < 0) {
        printf(" - - - Nao ha raizes reais! - - -");

    } else if (dt > 0) {    
        x1 = (-b + sqrt(dt))/(2*a);
        x2 = (-b - sqrt(dt))/(2*a);

        printf(" - - - RAIZ DA EQUACAO - - -\n");
        printf(" - - - Valor de x1: %.2f - - -\n",x1);
        printf("- - - Valor de x2: %.2f - - - ",x2);
    }
	return 0;
}
