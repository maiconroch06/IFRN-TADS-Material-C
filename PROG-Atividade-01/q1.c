#include <stdio.h>
#include <math.h>

int main(void) {
    int x,f;

    printf("\n______________Equacao______________\n");
    printf(" f(x) = ((5 * x) + 3 ) / ");
    printf("Informe o valor de x (int): ");
    scanf("%i"&x);

    f = ((5*x) + 3) / (sqrt(pow(x)) - sqrt(16));

    return 0;
}