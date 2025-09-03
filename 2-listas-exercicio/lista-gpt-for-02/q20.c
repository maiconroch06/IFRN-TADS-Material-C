#include <stdio.h>
/*
Gere todos os pares (i, j) onde 1 ≤ i < j ≤ n e a soma i + j seja um número primo.
*/
int ehPrimo(int num) {
    if (num < 2) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Pares (i, j) onde 1 <= i < j <= %d e i + j é primo:\n", n);

    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (ehPrimo(i + j)) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    return 0;
}