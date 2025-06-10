#include <stdio.h>

int main(void) {

        for (int i = 1; i <= 120; i++) {
            int quantidade_divisores = 0;

            for (int j = 1; j <= 120; j++) {
                if (i % j == 0) {
                    quantidade_divisores++;
                }
            }
            if (quantidade_divisores == 2) {
                printf(" %i", i);
            }
        }

    return 0;
}