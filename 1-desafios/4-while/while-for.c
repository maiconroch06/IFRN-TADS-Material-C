#include <stdio.h>

int main(void) {
    char nome;
    int i = 1;
    //classificar os mais rapidos
    //declarações: dizer que o recorde mundial foi ultrapassado
    for (i = 1; i <= 3; i++) {
        printf("Nome do atleta %i: ",i);
        scanf("%s",&nome);
    }

    i = 1;

    do {
        printf("Nome do atleta %i: ",i);
        scanf("%s",&nome);
        i++;
    }
    while (i <= 3);

    while (i <= 3) {
        printf("Nome do atleta %i: ",i++);
        scanf("%s",&nome);    
    }

    return 0;
}