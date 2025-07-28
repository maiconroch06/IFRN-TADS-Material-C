#include <stdio.h>

int combinacao(int, int);
int fatorial(int);

int main(void){

    printf(" Fatorial 4!: %i\n", fatorial(4));
    printf(" Fatorial 2!: %i\n", fatorial(2));
    printf(" Combinacao(4,2): %i\n", combinacao(4,2));
    printf(" Combinacao(7,4): %i\n", combinacao(7,4));

    return 0;
}

int combinacao(int n, int p){
    int c;

    c = fat(n) / fat(p) * fat(n - p);

    return c;
}

int fat(n){
    if (n == 0) {  // Caso base
        return 1;
    } else {
        return n * fatorial(n - 1);  // Chamada recursiva
    }
}


int fatorial(int n){
    int f = 1;

    for (int i = n; i > 1; i--) {
        f *= i;
    }
    return f;
}
