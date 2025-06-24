#include <stdio.h>

#define N_MULT 3

int main(void){

   int fator1[N_MULT], fator2[N_MULT], produto[N_MULT];

   for (int i = 0; i < N_MULT; i++){
        printf(" ============ MULTIPLIQUE %i ============\n", i + 1);
        printf(" ");
        scanf("%i",&fator1[i]); //ele dá um expaço.. como remover esse espaço?

        printf(" x ");

        printf(" ");
        scanf("%i",&fator2[i]);

          for (int i = 0; i < N_MULT; i++){
               printf(" = ");
               produto[i] = fator1[i] * fator2[i];
               printf("%i\n", produto[i]);
   }
   }

    return 0;
}