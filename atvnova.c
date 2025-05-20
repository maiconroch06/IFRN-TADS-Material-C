//Crie um programa em C, que recebe 3 notas de um aluno e calcular a
//media ponderada dessas notas, considerando os seguintes pesos: 2, 3 e 5.

//a euqacao eh: media =  ((nota1 * 2) + (nota2 * 3) (nota3 * 5)) / 10

//exibir a media, e informar se o aluno foi aprovado, reprovado ou tera que fazer uma prova final.
//o luno aprovado por media for maior ou igual que 70. o aluno é reprovado caso sua media seja menor do que 40. 
//caso contrario o aluno podera fazer a 

#include <stdio.h>

int main (void) {
    float nota1,nota2,nota3,media_ponderada;

    printf("Informe sua nota1: ");
    scanf("%f",&nota1);
    printf("Informe sua nota2: ");
    scanf("%f",&nota2);
    printf("Informe sua nota3: ");
    scanf("%f",&nota3);

    media_ponderada =  ((nota1 * 2) + (nota2 * 3) (nota3 * 5)) / 10;

    if (media_ponderada)
    {
        printf("Aprovado")
    }
    

    return 0;
}
