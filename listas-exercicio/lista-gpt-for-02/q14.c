#include <stdio.h>
//Desenhe um triângulo de asteriscos com base de n linhas.
int main() {
    int n;
    printf("Digite o numero de linhas: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("i");
        }
        printf("\n");
    }
    
    return 0;
}
