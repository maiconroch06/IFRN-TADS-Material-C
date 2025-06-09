#include <stdio.h>

int main (void) {
   float E = 0;
   int N;

   printf(" Informe um numero: ");
   scanf("%i", &N);

   printf(" E = ");

   for (int i = 1; i <= N; i++) {
      float termo = 1.0 / i;
      E += termo;

      printf("(1/%i)", i);
      if (i < N) {
         printf(" + ");
      }
   }

   printf(" = %f", E);

   return 0;
}
