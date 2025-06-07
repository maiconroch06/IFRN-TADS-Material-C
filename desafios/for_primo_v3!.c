#include <stdio.h>

#define TRUE 1

int main(void) {
    int num;

    while (TRUE) {
        printf("\n = = = = = = = QUEM EH PRIMO? = = = = = = =\n");
        printf(" => Informe um numero: ");
        scanf("%i",&num);


            for (int i = 2 ; i <= 7; i++) {
                if (num % i == 0) {
                    printf("Nao eh primo");
                    //return 0;
                }
            }

        printf("Eh primo");
    
        if (num == 0) {
            printf("\n Saindo.... ");
            break;    
        }
    }
    return 0;
}
