#include <stdio.h>
/*
 Desenvolva uma função que receba dois números inteiros como parâmetros e retorna o valor do 
menor deles.
*/

int compara_valores(float,float);

int main (void){
    float num1,num2;
    printf("\n ============== COMPARE COM O MANOR ==============\n");
    printf(" -> Informe num1: ");
    scanf("%f",&num1);

    printf(" -> Informe num2: ");
    scanf("%f",&num2);
        
    printf("\n ==================== RESULTADO ====================\n");

    float resultado = compara_valores(num1,num2);

    printf(" %.2f ", resultado);

    printf("\n ===================================================\n");

    return 0;
}

int compara_valores(float n1, float n2) {
    if (n1 > n2) {
        return n2;
    } else if (n1 < n2) {
        return n1;
    } else {
        return 0;
    }
}