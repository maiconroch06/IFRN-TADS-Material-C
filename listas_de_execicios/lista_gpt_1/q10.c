//Dado um número n, imprima todos os divisores de n.
#include <stdio.h>

int main(void) {
    int n;

    printf("Informe um numero: ");
    scanf("%i",&n);
    
    for (int i = 0; n % i == 0; i++) {
        printf("%i\n",i);
    }

    return 0;
}
/* outras questoes: 

Imprima os 15 primeiros números da sequência de Fibonacci.

Leia n e calcule o fatorial de n.

Leia uma quantidade n e depois n números, e calcule a média dos positivos e dos negativos separadamente.

Desenhe um triângulo de asteriscos com base de n linhas.

Verifique se um número é primo (sem usar break).
-
Imprima todos os números palíndromos entre 100 e 999 (ex: 121, 191, 212...).

Leia um número binário (ex: 1011) e converta para decimal usando for.

Imprima todos os números entre 1 e 1000 que são múltiplos de 3 e a soma de seus dígitos também é múltiplo de 3.
-
Monte uma pirâmide numérica como a seguir para n=5:

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

Gere todos os pares (i, j) onde 1 ≤ i < j ≤ n e a soma i + j seja um número primo.

*/