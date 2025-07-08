//Leia uma temperatura em Celsius e converta para Fahrenheit
#include <stdio.h>

int main (void) {
    float celsius;
	
	printf("Informe a temperatura em C para converter em F: ");
	scanf("%f", &celsius);

	printf("\n- - > Temperatura em F: %.2f < - -", (celsius * 1.8) + 32);
	
	return 0;
}