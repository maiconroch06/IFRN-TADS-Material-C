#include <stdio.h>
#include <string.h>

int main(void) {
/*
    char nome1,nome2,nome3;
    int tempo1,tempo2,tempo3;
    int minutos1,minutos2,minutos3;
    int segundos1,segundos2,segundos3;
    int centesimos1,centesimos2,centesimos3;

    tempo1 = 100 * minutos1 + 10 * segundos1 + centesimos1;
    tempo2 = 100 * minutos2 + 10 * segundos2 + centesimos2;
    tempo3 = 100 * minutos3 + 10 * segundos3 + centesimos3;
*/
    char at1[30],aux;//at2[30],at3[30];
    char tempo1[100];//tempo2,tempo3;
    int minutos,segundos,centesimos;

    printf(" -> Infome seu 'NOME': ");
    scanf("%s",&at1);

    fflush(stdin);

    printf(" -> Infome seu TEMPO DE CORRIDA: ");
    scanf("%s, %s, %s",&minutos,&segundos,&centesimos);

    tempo1 =  ('minutos', 'segundos', 'centesimos');

/*    fflush(stdin);

    printf(" -> Infome seu 'NOME': ");
    scanf("%s",&at2);

    printf(" -> Infome seu 'TEMPO DE CORRIDA' (xx xx xx): ");
    scanf("%i,%i,%i",&minutos,&segundos,&centesimos);

    tempo2 = 100 * minutos + 10 * segundos + centesimos;

//    fflush(stdin);

    printf(" -> Infome seu 'NOME': ");
    scanf("%s",&at3);

    printf(" -> Infome seu 'TEMPO DE CORRIDA' (xx xx xx): ");
    scanf("%i,%i,%i",&minutos,&segundos,&centesimos);

    tempo3 = 100 * minutos + 10 * segundos + centesimos;

//    fflush(stdin); */

    printf("%s",tempo1);

    return 0;
}