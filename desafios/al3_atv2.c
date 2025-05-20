#include <stdio.h>

int main (void) {
    float n1,n2,n3;

    printf("Informe o primeiro numero: ");
    scanf("%f",&n1);
    printf("Informe o segundo numero: ");
    scanf("%f",&n2);
    printf("Informe o numero: ");
    scanf("%f",&n3);

    if (n1 > n2 && n2 > n3) {
        printf("\n Os numeros em ordem descresente sao: %.2f, %.2f, %.2f",n1,n2,n3);

    } else if (n2 > n1 && n1 > n3) {
        printf("\n Os numeros em ordem descresente sao: %.2f, %.2f, %.2f",n2,n1,n3);

    } else if (n3 > n2 && n2 > n1) {
        printf("\n Os numeros em ordem descresente sao: %.2f, %.2f, %.2f",n3,n2,n1);

    } else if (n1 > n3 && n3 > n2) {
        printf("\n Os numeros em ordem descresente sao: %.2f, %.2f, %.2f",n1,n3,n2);

    } else if (n3 > n1 && n1 > n2) {
        printf (" Os numeros em ordem descresente sao: %.2f, %.2f, %.2f",n3,n1,n2);

    } else if (n2 > n3 && n3 > n2) {
        printf (" Os numeros em ordem descresente sao: %.2f, %.2f, %.2f",n1,n3,n2);
       
    } else {
        printf(" #ERRO os valores sao iguais!");
    }
    return 0;
}
