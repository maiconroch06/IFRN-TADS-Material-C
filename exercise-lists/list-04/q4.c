/*Crie um programa em linguagem C que receba a temperatura média de cada mês do ano e armazene 
essas temperaturas em um vetor. Em seguida, o seu programa deve determinar e imprimir em tela 
a maior e a menor temperatura do ano e em que mês estas temperaturas aconteceram.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 12

int main (void) {
    float temp_meses[TAM];

    srand(time(NULL));
    for (int i = 0; i < TAM; i++) {
        temp_meses[i] = ((rand() % 60) - 20);

            printf(" %.2f \n",temp_meses[i]);
    }

    


    return 0;
}