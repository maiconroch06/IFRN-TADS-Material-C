//Leia uma quantidade n e depois n números, e calcule a média dos positivos e dos negativos separadamente.

#include <stdio.h>

int main() {
    int n,fatorial;
    char aux;

    printf("Digite o numero: ");
    scanf("%i", &n);
    fflush(stdin);
    scanf("%c",&aux);

    if (n >= 0) {    
        printf("%i! = ",n);

        for (int i = n; i > 0; i -= 1) {
            printf("%i * ",i);
            fatorial = fatorial * i;
        }
        printf("0 = %i",fatorial);

    } else {
        printf(" #ERRO: numero menor que 0");
    }

    return 0;
}
