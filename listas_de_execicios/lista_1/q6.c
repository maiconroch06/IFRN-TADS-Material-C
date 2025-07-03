#include <stdio.h>

int main(void) {
	int p, m, g;

	printf("Informe quantidades de camisetas pequenas: ");
	scanf("%i", &p);

	printf("Informe quantidades de camisetas medias: ");
	scanf("%i", &m);
	
	printf("Informe quantidades de camisetas grandes: ");
	scanf("%i", &g);

	printf("\nO valor total das camisetas sera de R$%i,00",15 * p + 20 * m + 25 * g);

	return 0;
}
