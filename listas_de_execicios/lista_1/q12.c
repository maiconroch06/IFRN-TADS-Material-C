#include <stdio.h>

int main (void) {
    float queijo, presunto, rodela;
    int quant_hamb;

	printf("\n - - - > Informe a quantidade de hamburgueres: ");
	scanf("%d",&quant_hamb);

    queijo = quant_hamb * 2 * 0.05;
    presunto = quant_hamb * 0.05;
    rodela = quant_hamb * 0.1;

    printf("\n- Comprar queijo: %.2f kg\n", queijo);
    printf("- Comprar presunto: %.2f kg\n", presunto);
    printf("- Comprar rodela de hambuguer: %.2f kg", rodela);

	return 0;
}
