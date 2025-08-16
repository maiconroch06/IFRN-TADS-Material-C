#include <stdio.h>
/*
Um armazém trabalha com 10 mercadorias diferentes identificadas pelos números inteiros de 0 a 9. O dono do armazém anota a quantidade de cada mercadoria vendida durante o mês. Ele possui uma tabela que indica para cada mercadoria o preço de venda. Escreva um programa em linguagem C que leia a quantidade vendida de cada produto no final do mês (armazenando-os em um vetor 𝑄) e o preço de venda de cada um (armazenado-os em um vetor 𝑃). Logo após, o seu programa deve calcular e exibir o faturamento mensal do armazém.
*/
int main(){
    int   Q[10]; //= {10,5,2,0,1,5,10,2,2,1};
    float P[10]; //= {1.5,2,3.5,1.5,4,6,1,2.5,1.5,2};

    //*/
    printf("\n ============ RENDA MENSAL DAS VENDAS ============");
    printf("\n Informe a quantidade de mercadorias vendidas:");
    for (int i = 0; i < 10; i++){
        printf("\n %02d > ", i + 1);
        scanf("%d", &Q[i]);
    }
    
    printf("\n Informe o valor de cada produto vendido:");
    for (int i = 0; i < 10; i++){
        printf("\n %02d > ", i + 1);
        scanf("%d", &P[i]);
    }
    //*/

    float som_quantia = 0;
    for (int i = 0; i < 10; i++){
        som_quantia += Q[i] * P[i];
    }
    
    printf("\n Saldo total: R$%.2f", som_quantia);

    return 0;
}