#include <stdio.h>
/*
    Uma determinada empresa pretende contrair um empréstimo bancário de um determinado valor 
    com o objetivo de captar recursos necessários para projetar e produzir um novo produto a ser inserido no mercado. Para isso, a empresa deseja calcular quantos anos seriam necessários para finalizar o pagamento do empréstimo sabendo que o banco cobra 3,5% de juros ao mês para os primeiros 12 meses de dívida e 4,2% ao mês para os meses subsequentes. A empresa pretende realizar pagamentos mensais fixos no valor de 10% da dívida inicial.

    Crie um programa em linguagem C que calcule e exiba quantos anos ou meses serão necessários para o pagamento total da dívida.

*/

int main(void) {
    float emprestimo_bancario, dividaAtual, pagamentoMensal;
    float juros;
    int meses = 0;
    
    printf(" ===================================================\n");
    printf("                 EMPRESTIMO BANCARIO                \n");
    printf(" ===================================================\n\n");
    printf(" -> Emprestimo de R$");
    scanf("%f", &emprestimo_bancario);

    dividaAtual = emprestimo_bancario;
    pagamentoMensal = emprestimo_bancario * 0.10;

    while (dividaAtual > 0) {

        if (meses <= 12) {
            juros = 0.035;
        } else {
            juros = 0.042;
        }
        
        // Aplica juros do mês
        dividaAtual += dividaAtual * juros;

        // Subtrai o pagamento mensal
        dividaAtual -= pagamentoMensal;

        // Garante que não fique negativo no fim
        if (dividaAtual < 0) {
            dividaAtual = 0;
        }
        meses++;
    }
        
    int anos = meses / 12;
    int restoMeses = meses % 12;

    printf("\n ===================================================");
    printf("\n                 EMPRESTIMO BANCARIO                ");
    printf("\n ===================================================\n");
    printf("\n Pagamento total concluido em: ");

    if (anos > 0) {
        printf("%i ano(s) e ", anos);
    }
    printf("%i mes(es)\n", restoMeses);

    printf("\n ===================================================");
    return 0;
}