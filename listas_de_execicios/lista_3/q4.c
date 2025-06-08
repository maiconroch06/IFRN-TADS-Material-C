#include <stdio.h>


int main (void) {
   int termo0 = 0;
   int termo1 = 1;
   int termo3;

   printf(" F = {0, 1,");

   for (int i = 2; i < 40; i++) {
     termo3 = termo0 + termo1;

      if (i % 2 == 0) {
         termo0 = termo3;
      } else {
         termo1 = termo3;
      }
      printf(" %i,", termo3);
   }
   printf(" %i}",termo0 + termo1);

   return 0;
}