#include <stdio.h>

int main(void) {

    float x;
    float result;

    printf("\n Esta e a funcao f(x)=(x^2) + 2x - 5 ");

    printf("\n x pertence aos numeros reais, quem e x: ");
    scanf("%f",&x);

    result = x*x + 2*x - 5;

    printf("\n f(%.2f) = %.2f",x,result);
    //printf("f(x) = %f",result);

    return 0;

    }

