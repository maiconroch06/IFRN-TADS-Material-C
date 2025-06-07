//Leia n e calcule o fatorial de n.

#include <stdio.h>

int main() {
    int n,fatorial;
    printf("Digite o numero: ");
    scanf("%i", &n);

    printf("%i! = ",n);

    for (int i = n; i > 0; i--) {
        fatorial = fatorial * i-1;
        printf("%i! = ",i);
        i--;
    }
    printf("= %i",fatorial);

    return 0;
}
