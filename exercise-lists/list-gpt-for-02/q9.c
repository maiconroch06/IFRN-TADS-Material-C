//Imprima os 30 primeiros números ímpares.
#include <stdio.h>

int main(void) {
    for (int i = 1, cont = 0; cont < 30; i += 2, cont++) {
        printf("%i\n",i);
    }

    return 0;
}
