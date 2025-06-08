#include <stdio.h>

int main (void) {
   float cal;
   int N;
   float E = 0;

   printf(" Informe um numero: ");
   scanf("%i", &N);

   printf(" E =");
   for (int i = 1; i < N; i++) {
      cal = 1.0 / i;
      printf(" 1 / %i +", i);
      E += (float) cal;
   }
   E += 1.0 / N;
   printf(" 1 / %i = %f", N, E);

   return 0;
}

