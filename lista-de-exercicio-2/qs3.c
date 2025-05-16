#include <stdio.h>

int main (void) {
    float l1,l2,l3;

    printf(" - - - Descubra qual tipo de triangulo eh! - - - ");
    printf("\n -> Informe Lado 1: ");
    scanf("%f",&l1);
    printf(" -> Informe Lado 2: ");
    scanf("%f",&l2);
    printf(" -> Informe Lado 3: ");
    scanf("%f",&l3);

    if ((l1 == l2) == l3) {
        printf("\n - sim eh um triangulo equilatero!");

    } else if (l1 == l2 || l1 == l3 || l2 == l3) { 
        printf("\n - sim eh um triangulo isosceles!");

    } else {
        printf("\n - sim eh um escaleno!");

    }

    return 0;
}
