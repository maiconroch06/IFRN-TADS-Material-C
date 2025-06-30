//gerar uma matriz 10x10, dois jogadores que descobrir as posições dos numeros 1 dentro da matriz que gera aleatorio
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    
    //define a quantidade de jogadores
    int quant_jogadores;
    printf(" -> Quantidade de jogadores (> 0): ");
    scanf("%i", &quant_jogadores);

    if (quant_jogadores > 0) {
        //definir tamanho da matriz
        int linhas, colunas;
        printf(" -> Defina o tamanho da matriz (i j): ");
        scanf("%i %i", &linhas, &colunas);

        if (linhas == colunas) {
            //definir quantidade de bombas (representado por 1)
            int n_bombas;
            int limite_bombas = (int) ceil((float) (linhas * colunas) / 2);
            printf(" - - - Quantidade de bombas de 1 ate %i - - -\n", limite_bombas);
            printf(" -> Numero de bombas: ");
            scanf("%i", &n_bombas);

            if (n_bombas > 0 && n_bombas < limite_bombas){               
                //inicio do jogo
                int jogador = 0; //quem esta jogando?
                do {
                    printf(" A vez é do Jogador %i", jogador + 1);
                    do {
                        //exibir a matriz do jogo
                        int matriz[linhas][colunas] = {0};

                        for (int i = 0; i < linhas; i++){
                            for (int j = 0; j < colunas; j++)
                            {
                                printf("%i",matriz[i][j]);
                            }
                            
                        }
                        

                    } while (bombas_definidas);
                    

                    
                    
                    
                    jogador++;
                } while (jogador < quant_jogadores);
                


                
            } else {
                printf(" # ERRO: a quantidade de bombas deve ser de 1 ate %i!", limite_bombas);
            }

        } else {
            printf(" # ERRO: as quantidades de linhas e colunas devem ser iguais e superiores a um!");
        }

    } else {
        printf(" # ERRO: quantidade de jogadores deve ser superior a 0!");
    }

    return 0;
}