/* 19.Monte um triangulo de pascal como a seguir para n=5:
    1
    1 1
    1 2 1
    1 3 3 1
    1 4 5 4 1
    1 5 9 9 5 1 
*/

#include <stdio.h>

void gerarTrianguloPascal(int n);
int fatorial(int num);

int main() {
    int termos;

    printf("Digite o numero de linhas do Triangulo de Pascal: ");
    scanf("%d", &termos);

    gerarTrianguloPascal(termos);

    return 0;
}

// Função para gerar o Triângulo de Pascal
void gerarTrianguloPascal(int n) {
    for (int linha = 0; linha < n; linha++) {
        // Espaçamento para centralizar
        for (int espaco = 0; espaco < n - linha - 1; espaco++) {
            printf("  ");
        }

        for (int coluna = 0; coluna <= linha; coluna++) {
            int valor = fatorial(linha) / (fatorial(coluna) * fatorial(linha - coluna));
            printf("%4d ", valor);
        }
        printf("\n");
    }
}

// Função para calcular fatorial
int fatorial(int num) {
    int resultado = 1;
    for (int i = 2; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}
