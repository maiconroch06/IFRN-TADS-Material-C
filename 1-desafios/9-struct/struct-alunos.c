#include <stdio.h>

#define N_MAX_ALUNOS 100

    typedef struct Aluno {
        char nome[50];
        int matricula;
        float media_final;
    };
    
int main (void) {
    int n_alunos;

    printf(" -> Numeros de alunos: ");
    scanf("%i",&n_alunos);

    if (n_alunos > 0 && n_alunos <= N_MAX_ALUNOS) {
        
        struct Aluno alunos[n_alunos];

        printf(" ========= CADASTRO DE ALUNOS =========\n"); 
        for (int i = 0; i < n_alunos; i++)
        {
            printf("\n -------> Aluno <-------\n");

            printf(" -> Nome: ");
            scanf("%s", &alunos[i].nome);

            printf(" -> Matricola: ");
            scanf("%i", &alunos[i].matricula);

            printf(" -> Media Final: ");
            scanf("%f", &alunos[i].media_final);
        }
        
        printf("\n ========= ALUNOS CADASTRADOS =========\n"); 
        for (int i = 0; i < n_alunos; i++)
        {
            printf(" # Matricola: %i\n", alunos[i].matricula);
            printf(" # Nome: %s\n", alunos[i].nome);
            printf(" # Media Final: %.2f\n", alunos[i].media_final);
            printf(" # Status: %s", alunos[i].media_final >= 6.0 ? "APROVADO" : "REPROVADO");

            printf("\n -------------------------------------\n");
        }
    } else {
        printf(" # ERRO: quantidade fora do escopo!");
        return 1;
    }

    return 0;
}