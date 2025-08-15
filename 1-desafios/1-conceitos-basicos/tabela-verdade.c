#include <stdio.h>
// Demonstre uam tabela verdade utilizando os valores logicos.
    #define V 1
    #define F 0

int main(void) {

    printf("\n\n   - - TABELA VERDADE - -");
    printf("\n --------------------------");
    printf("\n   a    b     |    a && b");
    printf("\n --------------------------");
    printf("\n   %i    %i   |      %i", F, F, F && F);
    printf("\n   %i    %i   |      %i", F, V, F && F);
    printf("\n   %i    %i   |      %i", V, F, F && F);
    printf("\n   %i    %i   |      %i", V, V, F && V);

    printf("\n\n   - - TABELA VERDADE - -");
    printf("\n --------------------------");
    printf("\n   a    b     |    a || b");
    printf("\n --------------------------");
    printf("\n   %i    %i   |      %i", F, F, F || F);
    printf("\n   %i    %i   |      %i", F, V, F || F);
    printf("\n   %i    %i   |      %i", V, F, F || F);
    printf("\n   %i    %i   |      %i", V, V, F || V);
    
    // O que ocorre quando coloca um !
    printf("\n\n NOT(0): %i", !F);
    printf("\n NOT(1): %i", !V);
    printf("\n NOT(2): %i", !2);
    printf("\n NOT(10): %i", !10);

    return 0;
}