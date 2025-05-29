#include <stdio.h>
#include <string.h>

int main(void){
    char atletas[3][200];
    int min[3],seg[3],cent[3];
    int tempo[3];
    char aux;

    printf("Nome do atleta 1: ");
    scanf("%[^\n]", atletas[0]);
    fflush(stdin);
    scanf("%c",&aux);

    printf("Informe o tempo do atleta 1:\n");
    printf(" -> Minutos: ");
    scanf("%i", &min[0]);
    printf(" -> Segundos: ");
    scanf("%i", &seg[0]);
    printf(" -> Centesimos: ");
    scanf("%i", &cent[0]);
    fflush(stdin);
    scanf("%c",&aux);

    tempo[0] = min[0] * 600 + seg[0] * 100 + cent[0];

    printf("Nome do atleta 2: ");
    scanf("%[^\n]", atletas[1]);
    fflush(stdin);
    scanf("%c",&aux);

    printf("Informe o tempo do atleta 2:\n");
    printf(" -> Minutos: ");
    scanf("%i", &min[1]);
    printf(" -> Segundos: ");
    scanf("%i", &seg[1]);
    printf(" -> Centesimos: ");
    scanf("%i", &cent[1]);
    fflush(stdin);
    scanf("%c",&aux);

    tempo[1] = min[1] * 600 + seg[1] * 100 + cent[1];

    printf("Nome do atleta 3: ");
    scanf("%[^\n]", atletas[2]);
    fflush(stdin);
    scanf("%c",&aux);

    printf("Informe o tempo do atleta 3:\n");
    printf(" -> Minutos: ");
    scanf("%i", &min[2]);
    printf(" -> Segundos: ");
    scanf("%i", &seg[2]);
    printf(" -> Centesimos: ");
    scanf("%i", &cent[2]);
    fflush(stdin);
    scanf("%c",&aux);

    tempo[2] = min[2] * 600 + seg[2] * 100 + cent[2];

    if (tempo[0] <= tempo[1] && tempo[1] <= tempo[2]) {
        // ordem: 0, 1, 2
        printf(" ==================== Placar ====================\n");
        printf(" 1. %s | Tempo: %i : %i : %i\n", atletas[0], min[0], seg[0], cent[0]);
        printf(" 2. %s | Tempo: %i : %i : %i\n", atletas[1], min[1], seg[1], cent[1]);
        printf(" 3. %s | Tempo: %i : %i : %i\n", atletas[2], min[2], seg[2], cent[2]);
        printf(" ================================================\n");

    } else if (tempo[0] <= tempo[2] && tempo[2] <= tempo[1]) {
        // ordem: 0, 2, 1
        printf(" ==================== Placar ====================\n");
        printf(" 1. %s | Tempo: %i : %i : %i\n", atletas[0], min[0], seg[0], cent[0]);
        printf(" 2. %s | Tempo: %i : %i : %i\n", atletas[2], min[2], seg[2], cent[2]);
        printf(" 3. %s | Tempo: %i : %i : %i\n", atletas[1], min[1], seg[1], cent[1]);
        printf(" ================================================\n");


    } else if (tempo[1] <= tempo[0] && tempo[0] <= tempo[2]) {
        // ordem: 1, 0, 2
        printf(" ==================== Placar ====================\n");
        printf(" 1. %s | Tempo: %i : %i : %i\n", atletas[1], min[1], seg[1], cent[1]);
        printf(" 2. %s | Tempo: %i : %i : %i\n", atletas[0], min[0], seg[0], cent[0]);
        printf(" 3. %s | Tempo: %i : %i : %i\n", atletas[2], min[2], seg[2], cent[2]);
        printf(" ================================================\n");

    } else if (tempo[1] <= tempo[2] && tempo[2] <= tempo[0]) {
        // ordem: 1, 2, 0
        printf(" ==================== Placar ====================\n");
        printf(" 1. %s | Tempo: %i : %i : %i\n", atletas[1], min[1], seg[1], cent[1]);
        printf(" 2. %s | Tempo: %i : %i : %i\n", atletas[2], min[2], seg[2], cent[2]);
        printf(" 3. %s | Tempo: %i : %i : %i\n", atletas[0], min[0], seg[0], cent[0]);
        printf(" ================================================\n");

    } else if (tempo[2] <= tempo[0] && tempo[0] <= tempo[1]) {
        // ordem: 2, 0, 1
        printf(" ==================== Placar ====================\n");
        printf(" 1. %s | Tempo: %i : %i : %i\n", atletas[2], min[2], seg[2], cent[2]);
        printf(" 2. %s | Tempo: %i : %i : %i\n", atletas[0], min[0], seg[0], cent[0]);
        printf(" 3. %s | Tempo: %i : %i : %i\n", atletas[1], min[1], seg[1], cent[1]);
        printf(" ================================================\n");

    } else {
        // ordem: 2, 1, 0
        printf(" ==================== Placar ====================\n");
        printf(" 1. %s | Tempo: %i : %i : %i\n", atletas[2], min[2], seg[2], cent[2]);
        printf(" 2. %s | Tempo: %i : %i : %i\n", atletas[1], min[1], seg[1], cent[1]);
        printf(" 3. %s | Tempo: %i : %i : %i\n", atletas[0], min[0], seg[0], cent[0]);
        printf(" ================================================\n");
    }

    int recorde = 11467; //valor em centesimos
    int vencedor;

    if (tempo[0] <= tempo[1] && tempo[0] <= tempo[2]) {
        vencedor = 0;
        
    } else if (tempo[1] <= tempo[0] && tempo[1] <= tempo[2]) {
        vencedor = 1;

    } else {
        vencedor = 2;
    }

    if (tempo[vencedor] < recorde) {
        printf("\n ________ RECORDE MUNDIAL QUEBRADO! ________");
    }

    return 0;
}