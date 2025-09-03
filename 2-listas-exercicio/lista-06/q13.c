#include <stdio.h>
/*
Crie um procedimento que recebe como parâmetro dois vetores de 10 elementos reais e que e retorne o resultado da combinação linear desses vetores. Sabe-se que a combinação linear entre dois vetores 𝒙=[𝑥1  𝑥2   𝑥3    ⋯    𝑥10] e 𝒚=[𝑦1  𝑦2   𝑦3    ⋯    𝑦10] é calculada por: 
𝒙∙𝒚=𝑥1𝑦1 +𝑥2𝑦2 +𝑥3𝑦3 +⋯+𝑥10𝑦10
*/
float combinacaoLinear(float x[], float y[], int tamanho);

int main() {
    float vetorX[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 1.5, 2.5, 3.5, 4.5, 5.5};
    float vetorY[10] = {0.5, 1.0, 1.5, 2.0, 2.5, 0.5, 1.0, 1.5, 2.0, 2.5};

    float resultado = combinacaoLinear(vetorX, vetorY, 10);

    printf("Resultado da combinação linear: %.2f\n", resultado);

    return 0;
}

float combinacaoLinear(float x[], float y[], int tamanho) {
    float resultado = 0.0;

    for (int i = 0; i < tamanho; i++) {
        resultado += x[i] * y[i];
    }

    return resultado;
}
