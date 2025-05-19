#include <stdio.h>

int main(void) {

    int num1 = 3;
    short int num2 = 4;
    long int num3 = 7;

    printf(" Bytes <int>: %i\n",sizeof(int));
    printf(" Bytes <short int>: %i\n",sizeof(short));
    printf(" Bytes <long int>: %i\n",sizeof(num3));

    printf(" Endereco num1: %p\n",&num1);
    printf(" Valor em num2: %p\n",num2);
    printf(" Valor em num3: %p\n",*(&num3));

    return 0;
}