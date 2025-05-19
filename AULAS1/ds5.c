// saber se a pessoa é menor ou maior de idade 

#include <stdio.h>

int main(void) {
    int idade;

    printf(" -> Infomer sua idade: ");
    scanf("%i", &idade);

    if (idade >= 18) {
        printf("\n -> Voce e maior de idade <-");
    } else {
        printf("\n -> Voce e menor de idade <-");
    }

    return 0;
}