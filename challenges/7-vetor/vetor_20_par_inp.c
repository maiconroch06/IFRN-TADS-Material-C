#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main (void) {
    srand(time(NULL));

    int vetor[N];
    int cont_par = 0, cont_imp = 0;
    int som_par = 0, som_imp = 0;
    int med_par, med_imp;

    for (int i = 0; i < N; i++) {
        vetor[i] = rand() % 101;
        if (vetor[i] % 2 == 0) {
            cont_par += 1;
            som_par += vetor[i];
        } if (vetor[i] % 2 != 0) {
            cont_imp += 1;
            som_imp += vetor[i];
        }
        
    }
    
    med_imp = som_imp / cont_imp;

    for (int i = 0; i < N; i++) {
        printf("\n %i ", vetor[i]);
    }
    
    return 0;
}