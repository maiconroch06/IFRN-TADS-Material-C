#include <stdio.h>

#define TRUE 1

int main(void) {
    int num;

    while (TRUE) {
        printf("\n = = = = = = = TABUADA = = = = = = =\n");
        printf(" => Informe um numero: ");
        scanf("%i",&num);
    
        for (int i = 0 ; i <= 10; i++) {
            printf(" %i X %i = %i\n",num,i,num*i);
        }
        
        if (num == 0) {
            printf("\n Saindo da tabuada.... ");
            break;    
        }
    }
    return 0;
}
