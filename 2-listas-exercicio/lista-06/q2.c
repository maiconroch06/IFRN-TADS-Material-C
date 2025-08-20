#include <stdio.h>

/*
Implemente uma função que converte um valor de velocidade dado em Km/h para m/s e outra que converte de m/s para Km/h.
Sabe-se que 1 m/s = 3,6 Km/h. *Fiz algo a mais*
*/

void exibir_menu();
float kmh_para_ms(float kmh);
float ms_para_kmh(float ms);

int main() {
    int opcao;
    float valor, resultado;

    do {
        exibir_menu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\n > Informe o valor em Km/h: ");
                scanf("%f", &valor);

                resultado = kmh_para_ms(valor);

                printf(" > %.2f Km/h = %.2f m/s\n", valor, resultado);
                break;
            case 2:
                printf("\n > Informe o valor em m/s: ");
                scanf("%f", &valor);

                resultado = ms_para_kmh(valor);
                
                printf(" > %.2f m/s = %.2f Km/h\n", valor, resultado);
                break;
            case 0:
                printf("\n Saindo...\n");
                return 0;
                break;
            default:
                printf("\n Opcao invalida!\n");
                break;
        }
    } while (1);

}

// Função para exibir o menu
void exibir_menu() {
    printf("\n =========== CONVERSOR DE VELOCIDADE ===========");
    printf("\n > [1] Km/h -> m/s");
    printf("\n > [2] m/s -> Km/h");
    printf("\n > [0] Sair");
    printf("\n ===============================================");
    printf("\n > Opcao: ");
}

// Função para converter Km/h para m/s
float kmh_para_ms(float kmh) {
    return kmh / 3.6;
}

// Função para converter m/s para Km/h
float ms_para_kmh(float ms) {
    return ms * 3.6;
}
