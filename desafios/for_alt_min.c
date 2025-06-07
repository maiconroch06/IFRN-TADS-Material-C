#include <stdio.h> 

#define N_PESSOAS 5

int main(void) {
    int altura;
    int alt_min; //qualquer pessoa pode ser menor que esse valor
    int alt_max; //qualquer pessoa pode ser maior que esse valor
    int soma_alturas = 0; //para calculo da media
    int n_menores_160 = 0; //para percentual

    for (int i = 0 ; i <= N_PESSOAS ; i++) {
        printf("\n -> [%i] Informe sua altura (cm): ",i + 1);
        scanf("%i",&altura);
        soma_alturas += altura;

        if (altura < 160) n_menores_160++;

        if (i == 0) { // dps disso pode eliminar o inicializador das alturas max e min.
            alt_max = alt_min = altura; 
        } else if (altura < alt_min) {
            alt_min = altura;
        } else if (altura > alt_max) {
            alt_max = altura;
        }
    }

    printf("\n ** Altura MAX: %i cm\n", alt_max);
    printf(" ** Altura MIN: %i cm\n", alt_min);
    printf(" ** Altura MEDIA: %.1f cm", (float) soma_alturas / N_PESSOAS);
    printf(" ** Altura menor que 1.6m: %.2f %%\n\n", ((float) n_menores_160 / N_PESSOAS) * 100);


    return 0;
}
