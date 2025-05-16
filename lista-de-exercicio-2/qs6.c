#include <stdio.h>

int main (void) {
    float compra,venda;

    printf(" - - > Informe o valor da compra do produto: ");
    scanf("%f",&compra);

    if (compra < 20 && compra > 0) {
        venda = compra + (compra * 0.45);
        printf(" - O valor da eh de R$%.2f", venda);

    } else if (compra >= 20) {
        venda = compra + (compra * 0.3);
        printf(" - O valor da eh de R$%.2f", venda);

    } else {
        printf(" --- ERRO: Valor fora do escopo ---");
    }
	return 0;
}
