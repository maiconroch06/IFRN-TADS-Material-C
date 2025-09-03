//Dado um número n, imprima todos os divisores de n.
#include <stdio.h>

int main(void) {
    int n;

    printf("Informe um numero: ");
    scanf("%i",&n);
    
    for (int i = 0; n % i == 0; i++) {
        printf("%i\n",i);
    }

    return 0;
}
