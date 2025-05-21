#include <stdio.h>

int main (void) {
    float n1, n2, n3;
	
	printf(" - - - > Informe suas notas entre 0 e 100 < - - -");

	printf(" - -> Nota 1: ");
	scanf("%f", &n1);
    printf(" - -> Nota 2: ");
	scanf("%f", &n2);
	printf(" - -> Nota 3: ");
	scanf("%f", &n3);

	printf("\n- - - > Sua nota: %.1f < - - -", (n1 + n2 + n3) / 3);

    return 0;
}
