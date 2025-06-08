#include <stdio.h>

int main (void) {
   int N;
   float T = 0;

   printf(" Informe um numero: ");
   scanf("%i", &N);

   printf(" T = ");

   for (int i = 1; i <= N; i++) {
        float termo = (float) i / (N - i + 1);
        T += termo;

        printf("(%i/%i)", i, N - i + 1);
        if (i < N) {
            printf(" + ");
        }
   }

   printf(" = %2f ", T);

   return 0;
}
