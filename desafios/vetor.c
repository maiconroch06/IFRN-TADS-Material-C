#include <stdio.h>

int main (void) {
    //nota[0] nota total
    int nota[4] = {0};

/*    for (int i = 1; i < 4; i++) {
        printf(" Informe nota %i: ",i);
        scanf("%i",&nota[i]);

        nota[0] += nota[i];
    }
    
    printf(" Nota Final: %i", nota[0]);
*/  printf("\n Endereco do vetor: %x", nota);

    for (int i = 0; i <= 20; i++) {
        printf("\n Endereco do vetor[%i]: %x", i, &nota[i]);
        printf("\n Valor: %i\n", nota[i]);
    }
    
        


    return 0;
}



/*    char nome[4];
    int idade[4];

    printf(" Nome: ");
    scanf("%s",&nome);

    printf(" Idade: ");
    scanf("%i",&idade);
*/