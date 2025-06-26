#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// tamanho da matriz
#define LINHAS 10
#define COLUNAS 10
#define QUANTOS_ENCONTRAR_1 5 // quantos numeros uns encontrar?

int main(void)
{
    // jogar novamente?
    int jogar_novamente = 0;

    while (jogar_novamente == 0)
    {
        // qual modo de jogo?
        int modo_jogo;
        printf("\n\n ======== BEM VINDO AO MINI JOGO ========\n");
        printf(" [1] - Vence com quantidade de tentativas.\n");
        printf(" [2] - Vence quem encontrar primeiro.\n");
        printf("     -> Modo de jogo: ");
        scanf("%i", &modo_jogo);

        switch (modo_jogo)
        {
        case 1:
            // quem esta jogando?
            for (int jogador = 0; jogador < 2; jogador++)
            {

                int linhas_aleatorias[QUANTOS_ENCONTRAR_1];
                int colunas_aleatorias[QUANTOS_ENCONTRAR_1];

                for (int i = 0; i < 5; i++)
                {
                    linhas_aleatorias[i] = (rand() % 10);
                    colunas_aleatorias[i] = (rand() % 10);
                }

                // exibição do tabuleiro | tela do jogador
                int cont_tentativas = 0, cont_quantos_1_encontrado = 0;

                // inicializando a matriz
                int matriz[LINHAS][COLUNAS] = {0};
                do
                {
                    // titulo do tabuleiro
                    printf("\n\n ========= TABULEIRO %i =========\n", jogador + 1);
                    for (int i = 0; i < LINHAS; i++)
                    {
                        printf("|");
                        for (int j = 0; j < COLUNAS; j++)
                        {
                            printf(" %i ", matriz[i][j]);
                        }
                        printf("|");

                        if (i == 1)
                        {
                            printf("      ======= STATUS =======");
                        }
                        if (i == 2)
                        {
                            printf("      | Tentativas: %i      |", cont_tentativas);
                        }
                        if (i == 3)
                        {
                            printf("      | Quantos restam: %i  |", QUANTOS_ENCONTRAR_1 - cont_quantos_1_encontrado);
                        }
                        if (i == 4)
                        {
                            printf("      ======================");
                        }
                        printf("\n");
                    }

                    /*/ teste
                    printf("\n\n Disposicao de linhas: ");
                    // 5 é o numero que queremos quantas vezes apareça
                    for (int i = 0; i < 5; i++)
                    {
                        printf(" %i ", linhas_aleatorias[i]);
                    }

                    printf("\n Disposicao de colunas: ");
                    for (int i = 0; i < 5; i++)
                    {
                        printf(" %i ", colunas_aleatorias[i]);
                    } // final teste*/

                    // tentativas do usuario
                    int escolha_da_linha, escolha_da_coluna;
                    printf("\n =========== DECICAO ===========\n");
                    printf(" -> Escolha a linha [1 a 10]: ");
                    scanf("%i", &escolha_da_linha);
                    printf(" -> Escolha a coluna [1 a 10]: ");
                    scanf("%i", &escolha_da_coluna);

                    for (int i = 0; i < QUANTOS_ENCONTRAR_1; i++)
                    {
                        if (linhas_aleatorias[i] == escolha_da_linha - 1 && colunas_aleatorias[i] == escolha_da_coluna - 1)
                        {
                            matriz[escolha_da_linha - 1][escolha_da_coluna - 1] = 1;
                            cont_quantos_1_encontrado++;
                        } // adicionar condição quando for inserido numero fora do escopo da matriz
                        else
                        {
                            matriz[escolha_da_linha - 1][escolha_da_coluna - 1] = 3;
                        }
                    }

                    cont_tentativas++;
                } while (cont_quantos_1_encontrado != QUANTOS_ENCONTRAR_1);
            }
            // exibir placar

            break;
        case 2:

            break;

        default:
            printf(" # ERRO: modo de jogo invalido!");
            continue;
        }
        printf("\n\n Digite [0] para jogar novamente: ");
        scanf("%i", &jogar_novamente);
    }
    printf("\n   Saindo do minigame.......\n\n");
    return 0;
}
