#include <stdio.h>

int main(void) {
    int dia,mes,ano;
    //forma uma data valida?

    printf(" ------- Calendario xx/xx/xx -------\n");

    printf("Infome o dia: ");
    scanf("%i",&dia);

    printf("Infome o mes: ");
    scanf("%i",&mes);

    printf("Infome o ano: ");
    scanf("%i",&ano);

    if (dia > 0 && dia <= 30 && mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        printf("Data - valida");
        printf(" %i / %i / %i",dia,mes,ano);

    } else if (dia > 0 && dia <= 31 && mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        printf("Data - valida");
        printf(" %i / %i / %i",dia,mes,ano);

    } else if (dia > 0 && dia <= 28 && mes == 2) {
        printf("Data - valida");
        printf(" %i / %i / %i",dia,mes,ano);

    } else if ((dia > 0 && dia <= 29) && (mes == 2) && ((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0))) {
        printf("Data - valida, ano eh Bissexto!");
        printf(" %i / %i / %i",dia,mes,ano);

    } else if (dia > 0 && dia <= 28 && mes == 2 && ano < 0) {
        printf("Data antes de cristo - valida ");
        printf(" %i / %i / %i",dia,mes,ano);
    
    } else {
        printf(" Data invalida ");
    }
    
    

    /*printf("\n - Data: %i/%i/%i -",dia,mes,ano);*/

    return 0;
}