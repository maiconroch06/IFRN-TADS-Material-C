#include <stdio.h>

int main(void) {
    int num = 15; // amazena um valor dentro da memoria em um endereço nela
    int * ptr; // amazena um endereço

    printf(" %x \n",&ptr);
    printf(" %x \n",&num); // para saber aonde esta o endereço de num é utilizado a caracter &

    ptr = &num;

    printf(" %i \n",*ptr);

    printf(" %x \n",ptr);

    printf(" NUMERO: %i \n",*ptr);
    return 0;
}