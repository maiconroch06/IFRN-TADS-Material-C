#include <stdio.h>

#define TRUE 1

int main(void) {
    int num;

    while (TRUE) {
        printf("\n = = = = = = = QUEM EH PRIMO? = = = = = = =\n");
        printf(" => Informe um numero: ");
        scanf("%i", &num);

        if (num == 0) {
            printf("\n Saindo.... ");
            break;
        }

        int eh_primo = 1;
        if (num < 2) {
            eh_primo = 0;
        } else {
            for (int i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    eh_primo = 0;
                    break;
                }
            }
        }

        if (eh_primo) {
            printf("Eh primo\n");
        } else {
            printf("Nao eh primo\n");
        }
    }
    return 0;
}