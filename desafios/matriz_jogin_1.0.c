#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// tamanho da matriz
#define LINHAS 10
#define COLUNAS 10

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
                int matriz[LINHAS][COLUNAS] = {0};

                // titulo do tabuleiro
                printf("========= TABULEIRO %i =========\n", jogador + 1);
                // exibição do tabuleiro
                for (int i = 0; i < LINHAS; i++)
                {
                    printf("|");
                    for (int j = 0; j < COLUNAS; j++)
                    {
                        printf(" %i ", matriz[i][j]);
                        
                        
                    }
                    
                    if (i != COLUNAS)
                        {
                            printf("|");
                        }
                    printf("\n");

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
}
