#include <stdio.h>
#include "CalFuncao.c"
#include <Windows.h>

int main() {
    int continuar = 1;

    do {

        printf("\n ============== CALCULADORA ==============\n");
        printf(" [1] - Adicao\n");
        printf(" [2] - Subtracao\n");
        printf(" [3] - Multiplicacao\n");
        printf(" [4] - Divisao\n");
        printf(" [5] - Potencia\n");
        printf(" [6] - Radiciacao\n");
        printf(" ================= ESCOLHA =================\n");
        int escolha;
        printf(" -> Escolha a operacao desejada: ");
        scanf("%i",&escolha);
        printf(" =========================================\n");

        float num1, num2;
        printf(" -> ");
        scanf("%f",&num1);

        switch(escolha){
            case 1:
                printf(" +");
            break;
            case 2:
                printf(" -");
            break;
            case 3:
                printf(" *");
            break;
            case 4:
                printf(" /");
            case 5:
                printf(" ¬");
            break;
            case 6:
                printf(" ^");
        
        printf(" ");
        scanf("%f",&num2);
        printf(" ================ RESULTADO ==============\n");

        switch(escolha){
            case 1:
                printf("Resultado: %.2f\n", CalSoma(num1,num2));
            break;
            case 2:
                printf("Resultado: %.2f\n", CalSubtracao(num1,num2));
            break;
            case 3:
                printf("Resultado: %.2f\n", CalMultiplicacao(num1,num2));
            break;
            case 4:
                if (num2 == 0) {
                    printf(" # ERRO: divisao por zero!\n");
                } else {
                    printf("Resultado: %.2f\n", CalDivisao(num1,num2));
                }
            break;
            case 5:
                printf("Resultado: %.2f\n", CalPotencia(num1,num2));
            break;
            case 6:
                if (num2 <= 0 || num1 < 0) {
                    printf(" # ERRO: raiz invalida!\n");
                } else {
                    printf("Resultado: %.2f\n", CalRaiz(num1,num2));
                    break;
                }
        }
        printf("\n =========================================");

        printf(" -> Digite [0] para sair: ");
        scanf("%i",&continuar);

        system("cls");

    } while (continuar);

}