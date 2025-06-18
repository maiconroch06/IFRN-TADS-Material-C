#include <stdio.h>

#define QUANT_ALUNOS 20
#define QUANT_NOTAS 3

int main (void) {
    int pesos[QUANT_NOTAS] = {2, 3, 5};
    float soma_turma = 0, maior_media = 0, menor_media = 100;
    int reprovados_total = 0, reprovados_falta = 0;

    for (int i = 0; i < QUANT_ALUNOS; i++) {
        int quant_faltas;
        float notas[QUANT_NOTAS];
        float soma_notas = 0, soma_pesos = 0, media_final;

        printf(" Quantidade de faltas: ");
        scanf("%i",&quant_faltas);

        if (quant_faltas <= 60) {
            for (int j = 0; j < QUANT_NOTAS; j++) {
                printf(" Nota %i: ", j + 1);
            }
            
            
        } else {
            printf("\n Sinto muito, voce foi reprovado...");
        }
    }
    return 0;
}