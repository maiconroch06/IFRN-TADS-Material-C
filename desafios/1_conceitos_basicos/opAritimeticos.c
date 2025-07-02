#include <stdio.h>

int main(void) {
    int num1, num2,soma,sub,mult,div;

    printf("\n====================================================================\n\n");
    printf("- - - - - - - - - - - - Calcule dois numeros - - - - - - - - - - - -\n\n");
    printf(" -> Digite o primeiro numero: ");
    scanf("%i",&num1);

    printf("\n -> Digite o segundo numero: ");
    scanf("%i",&num2);
 
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    printf("\n     # As operacoes eh:"); 
    printf("\n--------------------------------------------------------------------\n");

    printf("                         ==> %i + %i = %i <==\n\n",num1, num2, soma);

    printf("                         ==> %i - %i = %i <==\n\n",num1, num2, sub);

    printf("                         ==> %i * %i = %i <==\n\n",num1, num2, mult);

    printf("                         ==> %i / %i = %i <==\n",num1, num2, div);

    printf("--------------------------------------------------------------------");

    printf("\n====================================================================");
    return 0;
}

