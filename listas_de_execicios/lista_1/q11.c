#include <stdio.h>

int main (void) {
    float v, t, pa, pg, ra, rg, ca, cg;

	printf("\n- > Informe a velocidade media percorrida (KM/H): ");
	scanf("%f", &v);
	printf("- > Informe o tempo estimado para viagem (H): ");
	scanf("%f", &t);
	printf("- > Informe o preco do alcool (R$/L): ");
	scanf("%f", &pa);
	printf("- > Informe o preco da gasolina (R$/L): ");
	scanf("%f", &pg);
	printf("- > Informe o rendimento do carro usando gasolina (R$/L): ");
	scanf("%f", &rg);
	
    ra = rg * 0.7;
    cg = ((v * t) / rg) * pg;
    ca = ((v * t) / ra) * pa;

    printf("\n- O custo da viagem utilizando gasolina: R$%.2f", cg);
    printf("\n- O custo da viagem utilizando alcool: R$%.2f", ca);

	return 0;
}
