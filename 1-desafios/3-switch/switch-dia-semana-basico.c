//no case 1 o break (tbm funciona para ouras partes de codico) caso a condicao seja satisfeita ele ira executar e sair do switch, ou seja, ele nao ira entrar na linha de outro bloco de codico

#include <stdio.h>

int main (void) {
    int dia;

    printf(" - - - Descubra qual dia da semana! - - - ");
    printf("\n -> Informe o dia: ");
    scanf("%i",&dia);

    switch (dia) {
        case 1:
            printf(" Domingo!");
            break;
        case 2:
            printf(" Segunda!");
            break;
        case 3:
            printf(" Terca!");
            break;
        case 4:
            printf(" Quarta!");
            break;
        case 5:
            printf(" Quinta!");
            break;
        case 6:
            printf(" Sexta!");
            break;
        case 7:
            printf(" Sabado!");
            break;

        default:
            printf(" #ERRO: o numero adicionado nao representa algum dia da semana!");
            break;
    }
    return 0;
}
