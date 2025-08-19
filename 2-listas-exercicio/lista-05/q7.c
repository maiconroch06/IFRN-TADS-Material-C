#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Desenvolva um programa em linguagem C que possui uma matriz 12 𝑥 4 responsável por armazenar o total acumulado em vendas de cada semana do ano (para fins de simplificação, considere que cada mês possui somente quatro semanas). Dessa forma, cada linha representa um mês e cada coluna uma semana do mês. Sabendo isso, o programa deve calcular e imprimir o total vendido em cada mês, total vendido em cada semana durante todo o ano e o total vendido no ano. 
*/
int main() {
    float vendas_semanais[12][4];
    char meses[12][10] = {
        "Janeiro", "Fevereiro", "Marco", "Abril",
        "Maio", "Junho", "Julho", "Agosto",
        "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    /// Determina os valoes automaticamente
    srand(time(NULL));
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 4; j++) {
            vendas_semanais[i][j] = (float)rand() / 101;
        }
        
    }//*/

    /*// Determina manualmente os valores
    printf("\n > Informe o total de vendas semanais:");
    for (int i = 0; i < 12; i++) {
        printf("\n > Mes %s ", meses[i]);
        for (int j = 0; j < 4; j++) {
            printf("\n > Semana %02d: R$", j + 1);
            scanf("%f", vendas_semanais[i][j]);
        }
        
    }//*/
    
    // Total de venda mensais
    float venda_mensal[12] = {0};
    float venda_anual = 0;
    float total_semana[4] = {0};
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 4; j++){
            venda_mensal[i] += vendas_semanais[i][j];
            total_semana[j] += vendas_semanais[i][j];
        }
        venda_anual += venda_mensal[i];
        
    }
    
    printf("\n ================ GESTAO FINANCEIRA ===============\n");
    printf(" ---------------- RESULTADO MENSAL ----------------\n");
    for (int i = 0; i < 12; i++) {
        printf("  %-10s: R$%8.2f\n", meses[i], venda_mensal[i]);
    }
    printf(" --------------------------------------------------\n");

    printf("\n -------------- RESULTADO POR SEMANA --------------\n");
    for (int j = 0; j < 4; j++) {
        printf("  Semana %d:   R$%8.2f\n", j + 1, total_semana[j]);
    }
    printf(" --------------------------------------------------\n");

    printf("\n ---------------- RESULTADO ANUAL -----------------\n");
    printf("  Total do ano: R$%8.2f\n", venda_anual);
    printf(" ==================================================\n");

    return 0;
}