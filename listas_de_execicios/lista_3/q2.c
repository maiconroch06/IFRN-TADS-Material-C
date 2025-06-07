#include <stdio.h>

int main (void) {
    int num;
    int maior_num;
    int menor_num;
    int som_num = 0;
    int cont_num = 0;

    for (int i = 0; num != 0; i++) {
        printf("- - - - - MEDIA ENTRE NUMEROS - - - -\n");
        printf(" -> Numero %i: ",i + 1);
        scanf("%i",&num);
        printf("[0] - para sair\n");
        
        if (num != 0) {
            som_num += num; //soma dos numeros
            cont_num++; //quantidade de numeros inseridos    
        }

        //classificador de numero menor ou maior
        if (i == 0) {
            maior_num = menor_num = num;     
        } else if (num > maior_num) {
            maior_num = num;
        } else if (num < menor_num) {
            menor_num = num;
        }
        
    }

    int med;

    if (som_num != 0) {
        med = som_num / cont_num;
    } else {
        printf(" ERRO: numeros nao inseridos!");
        return 0;
    }    

    printf("- - - - - - - - - - - - - - -\n");
    printf(" => RESULTADO:");

    printf("\n A media eh %i:",med);
    printf("\n O maior numero eh %i:",maior_num);
    printf("\n O menor numero eh %i:",menor_num);

    printf("\n- - - - - - - - - - - - - - -\n");


    return 0;
}