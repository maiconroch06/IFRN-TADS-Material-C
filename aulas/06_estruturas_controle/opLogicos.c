//Os "valores logicos" (V ou F) que são != de 0 são verdadeiros, os que são falsos é igual a 0.
//Tabela vdd para esses operadores abaixo, onde V = 1 e F = 0.
//a&&b: a,b podem ser igual a um numero n > 0 para definir que é verdadeiro, mas seu valor logico na sentença deve ser 1 ou 0.
//E, AND: &&.
//OU, OR: ||.
//NAO, NOT: !.

#include <stdio.h>

    #define V 1
    #define F 0

int main (void) {

    printf("\n\n - - TABELA VERDADE - -");
    printf("\n-----------------------");
    printf("\n  a    b   |   a && b");
    printf("\n-----------------------");
    printf("\n  %i    %i   |      %i", F, F, F && F);
    printf("\n  %i    %i   |      %i", F, V, F && F);
    printf("\n  %i    %i   |      %i", V, F, F && F);
    printf("\n  %i    %i   |      %i", V, V, F && V);

    printf("\n\n - - TABELA VERDADE - -");
    printf("\n-----------------------");
    printf("\n  a    b   |   a || b");
    printf("\n-----------------------");
    printf("\n  %i    %i   |      %i", F, F, F || F);
    printf("\n  %i    %i   |      %i", F, V, F || F);
    printf("\n  %i    %i   |      %i", V, F, F || F);
    printf("\n  %i    %i   |      %i", V, V, F || V);
    
// O que ocorre quando coloca um
    printf("\n\n NOT(0): %i", !0);
    printf("\n NOT(1): %i", !1);
    printf("\n NOT(2): %i", !2);
    printf("\n NOT(10): %i\n\n", !10);
    

    //printf(" -> (num1 == num2) && num3 > 0: %i\n", num1 == num2 && num3 > 0);

    return 0;
}