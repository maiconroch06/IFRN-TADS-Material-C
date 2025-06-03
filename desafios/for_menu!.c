#include <stdio.h> 

int main(void) {
    int op;
    float valor_compra = 0;

    do {
        printf("\n---------------- MENU ------------------\n");
        printf(" 1 - Misto Quente          | R$  5.00 \n");
        printf(" 2 - Cheese Burg           | R$ 10.00 \n");
        printf(" 3 - Copo de Suco          | R$  6.00 \n");
        printf(" 4 - Lata de Refri         | R$  3.50 \n");
        printf(" 0 - Encerrar compra\n");
        printf("----------------------------------------\n");
        printf(" -> Selecionar produto: ");
        scanf("%i",&op);
    
        switch (op) {
            case 1: valor_compra += 5  ; break;
            case 2: valor_compra += 10 ; break;
            case 3: valor_compra += 6  ; break;
            case 4: valor_compra += 3.5; break;
            case 0: ; break;
            default: printf("\n #ERRO: opcao invalida!"); break; }

    
        if (op > 0) {
            printf(" * Valo da conta: R$%f.2", valor_compra);
        }

    } while (op != 0);


    
    
    

    return 0;
}
