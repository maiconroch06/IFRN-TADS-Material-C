/*
Desenvolva um programa estruturado em funções para cadastrar um conjunto de alunos que possuem as seguintes informações: matrícula, nome, idade, nota1 e nota2. O seu programa além de realizar o cadastro dos alunos, deve permitir a exibição das informações de um aluno específico, o relatório de informações de todos os alunos, modificar os valores das notas 1 e 2 de um determinado aluno, exibir a média de um dado aluno, exibir a média de todos os alunos da turma e calcular a média de um aluno específico. *cadastrar alunos de mais de uma turma*
*/

#include <stdio.h>

typedef struct Alunos {
    char nome[50];
    int matricola;
    int idade;
    double nota1;
    double nota2;
};

void escolha(int);
void cadastro(int, Alunos * aluno);
void exibir(aluno * aluno);

int main(void) {
    int n_alunos;

    printf(" Quantidade de alunos: ");
    scanf("%i", n_alunos);

            
    cadastro(n_alunos,);

    return 0;
}

void cadastro (int n_alunos, Alunos * aluno) {
    if (n_alunos > 0) {
        for (int i = 0; i < n_alunos; i++) {
            struct Alunos aluno[i];

            printf(" Matricola: ");
            scanf("%s", &aluno[i].nome);
            printf(" Nome: ");
            
            printf(" Idade: ");
            scanf("%i", &aluno[i].idade);
            printf(" Nota1: ");
            scanf("%s", &aluno[i].nota1);
            printf(" Nota2: ");
            scanf("%s", &aluno[i].nota2);
        }
    }
}

void modificar_notas (int);

