#include <stdio.h>
#include <ctype.h>

int main (void) {
	float km,consumo_litros;
    char tipo_carro;

    printf("\n\n==================================================================================\n");

	printf(" - - - Descubra o consumo estimado de combustivel pelo seu tipo de carro!!! - - -\n\n");
	
    printf(" -> Informe o tipo do seu carro (A, B ou C): ");
    scanf("%c",&tipo_carro);
    printf(" -> Informe os quilometros rodados (km): ");
	scanf("%f",&km);

    switch (toupper(tipo_carro)) {
        case 'A':
            consumo_litros = km / 12;
        break;

        case 'B':
            consumo_litros = km / 9;
        break;

        case 'C':
            consumo_litros = km / 8;
		break;

        default: 
            printf("\n              #ERRO: o tipo do seu carro nao esta no sistema");
            return 1;
    }
    printf("\n             - - - > O consumo do seu carro foi de %.2f km/L < - - - ", consumo_litros);

    printf("\n\n==================================================================================");
    return 0;
}