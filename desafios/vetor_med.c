#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int n_alunos;
    
    printf(" -> Quantidade de alunos: ");
    scanf("%i",&n_alunos);

    if (n_alunos > 0) {
        float notas1 [n_alunos];
        float notas2 [n_alunos];
        float medias [n_alunos];
        float media_geral;

        for (int i = 0; i < n_alunos; i++) {
            notas1[i] = 10 * (rand() / (float) RAND_MAX);
            notas2[i] = 10 * (rand() / (float) RAND_MAX);

            medias[i] = (notas1[i] + notas2[i]) / 2;
            media_geral += medias[i] / n_alunos;

            printf("\n\n ##### ALUNO %i #####", i + 1);
            printf("\n -> Nota 1: %.2f", notas1[i]);
            printf("\n -> Nota 2: %.2f", notas2[i]);
            printf("\n -> Media: %.2f", medias[i]);

        }

        printf("\n\n Media da turma: %.2f", media_geral);
    } else {
        printf(" Erro ");
    }

    return 0;
}