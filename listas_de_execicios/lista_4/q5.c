/* Implemente um programa em linguagem C que leia um conjunto de 10 números inteiros e mostre-os na ordem inversa a digitada pelo usuário. Faça duas versões desse programa: uma com o vetor sendo impresso na ordem inversa e outra com o vetor sendo invertido na memória e impresso em ordem direta.*/
#include <stdio.h>

#define TAM 10

int main(void)
{

    int valores_usuario[TAM];
    int valores_inverso[TAM];
    int valores_crescente[TAM];
    int valores_decrescente[TAM];

    // Entrada de dados | Numeros inseridos pelo o usuario
    printf("\n\n ========= EXIBINDO A SEQUENCIA =========\n\n");
    for (int i = 0; i < TAM; i++)
    {
        printf(" -> %i. Insira o numero: ", i + 1);
        scanf("%i", &valores_usuario[i]);
    }

    // Organização dos valores
    for (int i = 0; i < TAM; i++)
    {
        // Sequência inversa
        valores_inverso[TAM - 1 - i] = valores_usuario[i];
    }

    // Atribuindo valores do usuarios para outros vetores
    for (int i = 0; i < TAM; i++)
    {
        valores_crescente[i] = valores_usuario[i];
        valores_decrescente[i] = valores_usuario[i];
    }

    // Sequência crescente
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM - 1 - i; j++)
        {
            if (valores_crescente[j] > valores_crescente[j + 1])
            {
                int aux = valores_crescente[j];
                valores_crescente[j] = valores_crescente[j + 1];
                valores_crescente[j + 1] = aux;
            }
            if (valores_decrescente[j] < valores_decrescente[j + 1])
            {
                int aux = valores_crescente[j];
                valores_decrescente[j] = valores_decrescente[j + 1];
                valores_decrescente[j + 1] = aux;
            }
        }
    }

    // Sequência decrescente

    // Exibição da sequências ordenadas
    printf("\n ============== SEQUENCIAS ==============");

    printf("\n USUARIO:");
    for (int i = 0; i < TAM; i++)
    {
        printf(" %i", valores_usuario[i]);
    }

    printf("\n INVERTIDA:");
    for (int i = 0; i < TAM; i++)
    {
        printf(" %i", valores_inverso[i]);
    }

    printf("\n CRESCENTE:");
    for (int i = 0; i < TAM; i++)
    {
        printf(" %i", valores_crescente[i]);
    }

    printf("\n DECRESCENTE:");
    for (int i = 0; i < TAM; i++)
    {
        printf(" %i", valores_decrescente[i]);
    }
    printf("\n ========================================");

    return 0;
}