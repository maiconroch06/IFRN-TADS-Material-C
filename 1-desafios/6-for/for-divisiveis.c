#include <stdio.h>

int main(void) {

    int cont = 1;

    for (int i = 100; i >= 40; i--) {
        if (i % 7 == 0) {
            printf("\n %02d: eh divisivel por %i", cont, i);
            cont++;
        }
    }
    return 0;
}
