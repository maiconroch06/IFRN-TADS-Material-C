#include <stdio.h>

int main (void) {
    int a,b;

    printf(" - - - Compare dois numeros em ordens decrescente - - -\n");

    printf("Informe o primeiro numero: ");
    scanf("%i",&a);
    
    printf("Informe o segundo numero: ");
    scanf("%i",&b);

    if (a > b) {
        //Metodo swap, troca.
        int aux = a;
        a = b;
        b = aux;
        printf("\n -> O valores em ordens decrescentes sao: %i e %i",a,b);

    } else if (b > a) {
        printf("\n -> O valores em ordens decrescentes sao: %i e %i",a,b);

    } else {
        printf(" #ERRO: os valores informados sao iguais!");
    }
    return 0;
}
