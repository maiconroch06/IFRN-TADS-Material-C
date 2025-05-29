#include <stdio.h>

char atletas[3][200];
int min[3],seg[3],cent[3];
int tempo[3];
char aux;

int main () {

    for (int i = 0; i < 3; i++) {

        printf(" -> Nome do(a) atleta%i: ",i + 1);
        scanf("%[^\n]", atletas[i]);
        fflush(stdin);
        scanf("%c",&aux);

        printf(" - - - Tempo do(a) Atleta%i - - -\n",i + 1);
        printf(" -> Minutos: ");
        scanf("%i", &min[i]);
        fflush(stdin);
        scanf("%c",&aux);

        printf(" -> Segundos: ");
        scanf("%i", &seg[i]);
        fflush(stdin);
        scanf("%c",&aux);

        printf(" -> Centesimos: ");
        scanf("%i", &cent[i]);
        fflush(stdin);
        scanf("%c",&aux);

        //Converte minutos e segundos em centesimos
        tempo[i] = min[i] * 600 + seg[i] * 100 + cent[i];
    }

    if (tempo[0] >= 0 && tempo[1] >= 0 && tempo[2] >= 0) {

        //Classifica a ordem dos atletas comparando seus tempos
        if (tempo[0] <= tempo[1] && tempo[1] <= tempo[2]) {
            // ordem: 0, 1, 2
            printf(" ==================== Placar ====================\n");
            printf(" 1. %s | Tempo: %i' : %i'' : %i'''\n", atletas[0], min[0], seg[0], cent[0]);
            printf(" 2. %s | Tempo: %i' : %i'' : %i'''\n", atletas[1], min[1], seg[1], cent[1]);
            printf(" 3. %s | Tempo: %i' : %i'' : %i'''\n", atletas[2], min[2], seg[2], cent[2]);
            printf(" ================================================\n");
        }
    }

    return 0;
}