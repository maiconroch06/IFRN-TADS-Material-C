#include <stdio.h>

int main(void) {
    int dia,mes,ano;
    //forma uma data valida?

    printf(" _______________ Calendario xx/xx/xx _______________\n\n");

    printf(" -> Infome o 'DIA' da sua data: ");
    scanf("%i",&dia);

    printf(" -> Infome o 'MES' da sua data: ");
    scanf("%i",&mes);

    printf(" -> Infome o 'ANO' da sua data: ");
    scanf("%i",&ano);


    if (dia > 0 && dia <= 30 && mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        printf("\n - DATA VALIDA!!! ");
        printf(" %i / %i / %i",dia,mes,ano);


    } else if (dia > 0 && dia <= 31 && mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        printf("\n - DATA VALIDA!!! ");
        printf(" %i / %i / %i",dia,mes,ano);


    } else if (dia > 0 && dia <= 28 && mes == 2) {
        printf("\n - DATA VALIDA!!! ");
        printf(" %i / %i / %i",dia,mes,ano);


    } else if ((dia > 0 && dia <= 29) && (mes == 2) && ((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0))) {
        printf("\n - DATA VALIDA, ANO BISSEXTO!!! ");
        printf(" %i / %i / %i",dia,mes,ano);


    } else if (dia > 0 && dia <= 28 && mes == 2 && ano < 0) {
        printf("\n - DATA VALIDA, ANO(S) ANTES DE CRISTO!!! ");
        printf(" %i / %i / %i",dia,mes,ano);
    

    } else {
        printf("\n - DATA INVALIDA!!!");
    }
    
    printf("\n ___________________________________________________");

    return 0;
}