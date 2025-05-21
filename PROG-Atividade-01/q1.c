#include <stdio.h>
#include <math.h>

int main(void) {
    float x,f;

    printf("\n<--------------------- EQUACIONE --------------------->\n");

    printf("\n      f(x) = ((5 * x) + 3) / (sqrt(pow(x,2) - 16))\n\n");

    printf(" Informe o valor de x (float): ");
    scanf("%f",&x);

    f = ((5 * x) + 3) / (sqrt(pow(x,2) - 16));

    if (x <= 4) {
        printf("\n #ERRO: x deve ser maior do que 4!");
    } else {
        printf("\n -> f(%.2f) = %2.f",x,f);
    }

    printf("\n\n_____________________________________________\n");

    return 0;
}