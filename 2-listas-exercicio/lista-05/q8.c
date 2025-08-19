#include <stdio.h>
#include <string.h>
/*
Uma determinada empresa desejava analisar os níveis e satisfação de seus clientes em relação a alguns de seus produtos. Para isso, foi realizada uma pesquisa em que três produtos (P1, P2 e P3) da empresa foram avaliados em quatro regiões diferentes (Região Norte, Sul, Leste e Oeste) de uma cidade. Cada entrevistado avaliou os três produtos com notas entre 0 e 10. Crie um programa em linguagem C que faça uso de matrizes para armazenar as avaliações dos entrevistados, sabendo que o número e entrevistados deve ser informado pelo usuário. O programa deve exibir a média de satisfação de cada produto, informar o produto que teve a maior média geral de satisfação, a média de satisfação por região e qual região obteve o menor índice médio.
*/
int main() {
    int n_entrevistados;
    const int n_produtos = 3;
    const int n_regioes = 4;
    char produtos[3][10] = {"P1", "P2", "P3"};
    char regioes[4][10] = {"Norte", "Sul", "Leste", "Oeste"};

    printf("Informe o numero de entrevistados: ");
    scanf("%d", &n_entrevistados);

    float notas[n_entrevistados][n_regioes][n_produtos];

    // Leitura das notas
    for (int i = 0; i < n_entrevistados; i++) {
        printf("\nEntrevistado %d:\n", i + 1);
        for (int r = 0; r < n_regioes; r++) {
            printf("  Regiao %s:\n", regioes[r]);
            for (int p = 0; p < n_produtos; p++) {
                float nota;
                do {
                    printf("    Produto %s (0-10): ", produtos[p]);
                    scanf("%f", &nota);
                } while (nota < 0 || nota > 10);
                notas[i][r][p] = nota;
            }
        }
    }

    // Media de satisfacao de cada produto
    float media_produto[3];
    memset(media_produto, 0, sizeof(media_produto));
    for (int p = 0; p < n_produtos; p++) {
        float soma = 0;
        for (int i = 0; i < n_entrevistados; i++) {
            for (int r = 0; r < n_regioes; r++) {
                soma += notas[i][r][p];
            }
        }
        media_produto[p] = soma / (n_entrevistados * n_regioes);
    }

    printf("\nMedia de satisfacao de cada produto:\n");
    for (int p = 0; p < n_produtos; p++) {
        printf("  %s: %.2f\n", produtos[p], media_produto[p]);
    }

    // Produto com maior media
    int idx_maior = 0;
    for (int p = 1; p < n_produtos; p++) {
        if (media_produto[p] > media_produto[idx_maior]) {
            idx_maior = p;
        }
    }
    printf("\nProduto com maior media geral de satisfacao: %s (%.2f)\n", produtos[idx_maior], media_produto[idx_maior]);

    // Media de satisfacao por regiao
    float media_regiao[4];
    memset(media_regiao, 0, sizeof(media_regiao));
    for (int r = 0; r < n_regioes; r++) {
        float soma = 0;
        for (int i = 0; i < n_entrevistados; i++) {
            for (int p = 0; p < n_produtos; p++) {
                soma += notas[i][r][p];
            }
        }
        media_regiao[r] = soma / (n_entrevistados * n_produtos);
    }

    printf("\nMedia de satisfacao por regiao:\n");
    for (int r = 0; r < n_regioes; r++) {
        printf("  %s: %.2f\n", regioes[r], media_regiao[r]);
    }

    // Regiao com menor indice medio
    int idx_menor = 0;
    for (int r = 1; r < n_regioes; r++) {
        if (media_regiao[r] < media_regiao[idx_menor]) {
            idx_menor = r;
        }
    }
    printf("\nRegiao com menor indice medio: %s (%.2f)\n", regioes[idx_menor], media_regiao[idx_menor]);

    return 0;
}