#include <stdio.h>

int main (void) {
    //nota[0] nota total
    int nota[4];

    for (int i = 1; i < 4; i++) {
        printf(" Informe nota %i: ",i);
        scanf("%i",&nota[i]);

        nota[0] += nota[i];
    }
    
    printf(" Nota Final: %i", nota[0]);

    return 0;
}



/*    char nome[4];
    int idade[4];

    printf(" Nome: ");
    scanf("%s",&nome);

    printf(" Idade: ");
    scanf("%i",&idade);
*/