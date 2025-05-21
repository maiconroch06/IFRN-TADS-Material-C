//junto com LsRep1 20/05/2025 Soma pares - al
#include <stdio.h>

int main (void) {
    int n = 10;
    int somatorio = 0;

    while (n <= 50) {
        if (n % 2 == 0) {
            somatorio = somatorio + n;    
            
        }
        n = n + 1;
    }
    printf("\nSomatorio: %i\n\n",somatorio);

    return 0;
}