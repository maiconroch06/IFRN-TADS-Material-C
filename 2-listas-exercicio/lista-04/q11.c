#include <stdio.h>
/*
Faça um programa em linguagem C que leia um vetor de 13 elementos inteiros, que corresponde ao Gabarito de um teste da loteria esportiva. Cada posição do vetor pode conter os seguintes valores: 1 (coluna 1), 2 (coluna 2) e 3 (coluna do meio). Em seguida, leia os cartões de um número determinado de apostadores. Para cada apostador, deve ser informado um vetor de Respostas de 14 posições. O programa deve verificar e exibir em tela o número de acertos, comparando o vetor de Gabarito com o vetor de Respostas. Se o apostador tiver 13 acertos, a mensagem “Ganhador” deve ser exibida
*/
int main() {
    int gabarito[13];
    int n_apostadores;

    // Leitura do gabarito
    printf(" -> Digite o gabarito (13 numeros entre 1 e 3):\n");
    for (int i = 0; i < 13; i++) {
        do {
            printf(" > %02d: ", i + 1);
            scanf("%i", &gabarito[i]);
        } while (gabarito[i] < 1 || gabarito[i] > 3);
    }

    // Leitura do número de apostadores
    printf("\n -> Digite o numero de apostadores: ");
    scanf("%d", &n_apostadores);

    for (int a = 0; a < n_apostadores; a++) {
        int respostas[14];
        int acertos = 0;

        printf("\n ** Apostador %d:\n", a + 1);
        printf(" > Digite as 14 respostas (numeros entre 1 e 3):\n");
        for (int i = 0; i < 14; i++) {
            do {
                printf(" %02d: ", i + 1);
                scanf("%d", &respostas[i]);
            } while (respostas[i] < 1 || respostas[i] > 3);
        }

        // Comparação dos 13 primeiros jogos
        for (int i = 0; i < 13; i++) {
            if (respostas[i] == gabarito[i]) {
                acertos++;
            }
        }

        printf(" # Acertos: %d\n", acertos);
        if (acertos == 13) {
            printf(" > Ganhador <\n");
        }
    }

    return 0;
}