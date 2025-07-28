#include <stdio.h>
/*
Em uma determinada instituição de ensino, o sistema de avaliação das disciplinas semestrais de 
100 aulas ocorre da seguinte maneira: i. são realizadas três avaliações; ii. a nota final é calculada a 
partir da média ponderada de pesos 2, 3 e 5, respectivamente; iii. o aluno é aprovado se obtiver 
nota final superior ou igual a 60 e tiver comparecido a pelo menos 40 aulas. Sabendo disso, crie 
um programa em linguagem C que receba três notas e o número de aulas frequentadas de todos 
os alunos de uma turma semestral de 20 alunos. Para cada aluno, deve-se exibir o valor de sua 
média final e informar, para cada um deles, se foi aprovado ou não. Adicionalmente, o programa 
deve apresentar um relatório que contém os valores da maior e menor nota final, a média da nota 
final da turma, o total de alunos reprovados e a porcentagem de alunos reprovados por falta.
*/
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