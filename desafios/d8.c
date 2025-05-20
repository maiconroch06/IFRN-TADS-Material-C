//receber um numero do usuario que imprima a raiz do numero se for +, se nao sera a potencia desse numero
//al8 junto com ds9
//nessa ds n passou o else if

#include <stdio.h>
#include <math.h>

int main(void) {
    double n1;

    printf(" -> Informe um numero inteiro: ");
    scanf("%lf", &n1);

    if (n1 > 0) {
        printf("\nRaiz Quadrada de %.2lf e: %.2lf", n1, sqrt(n1));
    } else if (n1 < 0) {
        printf("\nO quadrado do numero %.2lf e: %.2lf", n1, n1*n1);
    } else {
        printf("\nO numero e igual a 0.");
    }
    
    
    return 0;
}