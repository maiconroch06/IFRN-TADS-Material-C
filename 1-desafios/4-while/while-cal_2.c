#include <stdio.h> //break; ele sai da estrutura. continue; a iteração corrente eh finalizada. ele volta

#define TRUE 1

int main () {
    char op;
    float a,b,continuar;
    char aux; //para comp que n roda o fflush(stdin) e adicionar outro q chame esse aux

    while (TRUE) {
        printf("\n------ CALCURADORA EM C ------\n");
        printf(" +: Adicao");
        printf("\n -: Subtracao");
        printf("\n *: Multiplicacao");
        printf("\n /: Divisao");
        printf("\n 0: exit");
        printf("\n----------------------------\n");
        printf(" -> Operacao: ");
        scanf("%c",&op);

        if (op == '+' || op == '-' || op == '*' || op == '/') {

            printf("----------------------------\n");

            printf(" -> Informe a: ");
            scanf("%f",&a);
            
            fflush(stdin);
            scanf("%c",&aux);

            printf(" -> Informe b: ");
            scanf("%f",&b);

            fflush(stdin);
            scanf("%c",&aux);

            printf("----------------------------\n");

            switch (op) {
                case '+':
                    printf("\n => %.1f + %.1f = %.1f",a,b,a + b);
                    break;
                case '-':
                    printf("\n => %.1f - %.1f = %.1f",a,b,a - b);
                    break;
                case '*':
                    printf("\n => %.1f * %.1f = %.1f",a,b,a * b);
                    break;
                case '/':
                    if (b != 0) {
                        printf("\n => %.1f / %.1f = %.1f",a,b,a / b);
                    } else {
                        printf("\n #ERRO: divisao por zero");
                    }
                }

        } else {
            printf(" ERRO: Operador invalido");
            continue;
        }

        printf("\n -> Deseja continuar? ");
        scanf("%i",&continuar);

        fflush(stdin);
        scanf("%c",&aux);
        if (continuar == 0) {
            printf("\n Saindo da calculadora.... ");
            break;
        }
        
    }
    
    

    return 0;
}