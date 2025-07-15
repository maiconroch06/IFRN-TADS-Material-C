//Conte e imprima quantos números entre 1 e 100 são divisíveis por 3.
#include <stdio.h>

int main (void) {
    int contador = 0;

    for (int i = 1; i <= 100; i++) {    
        if (i % 3 == 0) { 
            printf("%i. %i\n",contador,i);
            contador++;     
    }}
    
    printf("Total de numeros divisiveis por 3: %d\n", contador);
    
    return 0;
}