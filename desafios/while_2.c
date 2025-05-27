//al junto com while 2 26/05/2025 
#include <stdio.h>
#include <ctype.h>

int main (void) {

    char genero; //[10] = {'H','M','h','m'};
    int altura;

    int somatorio_alt_M = 0;
    int cont_M = 0;
    int somatorio_alt_F = 0;
    int cont_F = 0;

    printf(" -> Genero (M ou F): ");
    scanf("%c",&genero);
    fflush(stdin);

    printf(" -> Altura (cm): ");
    scanf("%i",&altura);
    fflush(stdin);

    while (altura > 0 && toupper(genero) == 'M' || toupper(genero) == 'F') {
        if (toupper(genero) == 'M') {
            somatorio_alt_M = somatorio_alt_M + altura;
            cont_M++;
        } else if (toupper(genero) == 'F') {
            somatorio_alt_F = somatorio_alt_F + altura;
            cont_F++;
        
        }
        fflush(stdin);

        printf(" -> Genero (M ou F): ");
        scanf("%c",&genero);

        printf(" -> Altura: ");
        scanf("%i",&altura);

    }

    float media_alt_M = ((float) somatorio_alt_M) / cont_M;
    float media_alt_F = ((float) somatorio_alt_F) / cont_F;


    printf("\n MEDIA DE ALT (M): %.2f",media_alt_M);
    printf("\n MEDIA DE ALT (F): %.2f",media_alt_F);
    printf("\n ");

    return 0;
}