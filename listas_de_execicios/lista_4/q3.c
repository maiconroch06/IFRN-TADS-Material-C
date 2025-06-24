#include <stdio.h>

#define N_MULT 3

int main(void){

   int fator1[N_MULT], fator2[N_MULT], produto[N_MULT];

   for (int i = 0; i < N_MULT; i++){
        printf(" ============ MULTIPLIQUE %i ============\n", i + 1);
        printf(" Informe o primeiro numero: ");
        scanf("%i",&fator1[i]);

        printf(" Informe o segundo numero: ");
        scanf("%i",&fator2[i]);
   }
        printf(" ============ RESULADO ============\n");
   for (int i = 0; i < N_MULT; i++){
        produto[i] = fator1[i] * fator2[i];
        
        printf(" %i. %i x %i = %i\n", i + 1, fator1[i], fator2[i], produto[i]);
   }
   

    return 0;
}