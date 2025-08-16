#include <stdio.h>
#include <stdlib.h>
/*
Em uma determinada instituição de ensino, o sistema de avaliação das disciplinas semestrais de 100 aulas ocorre da seguinte maneira: i. são realizadas três avaliações; ii. a nota final é calculada a partir da média ponderada de pesos 2, 3 e 5, respectivamente; iii. o aluno é aprovado se obtiver nota final superior ou igual a 60 e tiver comparecido a pelo menos 40 aulas. Sabendo disso, crie um programa em linguagem C que receba três notas e o número de aulas frequentadas de todos os alunos de uma turma semestral de 20 alunos. Para cada aluno, deve-se exibir o valor de sua média final e informar, para cada um deles, se foi aprovado ou não. Adicionalmente, o programa deve apresentar um relatório que contém os valores da maior e menor nota final, a média da nota final da turma, o total de alunos reprovados e a porcentagem de alunos reprovados por falta.
*/

typedef struct{
    int matricula; char nome[50];
    float nota1, nota2, nota3, MediaFinal;
} Aluno;


int main(){
    Aluno *alunos = NULL;
    int qtd_alunos = 0;
    do{
        int opcao;
        system("cls");
        printf("\n ============== SISTEMA ACADEMICO ==============");
        printf("\n > [1] Cadastro Aluno");
        printf("\n > [2] Exibir Relatorio");
        printf("\n > [0] Sair");
        printf("\n ===============================================");
        printf("\n > Opcao: ");
        scanf("%i", &opcao);
        
        switch (opcao){
            case 1: {
                system("cls");
                
                printf("\n > Informe a quantidade de alunos: ");
                scanf("%i", &qtd_alunos);
                alunos = (Aluno*) malloc(qtd_alunos * sizeof(Aluno));
                getchar(); // Limpar o \n do scanf
                
                for (int i = 0; i < qtd_alunos; i++){
                    system("cls");
                    printf("\n ================ ALUNO %02d ==================\n", i + 1);
                    printf(" > Nome: ");
                    scanf(" %[^\n]", &alunos[i].nome);
                    getchar(); // Limpar o \n do scanf
                    printf(" > Nota 1: ");
                    scanf("%f", &alunos[i].nota1);
                    printf(" > Nota 2: ");
                    scanf("%f", &alunos[i].nota2);
                    printf(" > Nota 3: ");
                    scanf("%f", &alunos[i].nota3);
                    
                    // Media Ponderada de Pesos 2, 3 e 5
                    alunos[i].MediaFinal = ((alunos[i].nota1 * 2) + (alunos[i].nota2 * 3) + (alunos[i].nota3 * 5)) / (2 + 3 + 5);
                    // Definindo a matricula do aluno
                    alunos[i].matricula = i;
                    
                    printf("\n > Media Final: %.2f", alunos[i].MediaFinal);
                    printf("\n\n ===============================================\n");
                    system("pause");
                    
                }
                
                break;
            }
        
            case 2: 
                system("cls");
                
                if (alunos == NULL || qtd_alunos == 0) {
                    printf("\n Nenhum aluno cadastrado!\n");
                    system("pause");
                    break;
                }
                
                float maior = alunos[0].MediaFinal;
                float menor = alunos[0].MediaFinal;
                float soma = 0;
                int reprovados_nota = 0;
                int reprovados_falta = 0;
                int total_faltas = 0;
                
                for (int i = 0; i < qtd_alunos; i++) {
                    system("cls");
                    printf("\n Aluno %02d: %s", i + 1, alunos[i].nome);
                    printf("  Media Final: %.2f", alunos[i].MediaFinal);

                    // Solicita número de aulas frequentadas para cada aluno
                    int aulas_freq;
                    printf("\n  > Aulas frequentadas: ");
                    scanf("%d", &aulas_freq);

                    // Verifica aprovação
                    if (alunos[i].MediaFinal < 60) {
                        reprovados_nota++;
                        printf("  Situacao: Reprovado por nota\n");
                    } else if (aulas_freq < 40) {
                        reprovados_falta++;
                        printf("  Situacao: Reprovado por falta\n");
                    } else {
                        printf("  Situacao: Aprovado\n");
                    }

                    // Atualiza maior/menor
                    if (alunos[i].MediaFinal > maior) maior = alunos[i].MediaFinal;
                    if (alunos[i].MediaFinal < menor) menor = alunos[i].MediaFinal;
                    soma += alunos[i].MediaFinal;
                    total_faltas += (100 - aulas_freq);
                    
                    system("pause");
                }

                float media_turma = soma / qtd_alunos;
                float perc_reprov_falta = (qtd_alunos > 0) ? (reprovados_falta * 100.0 / qtd_alunos) : 0;
                
                system("cls");
                printf("\n ============= RELATORIO FINAL =============\n");
                printf(" > Maior media final: %.2f\n", maior);
                printf(" > Menor media final: %.2f\n", menor);
                printf(" > Media da turma: %.2f\n", media_turma);
                printf(" > Total de alunos reprovados por nota: %d\n", reprovados_nota);
                printf(" > Total de alunos reprovados por falta: %d\n", reprovados_falta);
                printf(" > Porcentagem de alunos reprovados por falta: %.2f%%\n", perc_reprov_falta);
                printf(" > Total de alunos aprovados: %d\n", qtd_alunos - reprovados_nota - reprovados_falta);

                printf(" ===========================================\n");
                system("pause");
            
            break;
            case 0:
                free(alunos);
                return 0;
            
            
            default: 
                break;
        
        }

    } while (1);
    
    return 0;
}