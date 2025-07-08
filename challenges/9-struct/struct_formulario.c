#include <stdio.h>
#include <stdlib.h>

struct Funcionario
{
    int idade;
    int rg;
    float salario;
};

int main(void)
{
    int n_funcionarios;

    printf("\n Digite o numero de funcionarios: ");
    scanf("%i", &n_funcionarios);

    if (n_funcionarios)
    {
        struct Funcionario funcionario[n_funcionarios]; // estou usando a variavel do tipo Funcionario para uma outra variavel
        for (int i = 0; i < n_funcionarios; i++)
        {
            printf(" ========== FORMULARIO %i ==========\n", i + 1);
            printf(" -> Idade: ");
            scanf("%i", &funcionario[i].idade);
            printf(" -> RG: ");
            scanf("%i",&funcionario[i].rg);
            printf(" -> Salario: R$");
            scanf("%f", &funcionario[i].salario);
            printf("\n ===================================\n");

        }

        printf("\n Informacoes dos funcionarios:\n\n");

        for (int i = 0; i < n_funcionarios; i++)
        {
            printf(" ********** FUNCIONARIO %i ***********\n", i + 1);
            printf("  Idade: %i\n", funcionario[i].idade);
            printf("  RG: %i\n", funcionario[i].rg);
            printf("  Salario: %.2f\n", funcionario[i].salario);
            printf(" ***********************************\n");
        }
    }
    return 0;
}

// em todo codigo em que eu quiser usar a struct posso criar um arquivo separado somente com a struct. Se eu quiser aplicar dentro de um outro codigo, devo inserir #include "nome_do_arquivo.h"
// em outro arquivo o contexto deste comentario dbaixo. Pesquisar sobre!
/* ifndef _FUNCIOARIO_H_
   #define _FUNCIOARIO_H_
   .
   . 
   .
   #endef
    breve explicação: evitar com que exista mais de uma struct (com o mesmo nome) para nao replicar o codigo aqui nesse arquivo como se tivesse adicionado duas struct em algum loval deste codigo
*/