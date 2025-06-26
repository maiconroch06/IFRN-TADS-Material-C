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
    int jogar_novamente = 1;

    while (jogar_novamente != 0)
    {
        // qual modo de jogo?
        int modo_jogo;
        printf("\n ========= BEM VINDO AO MINIGAME =========\n");
        printf(" [1] - Vence com quantidade de tentativas.\n");
        printf(" [2] - Vence quem encontrar primeiro.\n");
        printf(" [3] - Sair do Minigame.\n");
        printf(" =========================================\n");
        printf("  -> Modo de jogo: ");
        scanf("%i", &modo_jogo);

        // guardar a quantidade de pontuação do jogador 1
        int tentativas_jogador[2];

        switch (modo_jogo)
        {
        case 1:

            // quem esta jogando?
            for (int jogador = 0; jogador < 2; jogador++)
            {

                // adiciona numeros aluatorios em vetores que determinará a posição aleatoria

                int linhas_aleatorias[QUANTOS_ENCONTRAR_1];
                int colunas_aleatorias[QUANTOS_ENCONTRAR_1];
                for (int i = 0; i < 5; i++)

                {
                    linhas_aleatorias[i] = (rand() % 10);
                    colunas_aleatorias[i] = (rand() % 10);
                }

                // exibição do tabuleiro | tela do jogador
                char matriz[LINHAS][COLUNAS];
                int cont_tentativas = 0, cont_quantos_1_encontrado = 0;

                // inicializando a matriz com caracters 0
                for (int i = 0; i < LINHAS; i++)
                {
                    for (int j = 0; j < COLUNAS; j++)
                    {
                        matriz[i][j] = '0';
                    }
                }

                do
                {
                    // titulo do tabuleiro
                    printf("\n\n ========= TABULEIRO %i ========\n", jogador + 1);
                    for (int i = 0; i < LINHAS; i++)
                    {
                        printf("|");
                        for (int j = 0; j < COLUNAS; j++)
                        {
                            printf(" %c ", matriz[i][j]);
                        }
                        printf("|");

                        // minitela de informações para o jogador
                        if (i == 1)
                        {
                            printf("     ======= STATUS =======");
                        }
                        if (i == 2)
                        {
                            printf("     | Tentativas: %i      |", cont_tentativas);
                        }
                        if (i == 3)
                        {
                            printf("     | Quantos restam: %i  |", QUANTOS_ENCONTRAR_1 - cont_quantos_1_encontrado);
                        }
                        if (i == 4)
                        {
                            printf("     ======================");
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
                    printf(" =========== DECICAO ===========\n\n");
                    printf(" -> Escolha a linha [1 a 10]: ");
                    scanf("%i", &escolha_da_linha);
                    printf(" -> Escolha a coluna [1 a 10]: ");
                    scanf("%i", &escolha_da_coluna);

                    if ((escolha_da_linha < 1 || escolha_da_linha > LINHAS) || (escolha_da_coluna < 1 || escolha_da_coluna > COLUNAS))
                    {
                        printf("\n # ERRO: valor fora da tabela! Tente novamente.");
                        continue;
                    }
                    else if (matriz[escolha_da_linha - 1][escolha_da_coluna - 1] != '0')
                    {
                        printf("\n Voce ja fez essa escolha! Tente novamente.");
                        continue;
                    }
                    else
                    {
                        for (int i = 0; i < QUANTOS_ENCONTRAR_1; i++)
                        {
                            if (linhas_aleatorias[i] == (escolha_da_linha - 1) && colunas_aleatorias[i] == (escolha_da_coluna - 1))
                            {
                                matriz[escolha_da_linha - 1][escolha_da_coluna - 1] = '1';
                                cont_quantos_1_encontrado++;
                                break;
                            } // adicionar condição quando for inserido o numero fora do escopo da matriz
                            else
                            {
                                matriz[escolha_da_linha - 1][escolha_da_coluna - 1] = 'X';
                            }
                        }
                    }

                    cont_tentativas++;

                    if (jogador == 1 && cont_tentativas == tentativas_jogador[0])
                    {
                        printf(" O jogador 2 exerceu as tentativas do jogador 1!\n");
                        cont_tentativas++;

                        break;
                    }

                } while (cont_quantos_1_encontrado != QUANTOS_ENCONTRAR_1);
                // a quantidade de tentativas do jogador 1
                tentativas_jogador[jogador] = cont_tentativas;
            }
            // jogador 1 ganha
            if (tentativas_jogador[0] < tentativas_jogador[1])
            {
                printf("  Jogador 1 venceu! Com %i tentativas.\n", tentativas_jogador[0]);
            }
            else if (tentativas_jogador[1] < tentativas_jogador[0])
            {
                printf("  Jogador 2 venceu! Com %i tentativas.\n", tentativas_jogador[1]);
            }
            else
            {
                printf(" Empate! Com total de %i tentativas.\n", tentativas_jogador[1]);
            }

            break;
        case 2:

            break;

        case 3:
            // escolha de sair do minigame
            break;

        default:
            printf(" # ERRO: modo de jogo invalido!");
            continue;
        }
        printf("\n Digite [0] para jogar sair: ");
        scanf("%i", &jogar_novamente);1
    }
    printf("\n   Saindo do minigame.......\n\n");
    return 0;
}
