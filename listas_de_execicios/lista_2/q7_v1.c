#include <stdio.h>

int main (void) {
    int sx;
    float h;

    printf(" - - - Saiba seu peso ideal - - -");
    printf("\n -> Informe seu sexo (Homen se for 1 ou Mulher se for 2): ");
    scanf("%i",&sx);
    printf(" -> Informe sua altura (m): ");
    scanf("%f",&h);

    if (sx == 1) {
        printf("\n == Seu peso ideal eh %.2f kg", (72.7 * h) - 58);

    } else if (sx == 2){
        printf("\n == Seu peso ideal eh %.2f kg", (62.1 * h) - 44.7);

    } else {
        printf(" --- ERRO: Adicione 1 ou 2 para representar seu sexo ---");
    }
	return 0;
}
