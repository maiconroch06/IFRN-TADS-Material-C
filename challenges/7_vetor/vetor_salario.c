#include <stdio.h>

#define N_FUNCIONARIOS 3

int main (void) { 
    float salarios [N_FUNCIONARIOS];

    for (int i = 0; i < N_FUNCIONARIOS; i++) {
        printf(" -> Salario do funcionario [%i]: R$", i + 1);
        scanf("%f", &salarios[i]);
    }
    
    float perc_aumento;

    printf("\n -> Percentual de aumento (%%): ");
    scanf("%f", &perc_aumento);

    if (perc_aumento > 0) {
        for (int i = 0; i < N_FUNCIONARIOS; i++) {
            salarios[i] *= (1 + perc_aumento / 100);
            printf("\n Novo salario [%i]: R$%.2f", i + 1, salarios[i]);
        }
        
    } else {
        printf("\n *** Valor de aumento invalido!");
    }
    
    return 0;
}
