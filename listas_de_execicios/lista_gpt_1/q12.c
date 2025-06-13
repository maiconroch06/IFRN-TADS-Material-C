#include <stdio.h>
//Leia n e calcule o fatorial de n.
int main() {
    int n,fatorial = 1;

    printf("Digite o numero: ");
    scanf("%i", &n);

    if (n >= 0) {    
        printf("%i! = ",n);

        for (int i = n; i > 0; i--) {
            printf("%i * ",i);
            fatorial *= i;
        }
        printf("0 = %i",fatorial);

    } else {
        printf(" #ERRO: numero menor que 0");
    }

    return 0;
}
