#include <stdio.h>

int main (void) {
    int num;

    printf("Informe numero: ");
    scanf("%i",&num);

    for (int i = 1; i <= num; i++) {
        
        if (i % 5 != 0) {
            printf(" %i\n",i * i);
        }
    
    }
    
    return 0;
}