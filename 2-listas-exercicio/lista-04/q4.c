/*Crie um programa em linguagem C que receba a temperatura média de cada mês do ano e armazene 
essas temperaturas em um vetor. Em seguida, o seu programa deve determinar e imprimir em tela 
a maior e a menor temperatura do ano e em que mês estas temperaturas aconteceram.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 12

int main (void) {
    float temp_meses[TAM];
    int indice_maior, indice_menor;
    const char *nomes_meses[TAM] = {
        "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    // determina em um vetor, numeros aleatorios de -20 a 40°C
    srand(time(NULL));
    printf(" =========== TEMPERATURA DOS MESES ===========\n");
    for (int i = 0; i < TAM; i++) {
        temp_meses[i] = ((rand() % 6101) / 100.0) - 20.0; // -20.00 a 40.00
        printf("  Mes %-4i (%-9s): %8.2fC\n", i + 1, nomes_meses[i], temp_meses[i]);

        // classifica o numero maior e o menor
        if (i == 0) { 
            indice_maior = indice_menor = i;
        } else if (temp_meses[i] < temp_meses[indice_menor]) {
            indice_menor = i;
        } else if (temp_meses[i] > temp_meses[indice_maior]) {
            indice_maior = i;
        }
    }
    printf(" =============================================\n");


    printf("\n *Maior temp: %.2fC em %s (mes %i)", temp_meses[indice_maior], nomes_meses[indice_maior], indice_maior + 1);
    printf("\n *Menor temp: %.2fC em %s (mes %i)\n", temp_meses[indice_menor], nomes_meses[indice_menor], indice_menor + 1);

    return 0;
}