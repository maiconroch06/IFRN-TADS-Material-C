//A Confederação Brasileira de Desportos Aquáticos irá promover eliminatórias para o próximo
//mundial de natação. Faça um programa em linguagem C que receba a idade de um nadador e
//imprima a sua categoria segundo a tabela a seguir:

//Categoria Idade
//Infantil A 5 a 7 anos
//Infantil B 8 a 10 anos
//Juvenil A 11 a 13 anos
//Juvenil B 14 a 17 anos
//Sênior maiores de 18 anos

#include <stdio.h>

int main(void){
    int idade;
    printf("\n\n ================ Verifique sua categoria ================\n\n");

    printf(" - Digite sua idade: ");
    scanf("%i",&idade);

    if (idade >= 5 && idade <= 7) {
        printf("\n    -> Voce ira para categoria de idade INFANTIL A! <-");

    } else if (idade >= 8 && idade <= 10) {
        printf("\n    -> Voce ira para categoria de idade INFANTIL B! <-");

    } else if (idade >= 11 && idade <= 13) {
        printf("\n    -> Voce ira para categoria de idade JUVENIL A! <-");

    } else if (idade >= 14 && idade <= 17) {
        printf("\n    -> Voce ira para categoria de idade JUVENIL B! <-");

    } else if (idade >= 18) {
        printf("\n    -> Voce ira para categoria de idade SENIOR! <-");

    } else {
        printf("\n    -> #ERRO: idade fora do escopo! <-");

    }
    printf("\n\n==========================================================");

 return 0;
}
