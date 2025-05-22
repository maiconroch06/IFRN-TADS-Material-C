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

    /*
     Eh data
    Para ser dia
    dia > 0 && dia <= 30 nos meses 4 6 9 e 11
    dia > 0 && dia <= 31 nos meses 1 3 5 7 8 10 12

    dia > 0 && dia <= 28 no mese 2, se dia for 29 sera ano bissexto

    Para ser mes == 1,2,3,4,5,6,7,8,9,10,11,12
    
    Para ser ano bissexto = ano > 0 && mes == 2 && dia == 29
    Para ser ano comum = ano > 0 && mes == 2 && dia != 29

    */

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