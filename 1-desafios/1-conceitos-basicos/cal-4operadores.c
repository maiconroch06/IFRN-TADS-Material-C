#include <stdio.h>
// Faça um progrma em C que pegue dois numeros do usuario e faça as 4 operações basicas matematicas e as exiba.
int main(void) {
    int num1,num2,soma,sub,mult,div;

    printf("\n ==================== CALCUALNDO NUMEROS ====================");
    printf("\n -> Primeiro numero: ");
    scanf("%i",&num1);
    
    printf(" -> Segundo numero: ");
    scanf("%i",&num2);
 
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    printf("\n ----------------------- RESULTADOS -------------------------");
    printf("\n                  Soma      ==> %i + %i = %i",num1, num2, soma);
    printf("\n                Subtracao   ==> %i - %i = %i",num1, num2, sub);
    printf("\n              Multiplicacao ==> %i * %i = %i",num1, num2, mult);
    printf("\n                 Divisao    ==> %i / %i = %i",num1, num2, div);
    printf("\n ------------------------------------------------------------");

    return 0;
}

