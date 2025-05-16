#include <stdio.h>

int main (void) {
	int num_mes;

	printf("Informe o numero do mes de 1 a 12: ");
	scanf("%i",&num_mes);
	
	if (num_mes == 1) {
        printf("Janeiro");
     } else if (num_mes == 2) {
        printf("Fevereiro");
    } else if (num_mes == 3) {
        printf("Marco");
    } else if (num_mes == 4) {
        printf("Abril");
    } else if (num_mes == 5) {
        printf("Maio");
    } else if (num_mes == 6) {
        printf("Julho");
    } else if (num_mes == 7) {
        printf("Junio");
    } else if (num_mes == 8) {
        printf("Agosto");
    } else if (num_mes == 9) {
        printf("Setembro");
    } else if (num_mes == 10) {
        printf("Novembro");
    } else if (num_mes == 12) {
        printf("Dezembro");
    } else {
        printf("ERRO: nao existe mes com este numero.");
    }

	return 0;
}
