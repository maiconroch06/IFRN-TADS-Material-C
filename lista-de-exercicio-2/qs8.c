#include <stdio.h>

int main (void) {
    int idade;

    
    printf("- - - Veja se voce pode votar - - - ");
    printf("\n -> Informe sua idade: ");
    scanf("%",&idade);

    if (idade > 0 && idade < 16) {
        printf("- - - Nao eh eleitor - - -");

    } else if (idade >= 18 && idade <= 65) {
        printf("- - - Eleitor obrigatorio - - -");

    } else if (idade >= 16 && idade <= 17 && idade >= 65) {
    printf("- - - Eleitor facultativo - - -");

    } else {
    printf("\n --- ERRO: Idade fora do escopo! ---");

    }
	return 0;
}
