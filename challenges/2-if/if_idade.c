#include <stdio.h>

int main (void) {
    int idade;

    printf(" - - - Qual a Sua Facha de Idade - - -\n");

    printf("Informe sua idade: ");
    scanf("%i",&idade);

    if (idade > 0 && idade < 18) {
        printf("\n -> Eh menor de idade");

    } else if (idade >= 65) {
        printf("\n -> eh maior de 65 anos");

    } else if (idade >= 18) {
        printf("\n -> eh maior de idade");
        
    } else {
        printf(" #ERRO: Idade fora do escopo!");
    }
    return 0;
}
