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
    int n_Funcionarios;

    printf("Digite o número de funcionários: ");
    scanf("%i", &n_Funcionarios);

    if (n_Funcionarios)
    {
        struct Funcionario funcionario[n_Funcionarios]; // estou usando a variavel do tipo Funcionario para uma outra variavel
        for (int i = 0; i < n_Funcionarios; i++)
        {
            printf("Digite a idade do funcionario %d: ", i + 1);
            scanf("%i", &funcionario[i].idade);
            printf("Digite o RG do funcionário %d: ", i + 1);
            scanf("%i", funcionario[i].rg);
            printf("Digite o salário do funcionario %d: ", i + 1);
            scanf("%d", &funcionario[i].salario);
        }

        printf("\nInformações dos funcionários:\n");

        for (int i = 0; i < n_Funcionarios; i++)
        {
            printf("Funcionário %i:\n", i + 1);
            printf("Idade: %i\n", n_Funcionarios[i].idade);
            printf("RG: %i\n", funcionario[i].rg);
            printf("Salário: %d\n", funcionario[i].salario);
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