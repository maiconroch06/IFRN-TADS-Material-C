#include <stdio.h>
//Verifique se um número é primo (sem usar break).
int main() {
    int num;

    for (int i = 0; i <= num; i++) {
        printf("Digite um numero: ");
        scanf("%i",&num);

        if (num > 0 && num <= 7) {
            if (num == 2 && num == 3 && num == 5 && num == 7) {
                printf(" Eh primo");
            } else {
                printf("Nao eh primo");
                continue;
            }
        } else if (num > 7) {
            if (num % 2 == 0 && num % 3 == 0 && num % 5 == 0 && num % 7 == 0) {
                printf("Nao eh primo");
                continue;
            } else if (num % num == 0 && num % 1 == 0) {
                printf("Eh primo");
            }
        } else {
            printf("#ERRO: numero menor ou igual a zero\n");
        continue;
        }

    }
    
    return 0;
}
