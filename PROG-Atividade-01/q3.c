#include <stdio.h>

int main(void) {
    int idade,dosagem,gotas;
    float peso_corporio;

    printf(" Informe seu idade: ");
    scanf("%i",&idade);

    printf(" Informe seu peso (Kg): ");
    scanf("%f",&peso_corporio);

    if (idade > 0 && idade < 12) {
        if (peso_corporio >= 5 && peso_corporio <= 9) {
            dosagem = 125;
        } else if (peso_corporio > 9 && peso_corporio <= 16) {
            dosagem = 250;
        } else if (peso_corporio > 16 && peso_corporio <= 24) {
            dosagem = 375;
        } else if (peso_corporio > 24 && peso_corporio <= 30) {
            dosagem = 500;
        } else if (peso_corporio > 30) {
            dosagem = 750;
        } else {
            printf(" ERRO peso negativo");
        }

    } else if (idade >= 12) {
        if (peso_corporio >= 60) {
            dosagem = 1000;
        } else if (peso_corporio > 0 && peso_corporio < 60) {
            dosagem = 875;
        } else {
            printf(" ERRO peso negativo");
        }
        
    } else {
        printf(" ERRO idade negativa");
    }
    
    

    printf(" Quantidade de gotas: %i",dosagem);
    return 0;
}