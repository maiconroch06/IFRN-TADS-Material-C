#include <stdio.h>

int main (void) {
	float n1,n2;
    char op;

    printf(" - - - Calculadora! - - - ");

    printf("\n    + : Adicao");
    printf("\n    - : Subtracao");
    printf("\n    * : Multiplicacao");
    printf("\n    / : Divisao");

    printf("\n\n Qual operacao deseja fazer: ");
    scanf("%c",&op);
        
    printf("\n -> Informe o primeiro numero: ");
    scanf("%f",&n1);
    printf("\n -> Informe o segundo numero: ");
    scanf("%f",&n2);

    switch (op) {
        case '+':
            printf("\n -> %.1f + %.1f = %.1f",n1,n2,n1 + n2);
            break;
        case '-':
            printf("\n -> %.1f - %.1f = %.1f",n1,n2,n1 - n2);
            break;
        case '*':
            printf("\n -> %.1f * %.1f = %.1f",n1,n2,n1 * n2);
            break;
        case '/':
            if (op != 0) {
                printf("\n -> %.1f / %.1f = %.1f",n1,n2,n1 / n2);
            } else {
                printf("\n #ERRO: divisao por zero");
            }
            break;
    default:
            printf("\n #ERRO: valores fora do escopo");
        break;
    }
    return 0;
}