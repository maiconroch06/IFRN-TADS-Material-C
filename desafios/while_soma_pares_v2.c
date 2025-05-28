//junto com LsRep1 20/05/2025 Soma pares - al
#include <stdio.h>

int main (void) {
    int n = 10;
    int somatorio = 0;

    while (n <= 50) {
            somatorio = somatorio + n;   
            n = n + 2;
        }
        n = n + 1;
    printf("\nSomatorio: %i",somatorio);

    return 0;
}