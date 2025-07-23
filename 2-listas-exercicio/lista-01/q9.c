#include <stdio.h>

int main (void) {
    float conta, manoel;
    int jose, joao;

	printf("Informe o valor da conta: ");
	scanf("%f", &conta);

    jose = conta / 3;
    joao = jose;
    manoel = conta - (jose *2);

	printf("\nConta de Jose: R$%i,00\n", jose);
    printf("Conta de Joao: R$%i,00\n", joao);
	printf("Conta de Manoel: R$%.2f", manoel);

	return 0;
}
