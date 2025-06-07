#include <stdio.h>

#define TRUE 1

int main(void) {
    int num;

    while (TRUE) {
        printf("\n = = = = = = = QUEM EH PRIMO? = = = = = = =\n");
        printf(" => Informe um numero: ");
        scanf("%i",&num);

        int cont = 0;
            for (int i = 1 ; i <= num; i++) {
                if (num % i == 0) {
                    cont++;
                }
            }
            
            if (cont == 2) {
                printf("Eh primo");
            } else {
                printf("Nao eh primo");
            }
                   
        if (num == 0) {
            printf("\n Saindo.... ");
            break;    
        }
    }
    return 0;
}
