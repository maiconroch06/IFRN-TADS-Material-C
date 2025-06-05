#include <stdio.h>

int main (void) {
    int num1, n;
    int cont = 0;

    printf("- - - - - Multiplique - - - -\n");
    printf(" -> Numero 1: ");
    scanf("%i",&num1);
    printf(" -> Numero 2: ");
    scanf("%i",&n);

    printf("- - - - - - - - - - - - - - -\n");
    printf(" => RESULTADO:");
    for (int i = 0; i < n; i++) {
        cont += num1;
        
    }
    printf(" %i",cont);
    printf("\n- - - - - - - - - - - - - - -\n");


    return 0;
}