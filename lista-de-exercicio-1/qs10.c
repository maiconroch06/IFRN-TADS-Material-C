#include <stdio.h>
#include <math.h>

int main (void) {
    float s1, s2, s3, s, area, perimetro;

	printf("Infome o lado 1 (em metros) : ");
	scanf("%f", &s1);
	printf("Infome o lado 2 (em metros) : ");
	scanf("%f", &s2);
	printf("Infome o lado 3 (em metros) : ");
	scanf("%f", &s3);

	s = (s1 + s2 + s3) / 2;
	area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
	perimetro = s1 + s2 + s3;

	printf("\nPerimetro do triangulo: %.2f (m)\n", perimetro);
	printf("Area do triangulo: %.2f (m^2)", area);

	return 0;
}
