#include <stdio.h>

int main (void) {
    float l1,l2,l3;

    printf(" -> Informe Lado 1: ");
    scanf("%f",&l1);
    printf("\n -> Informe Lado 2: ");
    scanf("%f",&l2);
    printf("\n -> Informe Lado 3: ");
    scanf("%f",&l3);

    if ((l1 < l2 + l3 && l2 < l1 + l3) && l3 <  l1 + l2) {
        printf("\n - sim eh um triangulo!");

    }  else { 
        printf("\n - Nao eh um triangulo");
    }

	return 0;
}
