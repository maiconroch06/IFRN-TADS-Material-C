#include <stdio.h>

int main () {
    int prato,sobremesa,bebida,cal = 0;

    printf("\n-------------- PRATO PRINCIPAL --------------\n");
    printf(" 1 - Vegetariano        | 180 cal\n");
    printf(" 2 - Peixe              | 230 cal\n");
    printf(" 3 - Frango             | 250 cal\n");
    printf(" 4 - Carne              | 350 cal\n");

    printf("\n-> Escolha seu prato (1-4): ");
    scanf("%d", &prato);

    switch (prato) {
        case 1: cal += 180; break;
        case 2: cal += 230; break;
        case 3: cal += 250; break;
        case 4: cal += 350; break;
        default: break;
        }

    printf("\n---------------- SOBREMESA ------------------\n");
    printf(" 1 - Abacaxi            |  75 cal\n");
    printf(" 2 - Sorvete Diet       | 110 cal\n");
    printf(" 3 - Mousse Diet        | 170 cal\n");
    printf(" 4 - Mousse Chocolate   | 200 cal\n");

    printf("\n-> Escolha sua sobremesa (1-4): ");
    scanf("%d",&sobremesa);

    switch (sobremesa) {
        case 1: cal += 75; break;
        case 2: cal += 110; break;
        case 3: cal += 170; break;
        case 4: cal += 200; break;
        default: break;
    }

    printf("\n----------------- BEBIDA --------------------\n");
    printf(" 1 - Chá                |  30 cal\n");
    printf(" 2 - Suco de Laranja    |  70 cal\n");
    printf(" 3 - Suco de Melão      | 100 cal\n");
    printf(" 4 - Refrigerante Diet  |  65 cal\n");

    printf("\n-> Escolha sua bebida (1-4): ");
    scanf("%d",&bebida);

    switch (bebida) {
        case 1: cal += 30; break;
        case 2: cal += 70; break;
        case 3: cal += 100; break;
        case 4: cal += 65; break;
        default: break;
    }

    printf("\n=====================================================\n");
    printf("\n               Calorias total: %i\n",cal);
    printf("=====================================================\n");



    return 0;
}