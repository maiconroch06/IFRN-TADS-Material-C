#include <stdio.h>

int main (void) {
    float renda, comic;

	printf(" - - - > Informe seu salario fixo (R$): ");
	scanf("%f", &renda);
	printf(" - - - > Informe o valor de suas vendas (R$): ");
	scanf("%f", &comic);

	printf("\n - Comissao sobre vendas: R$%.2f", comic * 0.05);
	printf("\n - Salario final: R$%.2f", renda + (comic * 0.05));
	
	return 0;
}
