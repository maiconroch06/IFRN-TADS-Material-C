//4) Faça um programa em linguagem C que receba o valor de três notas entre 0 e 100 de um
//determinado aluno e imprima o valor da média aritmética de suas notas.

#include <stdio.h>

int main() {
    float n1,n2,n3;

    printf(" ----> Informe sua Nota de 0 a 100 <---- ");
    printf("\n -> Nota 1: ");
    scanf("%f",&n1);
    printf(" -> Nota 2: ");
    scanf("%f",&n2);
    printf(" -> Nota 3: ");
    scanf("%f",&n3);

    printf("\n Nota final: %.1f",(n1+n2+n3)/3);
//  printf("\n Nota final: %.1i",(int)(n1+n2+n3)/3);  

    return 0;
}