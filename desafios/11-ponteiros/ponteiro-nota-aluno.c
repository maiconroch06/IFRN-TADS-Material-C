#include <stdio.h>

typedef struct Notas {
    float nota1;
    float nota2;
};

int main(void) {
    float numero  = 2.5;
    float * ptrFloat = NULL;  // armazena um endereço

    // armazenando um endereco
    ptrFloat = &numero;

    printf("\n * Conteudo de 'numero': %.2f", numero);
    printf("\n * Endereco de 'numero': %x", &numero);
    printf("\n * Endereco de 'ptrFloat': %x", &ptrFloat);
    printf("\n * Conteudo de 'ptrFloat': %x", ptrFloat);
    printf("\n * Conteudo de 'numero' via ponteiro: %.2f", *ptrFloat);

    // Operador de deferenciacao: retorna o conteúdo
    // do endereço que o ponteiro armazena
    *ptrFloat = numero * 10;

    printf("\n\n * Conteudo de 'numero': %.2f", numero);
    printf("\n * Conteudo de 'numero' via ponteiro: %.2f", *ptrFloat);

    struct Notas notas_aluno;

    notas_aluno.nota1 = 8.7;
    notas_aluno.nota2 = 7.4;

    struct Notas * ptrNotas;
    ptrNotas = &notas_aluno;

    printf("\n\n * Nota 1 da struct: %f", notas_aluno.nota1);
    printf("\n * Nota 1 via ponteiro: %f", ptrNotas->nota1);
    printf("\n * Nota 1 via ponteiro: %f", (*ptrNotas).nota1);

    return 0;
}