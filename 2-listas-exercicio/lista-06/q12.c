#include <stdio.h>
/*
Implemente um procedimento que recebe um vetor de 𝑛 números reais e retorna por meio de referência o maior e o menor valor presente no vetor.
*/

void encontrarMaiorMenor(float vetor[], int n, float *maior, float *menor);

int main() {
    float numeros[] = {3.5, 7.2, 1.8, 9.0, 4.4};
    int tamanho = 5;
    float maior, menor;

    encontrarMaiorMenor(numeros, tamanho, &maior, &menor);

    printf("Maior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);

    return 0;
}

void encontrarMaiorMenor(float vetor[], int n, float *maior, float *menor) {
    *maior = vetor[0];
    *menor = vetor[0];

    for (int i = 1; i < n; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
        }
        if (vetor[i] < *menor) {
            *menor = vetor[i];
        }
    }
}
