#include <stdio.h>

int main (void) {
    int municipio, eleitores_aptos, votos;

    printf(" -> Qual o municipio: ");
    scanf("%c",&municipio);
    printf("\n -> Quantidade de eleitores aptos: ");
    scanf("%i",&eleitores_aptos);
    printf("\n -> Numero de votos: ");
    scanf("%i",&votos);

    if (eleitores_aptos > 20000 && votos <= eleitores_aptos / 2) {
        printf("\n - - - Tera segundo voto! - - -");

    } else if (eleitores_aptos > 20000 && votos > eleitores_aptos / 2) {
        printf("\n - - - Candidato venceu! - - -");

    } else if (eleitores_aptos <= 20000) {
        printf("\n - - - Nao tera segundo voto pois o municipio nao possui mais de 20.000 habitantes! - - -");

    } else {
        printf("\n --- ERRO: Valores irreais de acordo com o contexto! ---");
    }
	return 0;
}
