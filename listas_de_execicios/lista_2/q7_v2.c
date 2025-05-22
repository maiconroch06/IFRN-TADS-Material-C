//#include <ctype.h>
//toupper (deixar maiusculo)
//tolower (deixar minusculo)

#include <stdio.h>
#include <ctype.h>

int main (void) {
    float altura;
    char sexo;

    printf(" - - - Saiba seu peso ideal - - -");
    
    printf("\n -> Informe seu sexo (M/F): ");
    scanf("%c",&sexo);

    printf(" -> Informe sua altura (m): ");
    scanf("%f",&altura);

    double peso;

// if (toupper(sexo) == 'M')
    if (sexo == 'M'|| sexo == 'm') {
        peso = (72.7 * altura) - 58;
        printf("\n * Peso ideal: %.2f kg", peso);

// if (toupper(sexo) == 'F')
    } else if (sexo == 'F' || sexo == 'f') {
        peso = (62.1 * altura) - 44.7;
        printf("\n * Peso ideal: %.2f kg", peso);

    } else {
        printf(" # ERRO: caracter errado para o sexo!");

    }
	return 0;
}
