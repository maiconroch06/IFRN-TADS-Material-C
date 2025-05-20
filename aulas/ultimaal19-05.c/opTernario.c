//aula de 19/05/2025

#include <stdio.h>

int main (void) {
    int num1,num2;

    printf("informe num1:");
    scanf("%i",&num1);

    printf("informe num2:");
    scanf("%i",&num2);

//    if (num1 >= num2)
//    {
//        printf("num1 >= num2");
//    } else {
//        printf("num1 < num2");
//    }

    num1 >= num2? printf("\nnum1 >= num2") : printf("\nnum1 < num2");

    int resultado = num1 >= num2? num1 - num2 : num1 + num2;

    printf("\n\nRESULTADO: %i",resultado);
    
    return 0;
}