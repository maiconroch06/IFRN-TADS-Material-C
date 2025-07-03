#include <stdio.h>

int main (void) {
    float temp;
	
	printf("Informe a temperatura em F para converter em C: ");
	scanf("%f", &temp);

	printf("\n- - > Temperatura em C: %.2f < - -", (temp - 32) / 1.8);
	
	return 0;
}
