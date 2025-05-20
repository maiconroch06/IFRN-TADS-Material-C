//e da al8 e da ds8 e ds11 ds10_1

#include <stdio.h>
#include <math.h>

int main(void) {
    int num;

    printf("Informe um numero: ");
    scanf("%i",&num);

    if (num % 3 == 0 && num % 7 == 0) {
        printf("O numero %i e divisivel por 3 e por 7", num);
    } else {
        printf("O numero %i nao e divisivel por 3 e por 7", num);
    }

    return 0;
}