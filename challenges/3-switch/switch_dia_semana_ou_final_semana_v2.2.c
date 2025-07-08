//no case 1 o break (tbm funciona para ouras partes de codico) caso a condicao seja satisfeita ele ira executar e sair do switch, ou seja, ele nao ira entrar na linha de outro bloco de codico

#include <stdio.h>

int main (void) {
    int dia;

    printf(" - - - Descubra qual dia da semana! - - - ");
    printf("\n -> Informe o dia: ");
    scanf("%i",&dia);

    switch (dia) {
        case 1:
            printf(" Final de semana!");
            break;
        case 2:
            printf(" Meio de semana!");
            break;
        case 3:
            printf(" Meio de semana!");
            break;
        case 4:
            printf(" Meio de semana!");
            break;
        case 5:
            printf(" Meio de semana!");
            break;
        case 6:
            printf(" Meio de semana!");
            break;
        case 7:
            printf(" Final de semana!");
            break;

        default:
            printf(" #ERRO: o numero adicionado nao representa algum dia da semana!");
            break;
    }
    return 0;
}
