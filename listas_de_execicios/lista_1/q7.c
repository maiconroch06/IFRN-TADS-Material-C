#include <stdio.h>
#include <math.h>

int main (void) {
    float x, y, area_parede, tinta_usada, quant_latas;
	
	printf(" - - - > Calcule Quantos Baldes de Tinta Usar < - - -\n");

	printf(" - Informe a largura da parede (m): ");
	scanf("%f",  &x);

	printf(" - Informe a altura da parede (m): ");
	scanf("%f",  &y);

    area_parede = x * y;
    tinta_usada = area_parede * 0.3;
    quant_latas = tinta_usada / 2;

	printf("\nVoce ira usar %.0f latas de tinta", ceil(quant_latas));

	return 0;
}
