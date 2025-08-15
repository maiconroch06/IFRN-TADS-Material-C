#include <stdio.h>

int main(void){
    int linhas_A, colunas_A;
    int linhas_B, colunas_B;

    printf("===================== SOMA MATRIZ =====================\n");
    printf(" -> Tamanho da matriz A (x y): ");
    scanf("%i %i",&linhas_A,&colunas_A);

    printf(" -> Tamanho da matriz B (x y): ");
    scanf("%i %i",&linhas_B,&colunas_B);

    if (linhas_A == linhas_B && colunas_A == colunas_B){
        int matriz_A[linhas_A][colunas_A];
        int matriz_B[linhas_B][colunas_B];

        printf(" ================ PREENCHENDO MATRIZ A ================\n");
        for (int i = 0; i < linhas_A; i++){
            for (int j = 0; j < colunas_A; j++){
                printf(" -> A[%i][%i]: ", j, i);
                scanf("%i",&matriz_A[i][j]);
            }
            if (i < linhas_A - 1) {
                printf("-\n");
            }
        }
        
        printf("\n ================ PREENCHENDO MATRIZ B ================\n");
        for (int i = 0; i < linhas_B; i++){
            for (int j = 0; j < colunas_B; j++){
                printf(" -> B[%i][%i]: ", j, i);
                scanf("%i",&matriz_B[i][j]);
            }
            if (i < linhas_B - 1) {
                printf("-\n");
            }
        }

        int matriz_resultado[linhas_A][colunas_A];

        printf("\n ================== MATRIZ RESULTANTE ==================\n\n");
        for (int i = 0; i < linhas_A; i++){
            for (int j = 0; j < colunas_A; j++){
                matriz_resultado[i][j] = matriz_A[i][j] + matriz_B[i][j];
                
            }
            for (int j = 0; j < colunas_A; j++){
                printf("  %i  ", matriz_resultado[i][j]);
                
            }
            printf("\n\n");
        }
    } else {
        printf("\n # ERRO: matrizes de tamanho deferentes!");
    }

    return 0;
}