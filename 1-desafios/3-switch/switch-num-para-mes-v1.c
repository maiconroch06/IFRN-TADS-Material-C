//Desenvolva um programa em linguagem C que leia um número inteiro entre 1 e 12 e escreva o 
//mês correspondente. Caso o usuário digite um número fora desse intervalo, deverá aparecer uma 
//mensagem informando que não existe mês com este número.

#include <stdio.h>

int main(void) {
int mes;

printf("Informe um numero de 1 a 12 para se saber o mes: ");
scanf("%i",&mes);


switch (mes) {
    case 1:
        printf("Janeiro");
        break;

    case 2:
        printf("Fevereiro");
        break;

    case 3:
        printf("Março");
    break;

    case 4:
        printf("Abril");
        break;

    case 5:
        printf("Maio");
        break;

    case 6:
        printf("Junho");
        break;

    case 7:
        printf("Julho");
        break;

    case 8:
        printf("Agosto");
        break;

    case 9:
        printf("Setembro");
        break;

    case 10:
        printf("");
        break;

    case 11:
        printf("Novembro");
        break;

    case 12:
        printf("Dezembro");
        break;

    default:
        printf(" #ERRO valor fora do escopo!");
        break;
    }
    return 0;
}