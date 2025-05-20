//no case 1 o break (tbm funciona para ouras partes de codico) caso a condicao seja satisfeita ele ira executar e sair do switch, ou seja, ele nao ira entrar na linha de outro bloco de codico

#include <stdio.h>

int main (void) {
    int dia;

    printf(" - - - Descubra qual dia da semana! - - - ");
    printf("\n -> Informe o dia: ");
    scanf("%i",&dia);

    switch (dia) {
        case 1:
        case 7:
            printf(" Final de semana!");
            break;
        case 2 ... 6:
            printf(" Meio de semana!");
            break;

        default:

//    switch (dia) {
//
//        case 1:
//        case 7:
//            printf(" Final de semana!");
//            break;
//        case 2:
//        case 3:
//        case 4:
//        case 5:
//        case 6:
//            printf(" Meio de semana!");
//            break;

            printf(" #ERRO: o numero adicionado nao representa algum dia da semana!");
            break;
    }
    return 0;
}
