#include <stdio.h>
//Calcule a média de três notas e diga se o aluno está aprovado (média ≥ 7).
#define N_NOTAS 3

int main () {
    int nota[N_NOTAS];
    int som_notas = 0;
    int op;

    char aux;

    do {
    
    printf("\n ----------------- MEDIA DE NOTAS -----------------\n");    
    
    //entradad de valores
    for (int i = 0; i < N_NOTAS; i++) {
        printf(" -> Informe Nota %i: ",i + 1);
        scanf("%i",&nota[i]);
        
        if (nota[i] >= 0){
            som_notas += nota[i];
        } else {
            printf(" # ERRO: nota deve ser maior que 0!\n");
            break;
        }
    }

    //media aritimetica
    int media = som_notas / N_NOTAS;

    //comparação da media com a condição e exibição
    if (media >= 7) {
        printf(" => Parabens, voce foi aprovado!");
    }else if (media < 7) {
        printf(" => Reprovado!");
    } else {                        
        printf(" # ERRO: valor invalido!");
    }
    
    printf("\n\n");
    printf(" * Digite [0] para continuar: ");
    scanf("%i",&op);

    fflush(stdin);
    scanf("%c",&aux);

    printf("\n --------------------------------------------------\n");
    } while (op == 0);
    
    if (op != 0) {
        printf("                                   * Saindo...");
    }

    return 0;
}
