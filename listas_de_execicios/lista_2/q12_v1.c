#include <stdio.h>
#include <math.h>

int main (void) {
	float km;
    char tp;

	printf(" - - - Descubra o consumo estimado de combustivel pelo seu tipo de carro!!! - - -\n\n");

	printf(" -> Informe o tipo do seu carro (A, B ou C): ");
    scanf("%c",&tp);

    printf(" -> Informe os quilometros rodados (km): ");
	scanf("%f",&km);

    switch (tp) {
        case 'a':
            printf("O consumo do seu carro foi de %.2f",km / 12);
            break;

        case 'b':
            printf("O consumo do seu carro foi de %.2f",km / 9);
            break;

        case 'c':
            printf("O consumo do seu carro foi de %.2f",km / 8);
            break;

        default:
            printf("ERRO: O tipo do seu carro nao esta no sistema");
            break;
    }
     return 0;
}