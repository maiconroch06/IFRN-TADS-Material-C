#include <stdio.h>

int main (void) {
    int num;
    int maior_num = 0;
    int menor_num = 99999;
    int cont = 0;
    int cont_num = 0;

    for (int i = 1; i == 0; i++) {
        printf("- - - - - MEDIA ENTRE NUMEROS - - - -\n");
        printf(" -> Numero %i: ",i);
        scanf("%i",&num);
        printf("[0] - para sair");

        if (num > maior_num) {
            num = maior_num;
        } else if (num < menor_num) {
            num = menor_num;
        }
        cont += num;
        cont_num++;
    }

    int media;

    if (media != 0) {
        media = cont / cont_num;
    } else {
        printf(" ERRO: ");
        return 0;
    }    

    printf("- - - - - - - - - - - - - - -\n");
    printf(" => RESULTADO:");

    printf("\n A media eh %i:",media);
    printf("\n O maior numero eh %i:",maior_num);
    printf("\n O menor numero eh %i:",menor_num);

    printf("\n- - - - - - - - - - - - - - -\n");


    return 0;
}