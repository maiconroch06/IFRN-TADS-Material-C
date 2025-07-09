#include <stdio.h>

int main(void) {
    float numero = 2.5; 
    float * ptrFloat = NULL; // ponterio em float
    
    ptrFloat = &numero;

    printf(" Conteudo de 'numero': %.2f\n", numero);
    printf(" Edereco de 'numero': %x\n",&numero);
    printf(" Endereco de 'ptrFloat': %x\n",&ptrFloat);
    printf(" Conteudo de 'ptrFloat': %x\n", ptrFloat);
    printf(" Conteudo de 'numero' via poteiro: %.2f\n", *ptrFloat);

    *ptrFloat = numero * 10;

    printf(" Conteudo de numero: %.2f\n", numero);
    printf(" Conteudo de numero via poteiro: %.2f\n", *ptrFloat);
    
    return 0;
}