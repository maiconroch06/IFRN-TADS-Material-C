//Solicite um número e imprima sua tabuada de 1 a 10
#include <stdio.h>

int main (void) {
    int i,n = 0;

    printf("infome num: ");
    scanf("%i",&n);

    for (i = 1; i <= 10; i++) {    
            printf("%i * %i = %i\n",n,i, n*i);
    }
    
    return 0;
}