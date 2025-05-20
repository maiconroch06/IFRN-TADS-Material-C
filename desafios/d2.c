//(ax^2)+bx+c=0
//informe a, b e c.
//diga quem é as raizes de a, b e c
//biblioteca <math.h> para calcular potencias.
//operadores logicos e 

#include <stdio.h>

int main(void) {
    float a,b,c,x,op,dt,x1,x2;

    printf("\n Informe a: ");
    scanf("%f", &a);
    printf("\n Informe b: ");
    scanf("%f", &b);
    printf("\n Informe c: ");
    scanf("%f", &c);
    
//  op = a*(x*x) + b*x + c;
    dt = b*b - 4*a*c;
    x1 = (-b + (dt*1/2))/(2*a);
    x2 = (-b - (dt*1/2))/(2*a);

    printf("\n x1: %.2f, x2:%.2f",x1,x2);

    return 0;
}




