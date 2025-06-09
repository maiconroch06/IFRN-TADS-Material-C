#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
    int maior1 = 0, maior2 = 0,cont = 0;
    int num;

    srand(time(NULL));
    printf(" -> Sequencia de numeros aleatorios: { ");
    for (int i = 0; i <= 15; i++) {
        // aparece os numero entre 0 e 10, se for 100 entre 0 e 100!// esse "10 +" quer dizer q começa em 10, o 91 ocorre a subtração p/ pegar 100 num.
        num = 10 + (rand() % (91));
        
        printf("%i ",num);

        if (i == 0) {
            maior1 = num;
        }else if (maior2 == maior1) {
            cont++;
        } else if (num > maior1) {
            maior2 = maior1;
            maior1 = num;
        } else if (num > maior2) {
            maior2 = num;
        } 
    }

    printf("}");
    printf("\n O primeiro maior: %i",maior1);
    printf("\n O segundo maior: %i",maior2);
    printf("\n Numero rept: %i",cont);
    
    return 0;
}