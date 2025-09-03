#include <stdio.h>
/*
Imprima todos os números palíndromos entre 100 e 999 (ex: 121, 191, 212...).
*/
int main() {
    int num, centena, dezena, unidade;

    printf("Números palíndromos entre 100 e 900:\n");

    for (num = 100; num <= 900; num++) {
        centena = num / 100;
        dezena = (num / 10) % 10;
        unidade = num % 10;

        if (centena == unidade) {
            printf("%d\n", num);
        }
    }

    return 0;
}