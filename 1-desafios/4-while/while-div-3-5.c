#include <stdio.h>

int main(void) {
    int n = 1;

    while (n <= 100) {
        if (n % 3 == 0 && n % 5 == 0) {
            printf("%i ",n);
        }
        n = n + 1;
    }
    
    return 0;
}

