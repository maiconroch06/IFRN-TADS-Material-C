#include <stdio.h>

#define QUANT_ALUNOS 20
#define QUANT_NOTAS 3
float med;

int main (void) {

    for (int i = 0; i < QUANT_ALUNOS; i++) {
        int quant_faltas;
        printf("\n ========= DADOS DO ALUNO %i =========\n", i + 1);
        printf(" -> Informe suas faltas: ");
        scanf("%i",&quant_faltas);

        //Se tiver +d 60 faltas reprova
        if (quant_faltas <= 60) {
            float notas[QUANT_NOTAS];

            for (int i = 0; i < QUANT_NOTAS; i++) {
                printf(" -> Nota %i: ", i + 1);
                scanf("%f",&notas[i]);
                }

                //Media Ponderada
                for (int j = 0; j < QUANT_NOTAS; j++) {
                    int pesos[3] = {2, 3, 5};
                    
                    float som_notas = 0;
                    som_notas += (notas[j] * pesos[j]);

                    float som_pesos = 0;
                    som_pesos += pesos[j];

                    med = som_notas / som_pesos;

                    //Se passou por nota ou não
                    if (med >= 60) {
                        printf("\n * Media Final: %.2f",med);
                        printf("\n * Parabens, voce foi aprovado!");
                    } else {
                        printf("\n * Media Final: %.2f",med);
                        printf("\n * Sinto muito, voce foi reprovado.");
                    }
                }
        } else {
            printf("\n  * Sinto muito, voce foi reprovado.");
        }
    }

    printf("\n ========= RELATORIO =========\n");
    printf(" => Media da turma: %.2f", med / QUANT_ALUNOS);
    
    return 0;
}