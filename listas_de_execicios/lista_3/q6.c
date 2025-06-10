#include <stdio.h>

int main (void) {
   float E = 0;
   int N;

   printf(" Informe um numero: ");
   scanf("%i", &N);

   printf(" E = ");

   if (N > 0) {
   
      for (int i = 1; i <= N; i++) { 
         E += 1.0 / i;

         printf("(1/%i)", i);
         if (i < N) {
            printf(" + ");
         }
      }
      printf(" = %.2f", E);

   } else {
      printf("\n # ERRO: valor de N deve ser positivo!");
   }

   return 0;
}
