//aula de 19/05/2025
//'\0' terminador de string, n eh imprimido
//arrumar a ultima parte tem que ordernar em ordem alfabetica!!!!!

#include <stdio.h>
#include <string.h>

int main (void) {
    char nome1[30];
    char nome2[30];
//    int num1;

//    printf("informe um numero: ");
//    scanf("%i",&num1);

//    fflush(stdin); 
    //limpar p fluxo de dados, pois o scanf anterior pode jogar o valor para o scanf dbaixo

    printf("informe seu nome1: ");
    scanf("%[^\n]",&nome1);

    printf("nome1: %s",nome1);

    fflush(stdin);

    printf("\ninforme seu nome2: ");
    scanf("%[^\n]",&nome2);

    printf("\nnome2: %s",nome2);

    // > 0: nome1 > nome2
    // == 0: nome1 == nome2
    // < 0: mome1 < nome2

    int cmp = strcmp(nome1,nome2);

    if(cmp > 0) {
        printf("%s     %s",nome2,nome1);

    } else if(cmp < 0) {
        printf("%s     %s",nome1,nome2);

    } else {
        printf("Strings iguais");
    }


    return 0;
}