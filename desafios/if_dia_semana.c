#include <stdio.h>

int main (void) {
    int dia;

    printf(" - - - Descubra qual dia da semana! - - - ");
    printf("\n -> Informe o dia: ");
    scanf("%i",&dia);

    if (dia == 1) {
        printf(" Domingo!");

    } else if (dia == 2) { 
        printf(" Segunda!");

    } else if (dia == 3) {
        printf(" Terca!");

    } else if (dia == 4) { 
        printf(" Quarta!");

    } else if (dia == 5) {
        printf(" Quinta!");

    } else if (dia == 6) { 
        printf(" Sexta!");

    } else if (dia == 7) {
        printf(" Sabado!");
        
    } else {
        printf(" #ERRO: o numero adicionado nao representa algum dia da semana!");
    }
    return 0;
}
