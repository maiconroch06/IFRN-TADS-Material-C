#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int idade[50];

    srand(time(NULL));
    for (int i = 0; i < 50; i++){
        idade[i] = (1 + rand() % 50);
    }
    for (int i = 0; i < 50; i++) {
        printf("%i. Idade: %i\n", i + 1, idade[i]);
    }

    return 0;
}