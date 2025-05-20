#include <stdio.h>

int main (void) {
    float salario,sal_desc;

    printf("- - - Informe seu salario para saber o descondo do INSS - - -");
    printf("\n -> Salario: ");
    scanf("%f",&salario);

    if (salario <= 600) {
        printf("\n - Seu salario: R$%.2f", salario);
        printf("\n - Seu desconto: Isento");

    } else if (salario >= 600 && salario <= 1200) {
        sal_desc = (salario * 0.2) + salario;
        printf("\n - Seu salario: R$%.2f", salario);
        printf("\n - Valor do desconto: R$%.2f", sal_desc - salario);
        printf("\n - Desconto de 20%%");
        printf("\n - Total: R$%.2f", sal_desc);

    } else if (salario > 1200 && salario <= 2000) {
        sal_desc = (salario * 0.25) + salario;
        printf("\n - Seu salario: R$%.2f", salario);
        printf("\n - Valor do desconto: R$%.2f", sal_desc - salario);
        printf("\n - Desconto de 25%%");
        printf("\n - Total: R$%.2f", sal_desc);

    } else if (salario > 2000) {
        sal_desc = (salario * 0.30) + salario;
        printf("\n - Seu salario: R$%.2f", salario);
        printf("\n - Valor do desconto: R$%.2f", sal_desc - salario);
        printf("\n - Desconto de 30%%");
        printf("\n - Total: R$%.2f", sal_desc);

    } else {
        printf("\n - ERRO: Valor fora do escopo!");
    }
	return 0;
}
