#include <stdio.h>

int main (void) {
    int manoel = 150, josue = 110; //alturas cm

    for (int i = 1;  ; i++, manoel += 2, josue += 5) { 
        if (josue > manoel) {
            printf(" Para Josue passar de Manoel, se passara %i anos!", i);
            break;
        }
    }

   return 0;
}