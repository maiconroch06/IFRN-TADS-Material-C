#include <stdio.h>
/*
Crie uma função que recebe um número inteiro e retorna 1 (um) se este número for par e 0 (zero) 
caso o número seja ímpar.
*/

int par_impar(int num);

int main() {
    int num;

    printf(" Informe um numero: ");
    scanf("%i", &num);

    if (par_impar(num) == 1){
        printf(" > Par");
    } else {
        printf(" > Impar");
    }
    
    return 0;
}

int par_impar(int num) {
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}