#include <stdio.h>
//Leia uma quantidade n e depois n números, e calcule a média dos positivos e dos negativos separadamente.
int main() {
    int num, op;
    int som_num = 0, cont_num = 0;

    while (op == 0) {
        printf(" -> Digite o numero: ");
        scanf("%i",&num);
        som_num += num;
        cont_num += 1;

        printf(" -> Digite o numero: ");
        scanf("%i",&op);
    }
    return 0;
}
