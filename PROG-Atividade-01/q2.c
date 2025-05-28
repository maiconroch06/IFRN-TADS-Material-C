#include <stdio.h>
#include <string.h>

int main (){

    char atletas[3][90];
    float min[3],seg[3],cent[3];
    int tempo[3];

    for (int i = 0; i < 3; i++) {
        printf("Nome do atleta %i: ",i + 1);
        fgets(atletas[i],sizeof(atletas[i]),stdin);

        printf("Tempo do atleta %i: ",i + 1);
        scanf("%i,%i,%i",&min,&seg,&cent);

        tempo[i] = min[i] * 600 + seg[i] * 100 + cent[i];
    }

    if (tempo[0] <= tempo[1] && tempo[1] <= tempo[2]) {
        // ordem: 0, 1, 2
        printf(" ==================== Placar ====================\n");
        printf(" 1. %s | Tempo: %i : %i : %i\n", atletas[0], min[0], seg[0], cent[0]);
        printf(" 2. %s | Tempo: %i : %i : %i\n", atletas[1], min[1], seg[1], cent[1]);
        printf(" 3. %s | Tempo: %i : %i : %i\n", atletas[2], min[2], seg[2], cent[2]);

    } else if (tempo[0] <= tempo[2] && tempo[2] <= tempo[1]) {
        // ordem: 0, 2, 1
        printf(" ==================== Placar ====================\n");
        printf(" 1. %s | Tempo: %i : %i : %i\n", atletas[0], min[0], seg[0], cent[0]);
        printf(" 2. %s | Tempo: %i : %i : %i\n", atletas[2], min[2], seg[2], cent[2]);
        printf(" 3. %s | Tempo: %i : %i : %i\n", atletas[1], min[1], seg[1], cent[1]);

    } else if (tempo[1] <= tempo[0] && tempo[0] <= tempo[2]) {
        // ordem: 1, 0, 2
        printf(" ==================== Placar ====================\n");
        printf(" 1. %s | Tempo: %i : %i : %i\n", atletas[1], min[1], seg[1], cent[1]);
        printf(" 2. %s | Tempo: %i : %i : %i\n", atletas[0], min[0], seg[0], cent[0]);
        printf(" 3. %s | Tempo: %i : %i : %i\n", atletas[2], min[2], seg[2], cent[2]);

    } else if (tempo[1] <= tempo[2] && tempo[2] <= tempo[0]) {
        // ordem: 1, 2, 0
        printf(" ==================== Placar ====================\n");
        printf(" 1. %s | Tempo: %i : %i : %i\n", atletas[1], min[1], seg[1], cent[1]);
        printf(" 2. %s | Tempo: %i : %i : %i\n", atletas[2], min[2], seg[2], cent[2]);
        printf(" 3. %s | Tempo: %i : %i : %i\n", atletas[0], min[0], seg[0], cent[0]);

    } else if (tempo[2] <= tempo[0] && tempo[0] <= tempo[1]) {
        // ordem: 2, 0, 1
        printf(" ==================== Placar ====================\n");
        printf(" 1. %s | Tempo: %i : %i : %i\n", atletas[2], min[2], seg[2], cent[2]);
        printf(" 2. %s | Tempo: %i : %i : %i\n", atletas[0], min[0], seg[0], cent[0]);
        printf(" 3. %s | Tempo: %i : %i : %i\n", atletas[1], min[1], seg[1], cent[1]);

    } else {
        // ordem: 2, 1, 0
        printf(" ==================== Placar ====================\n");
        printf(" 1. %s | Tempo: %i : %i : %i\n", atletas[2], min[2], seg[2], cent[2]);
        printf(" 2. %s | Tempo: %i : %i : %i\n", atletas[1], min[1], seg[1], cent[1]);
        printf(" 3. %s | Tempo: %i : %i : %i\n", atletas[0], min[0], seg[0], cent[0]);
    }

    


    return 0;
}