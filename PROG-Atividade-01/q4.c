#include <stdio.h>

int main(void) {
    int dia, mes, ano;

    printf("\n ------- Validador de Data -------\n");

    printf("Informe o dia: ");
    scanf("%i", &dia);

    printf("Informe o mes: ");
    scanf("%i", &mes);

    printf("Informe o ano: ");
    scanf("%i", &ano);

    if (ano < 0) {

        if ((mes >= 1 && mes <= 12)) {

            if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia >= 1 && dia <= 30)) {
                printf("\n Data valida: %i / %i / %i a.C.\n", dia, mes, ano);

            } else if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && (dia >= 1 && dia <= 31)) {
                printf("\n Data valida: %i / %i / %i a.C.\n", dia, mes, ano);

            } else if ((mes == 2) && (dia >= 1 && dia <= 28)) {
                printf("\n Data valida: %i / %i / %i a.C.\n", dia, mes, ano);

            } else if ((mes == 2) && (dia == 29) && ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))) {
                printf("\n Data valida: %i / %i / %i (a.C. bissexto)\n", dia, mes, ano);

            } else {
                printf("\n Data invalida para o ano a.C.\n");
            }
        } else {
            printf("\n Mes invalido para o ano a.C.\n");
        }
        return 0;
    }

    if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia >= 1 && dia <= 30)) {
        printf("\n Data valida: %i / %i / %i\n", dia, mes, ano);

    } else if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && (dia >= 1 && dia <= 31)) {
        printf("\n Data valida: %i / %i / %i\n", dia, mes, ano);

    } else if ((mes == 2) && (dia >= 1 && dia <= 28)) {
        printf("\n Data valida: %i / %i / %i\n", dia, mes, ano);

    } else if ((mes == 2) && (dia == 29) && ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))) {
        printf("\n Data valida: %i / %i / %i (ano bissexto)\n", dia, mes, ano);

    } else {
        printf("\n Data invalida\n");
    }

    return 0;
}
