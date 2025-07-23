#include <stdio.h>

int main (void) {
   float S = 0;
   int N;

   printf(" Informe um numero: ");
   scanf("%i", &N);

   printf(" S = ");

   if (N > 0) {
   
      for (int i = 1; i <= N; i++) { 
         S += N / i;

         printf("(%i/%i!)",N,i);

         if (i < N) {
            printf(" + ");
         }
      }
      printf(" = %.2f",S);

   } else {
      printf("\n # ERRO: valor de N deve ser positivo!");
   }

   return 0;
}
