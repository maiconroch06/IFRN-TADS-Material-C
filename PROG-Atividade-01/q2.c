#include <stdio.h>
#include <string.h>

int main (){

    char atletas[3][90];
    float min,seg,cent;
    int tempo[3];

    for (int i = 0; i < 3; i++) {
        printf("Nome do atleta %i: ",i + 1);
        fgets(atletas[i],sizeof(atletas[i]),stdin);

        printf("Tempo do atleta %i: ",i + 1);
        scanf("%i,%i,%i",&min,&seg,&cent);

        tempo[i] = min * 600 + seg * 100 + cent;
    }


    return 0;
}