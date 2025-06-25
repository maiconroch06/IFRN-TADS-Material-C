//gerar uma matriz 10x10, dois jogadores que descobrir as posições dos numeros 1 dentro da matriz que gera aleatorio
#include <stdio.h>
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
        printf(" -> Defina o tamanho da matriz (i == j): ");
        scanf("%i %i", &linhas, &colunas);

        //espaços da matriz
        int espaco_mtz = linhas * colunas;

        if (linhas == colunas) {
            //definir quantidade de bombas (representado por 1)
            int n_bombas;
            int limite_bombas = linhas
            printf(" - - - Quantidade de bombas entre 0 e %i - - -\n",);
            printf(" -> Numero de bombas: ");
            scanf("%i", &n_bombas);

            if (n_bombas > 0 && n_bombas < (float) (linhas * colunas) / 2){
                
                
            } else {
                printf(" # ERRO: a quantidade de bombas deve ser entre 0 e %i!", (float) (linhas * colunas) / 2);
            }

        } else {
            printf(" # ERRO: as quantidades de linhas e colunas devem ser iguais e superiores a um!");
        }

    } else {
        printf(" # ERRO: quantidade de jogadores deve ser superior a 0!");
    }

    return 0;
}