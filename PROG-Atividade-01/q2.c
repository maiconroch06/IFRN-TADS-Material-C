#include <stdio.h>

int main(void){
    char atletas[3][200];
    int min[3],seg[3],cent[3];
    int tempo[3];
    
    char aux;
    #define AUXILAR fflush(stdin); scanf("%c",&aux);

    printf(" ============================================\n");
    printf("           COMPETETICAO DE NATACAO!\n");

    //Entrada de dados dos atletas e de seus respectivos tempos
    for (int i = 0; i < 3; i++) {
        printf(" ============================================\n");

        //De preferencia adicionar nomes com tamanhos iguais*
        printf("  >>> %i. Competidor: ",i + 1);
        scanf("%[^\n]",atletas[i]);
        AUXILIAR;
        
        printf(" ======== Tempo do(a) Competidor(a) %i =======\n",i + 1);
        printf("  -> Minutos: ");
        scanf("%i",&min[i]);
        AUX;

        printf("  -> Segundos: ");
        scanf("%i",&seg[i]);
        AUX;

        printf("  -> Centesimos: ");
        scanf("%i",&cent[i]);
        AUX;

        //Converte minutos e segundos em centesimos
        tempo[i] = min[i] * 600 + seg[i] * 100 + cent[i];

    }
    
    //Verifica se os tempos >= 0
    //Considerei que se o tempo == 0 seria a ausencia de algum competidor
    if (tempo[0] >= 0 && tempo[1] >= 0 && tempo[2] >= 0) {

        //Classifica a ordem dos atletas comparando seus tempos
        if (tempo[0] <= tempo[1] && tempo[1] <= tempo[2]) {
            // ordem: 0, 1, 2
            printf(" ==================== Placar ====================\n");
            printf("  1. %s | Tempo: %i' : %i'' : %i'''\n", atletas[0], min[0], seg[0], cent[0]);
            printf("  2. %s | Tempo: %i' : %i'' : %i'''\n", atletas[1], min[1], seg[1], cent[1]);
            printf("  3. %s | Tempo: %i' : %i'' : %i'''\n", atletas[2], min[2], seg[2], cent[2]);
            printf(" ================================================\n");

        } else if (tempo[0] <= tempo[2] && tempo[2] <= tempo[1]) {
            // ordem: 0, 2, 1
            printf(" ==================== Placar ====================\n");
            printf("  1. %s | Tempo: %i' : %i'' : %i'''\n", atletas[0], min[0], seg[0], cent[0]);
            printf("  2. %s | Tempo: %i' : %i'' : %i'''\n", atletas[2], min[2], seg[2], cent[2]);
            printf("  3. %s | Tempo: %i' : %i'' : %i'''\n", atletas[1], min[1], seg[1], cent[1]);
            printf(" ================================================\n");

        } else if (tempo[1] <= tempo[0] && tempo[0] <= tempo[2]) {
            // ordem: 1, 0, 2
            printf(" ==================== Placar ====================\n");
            printf("  1. %s | Tempo: %i' : %i'' : %i'''\n", atletas[1], min[1], seg[1], cent[1]);
            printf("  2. %s | Tempo: %i' : %i'' : %i'''\n", atletas[0], min[0], seg[0], cent[0]);
            printf("  3. %s | Tempo: %i' : %i'' : %i'''\n", atletas[2], min[2], seg[2], cent[2]);
            printf(" ================================================\n");

        } else if (tempo[1] <= tempo[2] && tempo[2] <= tempo[0]) {
            // ordem: 1, 2, 0
            printf(" ==================== Placar ====================\n");
            printf("  1. %s | Tempo: %i' : %i'' : %i'''\n", atletas[1], min[1], seg[1], cent[1]);
            printf("  2. %s | Tempo: %i' : %i'' : %i'''\n", atletas[2], min[2], seg[2], cent[2]);
            printf("  3. %s | Tempo: %i' : %i'' : %i'''\n", atletas[0], min[0], seg[0], cent[0]);
            printf(" ================================================\n");

        } else if (tempo[2] <= tempo[0] && tempo[0] <= tempo[1]) {
            // ordem: 2, 0, 1
            printf(" ==================== Placar ====================\n");
            printf("  1. %s | Tempo: %i' : %i'' : %i'''\n", atletas[2], min[2], seg[2], cent[2]);
            printf("  2. %s | Tempo: %i' : %i'' : %i'''\n", atletas[0], min[0], seg[0], cent[0]);
            printf("  3. %s | Tempo: %i' : %i'' : %i'''\n", atletas[1], min[1], seg[1], cent[1]);
            printf(" ================================================\n");

        } else {
            // ordem: 2, 1, 0
            printf(" ==================== Placar ====================\n");
            printf("  1. %s | Tempo: %i' : %i'' : %i'''\n", atletas[2], min[2], seg[2], cent[2]);
            printf("  2. %s | Tempo: %i' : %i'' : %i'''\n", atletas[1], min[1], seg[1], cent[1]);
            printf("  3. %s | Tempo: %i' : %i'' : %i'''\n", atletas[0], min[0], seg[0], cent[0]);
            printf(" ================================================\n"); 
        }
    //Se alguns dos tempos forem negativo
    } else {
        printf(" #ERRO: tempo negativo");
    }

    //Verifica se teve a quebra do recorde mundial
    int vencedor;
    int recorde = 11467; //valor em centesimos 

    if (tempo[0] <= tempo[1] && tempo[0] <= tempo[2]) {
        vencedor = 0;
        
    } else if (tempo[1] <= tempo[0] && tempo[1] <= tempo[2]) {
        vencedor = 1;

    } else {
        vencedor = 2; 
    }

    if (tempo[vencedor] < recorde) {
        printf("\n =========== RECORDE MUNDIAL QUEBRADO! ==========="); }
    
    return 0;
}