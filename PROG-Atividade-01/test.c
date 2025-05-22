#include <stdio.h>

int main (void) {
    int cont = 1;
    int aux;

    while (aux <= 100) {
        aux = cont * 4;
        printf("\n %i", aux);
        cont++;
    }

	return 0;
}