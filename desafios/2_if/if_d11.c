#include <stdio.h>

int main(void) {
    float num1, num2, num3;

//scanf("%i,%i,%i",&num1,&num2,&num3);

    printf("Informe o primeiro numero: ");
    scanf("%f",&num1);

    printf("Informe o segundo numero: ");
    scanf("%f",&num2);
    
    printf("Informe o terveiro numero: ");
    scanf("%f",&num3);

    if (num1 > num2 && num3) {
        printf("Numero 1 eh maior \n");

    } else if (num2 > num1 && num3) {
        printf("Numero 2 eh maior \n");

    } else if (num3 > num1 && num2) {
        printf("Numero 3 eh maior \n");

    } else {
        printf("Os numeros sao iguais \n");
    }


    return 0;
}