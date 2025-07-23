#include <stdio.h>

int main (void) {
    int num;

    printf("Informe numero: ");
    scanf("%i",&num);

    for (int i = 1; i <= num; i++) {
        printf(" %i\n",i * i);
    }
    
    return 0;
}