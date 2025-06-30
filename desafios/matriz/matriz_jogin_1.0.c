#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// tamanho da matriz
#define LINHAS 10
#define COLUNAS 10
#define QUANTOS_ENCONTRAR_UM 5 // quantos numeros uns encontrar?

int main(void)
{
    // jogar novamente?
    int jogar_novamente = 1;

    while (jogar_novamente != 0)
    {
        // qual modo de jogo?
        int modo_jogo;
        printf("\n ============ ENCONTRE OS UNS ============\n");
        printf(" [1] - Vence com quantidade de tentativas.\n");
        printf(" [2] - Vence quem encontrar primeiro.\n");
        printf(" [3] - Sair do Minigame.\n");
        printf(" =========================================\n");
        printf("  -> Modo de jogo: ");
        scanf("%i", &modo_jogo);

        // guardar a quantidade de pontuação do jogador 1
        int tentativas_jogador[2];
        srand(time(NULL)); // torna o jogo mais aleatorio
        switch (modo_jogo)
        {
        case 1:

            // quem esta jogando?
            for (int jogador = 0; jogador < 2; jogador++)
            {
                // adiciona numeros aluatorios em vetores que determinará a posição aleatoria
                int linhas_aleatorias[QUANTOS_ENCONTRAR_UM];
                int colunas_aleatorias[QUANTOS_ENCONTRAR_UM];
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
                    printf("\n\n  ========= TABULEIRO %i =========\n", jogador + 1);
                    for (int i = 0; i < LINHAS; i++)
                    {
                        printf(" |");
                        for (int j = 0; j < COLUNAS; j++)
                        {
                            printf(" %c ", matriz[i][j]);
                        }
                        printf("| %i", i + 1);

                        // minitela de informações para o jogador
                        if (i == 1)
                        {
                            printf("     ======= STATUS =======");
                        }
                        if (i == 2)
                        {
                            printf("     | Jogador %i          |", jogador + 1);
                        }
                        if (i == 3)
                        {
                            printf("     | Tentativas: %i      |", cont_tentativas);
                        }
                        if (i == 4)
                        {
                            printf("     | Quantos restam: %i  |", QUANTOS_ENCONTRAR_UM - cont_quantos_1_encontrado);
                        }
                        if (i == 5)
                        {
                            printf("     ======================");
                        }
                        printf("\n");
                    }
                    printf(" ================================\n");
                    printf("   1  2  3  4  5  6  7  8  9  10\n");

                    /*/ Modo Desenvolvedor: Quando vc n tiver afim de procurar os numero é só tirar o asterisco dessa linha.
                    printf("\n\n Disposicao de linhas: ");
                    // 5 é o numero que queremos que o numero 1 apareça
                    for (int i = 0; i < 5; i++)
                    {
                        printf(" %i ", linhas_aleatorias[i] + 1);
                    }

                    printf("\n Disposicao de colunas: ");
                    for (int i = 0; i < 5; i++)
                    {
                        printf(" %i ", colunas_aleatorias[i] + 1);
                    }
                    printf("\n"); // final do gabrito*/

                    // tentativas do usuario
                    int escolha_da_linha, escolha_da_coluna;
                    printf("  =========== DECISAO ===========\n\n");
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
                        for (int i = 0; i < QUANTOS_ENCONTRAR_UM; i++)
                        {
                            if (linhas_aleatorias[i] == (escolha_da_linha - 1) && colunas_aleatorias[i] == (escolha_da_coluna - 1))
                            {
                                matriz[escolha_da_linha - 1][escolha_da_coluna - 1] = '1';
                                cont_quantos_1_encontrado++;
                                break;
                            }
                            else
                            {
                                matriz[escolha_da_linha - 1][escolha_da_coluna - 1] = ' ';
                            }
                        }
                    }

                    cont_tentativas++;

                    if (jogador == 1 && cont_tentativas == tentativas_jogador[0])
                    {
                        printf(" O jogador 2 exercedeu as tentativas do jogador 1!\n");
                        cont_tentativas++;
                        break;
                    }

                } while (cont_quantos_1_encontrado != QUANTOS_ENCONTRAR_UM);
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
        {
            // determinação da posição aleatoria dos numeros uns
            int linhas_aleatorias[QUANTOS_ENCONTRAR_UM];
            int colunas_aleatorias[QUANTOS_ENCONTRAR_UM];
            for (int i = 0; i < 5; i++)

            {
                linhas_aleatorias[i] = (rand() % 10);
                colunas_aleatorias[i] = (rand() % 10);
            }

            // inicializando a matriz com caracters 0
            char tabuleiro_01[LINHAS][COLUNAS], tabuleiro_02[LINHAS][COLUNAS];
            for (int i = 0; i < LINHAS; i++)
            {
                for (int j = 0; j < COLUNAS; j++)
                {
                    tabuleiro_01[i][j] = '0';
                    tabuleiro_02[i][j] = '0';
                }
            }

            // 0 para jogador 1, 1 para jogador 2
            int cont_tentativas[2] = {0};
            int pontuacao[2] = {0};
            int jogador = 0;

            while (pontuacao[0] < QUANTOS_ENCONTRAR_UM && pontuacao[1] < QUANTOS_ENCONTRAR_UM)
            {
                printf("\n\n  ========= TABULEIRO %i =========\n", jogador + 1);
                for (int i = 0; i < LINHAS; i++)
                {
                    printf(" |");
                    for (int j = 0; j < COLUNAS; j++)
                    {

                        if (jogador == 0)
                        {
                            printf(" %c ", tabuleiro_01[i][j]);
                        }
                        else
                        {
                            printf(" %c ", tabuleiro_02[i][j]);
                        }
                    }
                    printf("| %i", i + 1);

                    // minitela de informações para o jogador
                    if (i == 1)
                    {
                        printf("     ======= STATUS =======");
                    }
                    if (i == 2)
                    {
                        printf("     | Jogador %i          |", jogador + 1);
                    }

                    if (i == 3)
                    {
                        printf("     | Tentativas: %i      |", cont_tentativas[jogador]);
                    }
                    if (i == 4)
                    {
                        printf("     | Quantos restam: %i  |", QUANTOS_ENCONTRAR_UM - pontuacao[jogador]);
                    }
                    if (i == 5)
                    {
                        printf("     ======================");
                    }
                    printf("\n");
                }
                printf(" ================================\n");
                printf("   1  2  3  4  5  6  7  8  9  10\n");

                // Modo Desenvolvedor: Quando vc n tiver afim de procurar os numero é só tirar o asterisco dessa linha.
                printf("\n\n Disposicao de linhas: ");
                for (int i = 0; i < 5; i++)
                {
                    printf(" %i ", linhas_aleatorias[i] + 1);
                }

                printf("\n Disposicao de colunas: ");
                for (int i = 0; i < 5; i++)
                {
                    printf(" %i ", colunas_aleatorias[i] + 1);
                }
                printf("\n"); // final do gabrito*/

                // tentativas do usuario
                int escolha_da_linha, escolha_da_coluna;
                printf("  =========== DECISAO ===========\n\n");
                printf(" -> Escolha a linha [1 a 10]: ");
                scanf("%i", &escolha_da_linha);
                printf(" -> Escolha a coluna [1 a 10]: ");
                scanf("%i", &escolha_da_coluna);

                // classificar a escolha
                if ((escolha_da_linha < 1 || escolha_da_linha > LINHAS) || (escolha_da_coluna < 1 || escolha_da_coluna > COLUNAS))
                {
                    printf("\n # ERRO: valor fora da tabela! Tente novamente.");
                    continue;
                }
                else if ((jogador == 0 && tabuleiro_01[escolha_da_linha - 1][escolha_da_coluna - 1] != '0') || (jogador == 1 && tabuleiro_02[escolha_da_linha - 1][escolha_da_coluna - 1] != '0'))
                {
                    printf("\n Voce ja fez essa escolha! Tente novamente.");
                    continue;
                }
                else
                {
                    // auxiliar
                    int acertou = 0;
                    for (int i = 0; i < QUANTOS_ENCONTRAR_UM; i++)
                    {
                        if (linhas_aleatorias[i] == (escolha_da_linha - 1) && colunas_aleatorias[i] == (escolha_da_coluna - 1))
                        {
                            if (jogador == 0)
                            {
                                tabuleiro_01[escolha_da_linha - 1][escolha_da_coluna - 1] = '1';
                                pontuacao[jogador]++;
                                acertou = 1;
                                break;
                            }

                            else
                            {
                                tabuleiro_02[escolha_da_linha - 1][escolha_da_coluna - 1] = '1';
                                pontuacao[jogador]++;
                                acertou = 1;
                                break;
                            }
                        }
                    }
                    if (!acertou)
                    {
                        if (jogador == 0)
                        {
                            tabuleiro_01[escolha_da_linha - 1][escolha_da_coluna - 1] = ' ';
                        }
                        else
                        {
                            tabuleiro_02[escolha_da_linha - 1][escolha_da_coluna - 1] = ' ';
                        }
                    }
                }
                cont_tentativas[jogador]++;

                // Alterna jogador
                jogador = 1 - jogador;
            }

            if (pontuacao[0] == QUANTOS_ENCONTRAR_UM)
            {
                printf("  Jogador 1 venceu! Com %i tentativas.\n", cont_tentativas[0]);
            }
            else if (pontuacao[1] == QUANTOS_ENCONTRAR_UM)
            {
                printf("  Jogador 2 venceu! Com %i tentativas.\n", cont_tentativas[1]);
            }
            else
            {
                printf(" Empate! Com total de %i tentativas.\n", cont_tentativas[1]);
            }
        }
        break;

        case 3:
            // escolha de sair do minigame
            break;

        default:
            printf(" # ERRO: modo de jogo invalido!");
            continue;
        }
        printf("\n Digite [0] para jogar sair: ");
        scanf("%i", &jogar_novamente);
    }
    printf("\n   Saindo do minigame.......\n\n");
    return 0;
}
