//media de duas notas de 0 a 10, depois dizer se foi aprovado com nota maior que 7, se menor que 4 reprovado se n faz prova final.
//double maior precisão numerica, mas ocupa mais espaço

#include <stdio.h>

int main(void) {
    double n1, n2, media;

    printf(" - - - Veja se o aluno esta aprovado - - -");

    printf("\n\n -> Nota 1: ");
    scanf("%lf", &n1);

    printf("\n -> Nota 2: ");
    scanf("%lf", &n2);

    media = (n1 + n2) / 2;

    if (media >= 7.0) {
        printf("\n   - APROVADO -");
    } else if (media <= 4) {
        printf("\n   - REPROVADO -");
    } else {
        printf("\n  - PROVA FINAL -");
    }
    
    
    printf("\n -> MEDIA: %.2lf <-", media);

    return 0;
}