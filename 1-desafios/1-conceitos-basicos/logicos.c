#include <stdio.h>
// Demonstrando a tabela verdade utilizando os valores logicos.
    #define V 1
    #define F 0

int main(void) {

    printf("\n\n - - TABELA VERDADE - -");
    printf("\n -----------------------");
    printf("\n   a    b   |   a && b");
    printf("\n -----------------------");
    printf("\n   %i    %i   |      %i", F, F, F && F);
    printf("\n   %i    %i   |      %i", F, V, F && F);
    printf("\n   %i    %i   |      %i", V, F, F && F);
    printf("\n   %i    %i   |      %i", V, V, F && V);

    printf("\n\n - - TABELA VERDADE - -");
    printf("\n -----------------------");
    printf("\n   a    b   |   a || b");
    printf("\n -----------------------");
    printf("\n   %i    %i   |      %i", F, F, F || F);
    printf("\n   %i    %i   |      %i", F, V, F || F);
    printf("\n   %i    %i   |      %i", V, F, F || F);
    printf("\n   %i    %i   |      %i", V, V, F || V);
    
    // O que ocorre quando coloca um
    printf("\n\n NOT(0): %i", !0);
    printf("\n NOT(1): %i", !1);
    printf("\n NOT(2): %i", !2);
    printf("\n NOT(10): %i\n\n", !10);

    //printf(" -> (num1 == num2) && num3 > 0: %i \n", num1 == num2 && num3 > 0);

    return 0;
}