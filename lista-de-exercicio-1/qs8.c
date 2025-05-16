#include <stdio.h>

int main (void) {
    int r1, r5, r10, r50, r100;

	printf(" \n - - - > Contador de Dinheiro < - - -\n");

	printf(" - Cedulas de R$1: ");
	scanf("%i" , &r1);
	printf(" - Cedulas de R$5: ");
	scanf("%i", &r5);
	printf(" - Cedulas de R$10: ");
	scanf("%i", &r10);
	printf(" - Cedulas de R$50: ");
	scanf("%i", &r50);
	printf(" - Cedulas de R$100: ");
	scanf("%i", &r100);

	printf("\n - > Total: R$%i,00", r1 + r5 * 5 + r10 * 10 + r50 * 50 + r100 * 100);

	return 0;
}
