#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// tamanho da matriz
#define N_LINHAS 10
#define N_COLUNAS 10

int main(void)
{
    // jogar novamente?
    int jogar_novamente = 0;

    while (jogar_novamente == 0)
    {
        // qual modo de jogo?
        int modo_jogo;
        printf(" ======== BEM VINDO AO MINI JOGO ========\n");
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
                // inicializar matriz
                int matriz[N_LINHAS][N_COLUNAS] = {0};

                // exibir tabuleiro
                printf("========= TABULEIRO %i =========\n", jogador + 1);
                for (int i = 0; i < N_LINHAS; i++)
                {
                    for (int j = 0; j < N_COLUNAS; j++)
                    {
                        printf(" %i ", matriz[i][j]);
                    }
                    printf("\n");
                }

                // linhas e colunas aleatorias
                int l_aleatorias[N_LINHAS] = {(rand() % 10)};
                int c_aleatorias[N_COLUNAS] = {(rand() % 10)};

                // verificar se tem uma "bomba" no mesmo local
                for (int i = 0; i < N_LINHAS; i++)
                {
                    for (int j = i; j <= i; j++)
                    {
                        
                    }
                }
            }

            break;
        case 2:

            break;

        default:
            printf(" # ERRO: modo de jogo invalido!");
            continue;
        }
        printf(" Digite [0] para jogar novamente: ");
        scanf("%i", &jogar_novamente);
    }
    return 0;
}
