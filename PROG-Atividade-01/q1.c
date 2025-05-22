#include <stdio.h>
#include <math.h>

int main(void) {
    float x;

    printf("\n<--------------------- EQUACIONE --------------------->\n");
    printf("\n      f(x) = ((5 * x) + 3) / (sqrt(x * x - 16))\n");

    printf("\n<--------------------- INFORME (X) -------------------->\n\n");
    printf(" -> x: ");
    scanf("%f", &x);

    if (x < -4 || x > 4) {
        float f = ((5 * x) + 3) / sqrt(x * x - 16);
        printf("\n______________________ RESPOSTA ______________________\n");
        printf("\n                    f(%.2f) = %.2f", x, f);
    } else if (x == -4 || x == 4) {
        printf("\n_______________________ #ERRO! _______________________\n");
        printf("\n x = %.2f causa divisao por zero!", x);
    } else {
        printf("\n_______________________ #ERRO! _______________________\n");
        printf("\n x = %.2f causa raiz de numero negativo!", x);
    }

    printf("\n______________________________________________________\n");
    return 0;
}
