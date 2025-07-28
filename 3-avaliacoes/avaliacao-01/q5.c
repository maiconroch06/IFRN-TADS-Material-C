#include <stdio.h>

#define N_SKATISTAS 2
#define N_VOLTA 2
#define N_MANOBRAS 5

int main (void) {
    float nota;
    float melhor_nota;

    for (int i = 0; i <= N_SKATISTAS; i++) {
        printf(" ########## SKATISTA %i ##########\n", i);

        for (int j = 1; i <= N_VOLTA; i++) {
            printf(" ");
            for (int k = 0; k <= N_MANOBRAS; k++) {
                printf(" -> %i Manobra: ", k);
                
            }
            
        }
        
    }
    

    return 0;
}