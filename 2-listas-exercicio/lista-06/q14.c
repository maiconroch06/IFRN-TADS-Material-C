#include <stdio.h>
/*
Implemente um procedimento que recebe como parâmetro dois vetores de 10 elementos inteiros e que retorne, também por parâmetro, um terceiro vetor que é união dos dois primeiros.
*/
int existeNoVetor(int vetor[], int tamanho, int valor);
void uniaoSemRepeticao(int v1[], int v2[], int resultado[], int *tamResultado);

int main() {
    int vetor1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetor2[10] = {5, 6, 7, 11, 12, 13, 14, 15, 16, 17};
    int resultado[20];
    int tamanhoResultado;

    
    printf("Vetor 01:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor1[i]);
    }
    printf("\n");
    
    printf("Vetor 02:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor2[i]);
    }
    printf("\n");

    uniaoSemRepeticao(vetor1, vetor2, resultado, &tamanhoResultado);
    
    printf("Vetor uniao sem repeticao:\n");
    for (int i = 0; i < tamanhoResultado; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}

int existeNoVetor(int vetor[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) return 1;
    }
    return 0;
}

void uniaoSemRepeticao(int v1[], int v2[], int resultado[], int *tamResultado) {
    *tamResultado = 0;

    for (int i = 0; i < 10; i++) {
        if (!existeNoVetor(resultado, *tamResultado, v1[i])) {
            resultado[*tamResultado] = v1[i];
            (*tamResultado)++;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (!existeNoVetor(resultado, *tamResultado, v2[i])) {
            resultado[*tamResultado] = v2[i];
            (*tamResultado)++;
        }
    }
}
