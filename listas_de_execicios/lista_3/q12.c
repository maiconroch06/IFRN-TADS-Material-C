#include <stdio.h>

#define QUANT_ALUNOS 20
//Pesos para nota_final
#define PESO1 2
#define PESO2 3
#define PESO3 5

int main (void) {
    double nota1,nota2,nota3,quant_faltas; //entrada que cada aluno insere
    double som_notas_finais = 0;

    for (int i = 1; i < QUANT_ALUNOS; i++) {
        printf("\n ========= DADOS DO ALUNO %i =========\n",i);
        printf(" -> Informe suas faltas: ");
        scanf("%lf",&quant_faltas); //total de aulas: 100. so passa se tiver +d40 presença

        //Se tiver +d 60 faltas reprova
        if (quant_faltas <= 60) { 
            printf(" -> Nota 1: ");
            scanf("%lf",&nota1);
            printf(" -> Nota 2: ");
            scanf("%lf",&nota2);
            printf(" -> Nota 3: ");
            scanf("%lf",&nota3);
            printf("\n");
            //Media Ponderada
            double med_pond = ((nota1 * PESO1) + (nota2 * PESO2) + (nota3 * PESO3)) / (PESO1 + PESO2 + PESO3);
            som_notas_finais += med_pond;

            //Se passou por nota ou não
            if (med_pond >= 60) {
                printf(" * Media Final: %lf",med_pond);
                printf("\n * Parabens, voce foi aprovado!");
            } else {
                printf(" * Media Final: %lf",med_pond);
                printf("\n * Sinto muito, voce foi reprovado.");
            }

        } else {
            printf("\n  * Sinto muito, voce foi reprovado.");
        }
        printf("\n");
    }

    printf(" ====== RELATORIO =====\n");
    printf(" => Media da turma: %lf", som_notas_finais / QUANT_ALUNOS);
    
    return 0;
}