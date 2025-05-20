#include <stdio.h>

int main (void) {
    int n1,n2,a,b;

    printf(" - - - Compare os numeros em ordens crescente - - -\n");
    printf("Informe o primeiro numero: ");
    scanf("%i",&n1);
    printf("Informe o segundo numero: ");
    scanf("%i",&n2);

    if (n1 > n2) {
        b = n1;
        a = n2;
        printf("\n -> O valores em ordens crescentes sao: %i e %i",a,b);

    } else if (n2 > n1) {
        b = n2;
        a = n1;
        printf("\n -> O valores em ordens crescentes sao: %i e %i",a,b);

    } else {
        printf(" #ERRO: os valores informados sao iguais!");
    }
    return 0;
}
