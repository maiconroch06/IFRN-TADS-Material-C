//Crie um programa em C, que recebe 3 notas de um aluno e calcular a
//media ponderada dessas notas, considerando os seguintes pesos: 2, 3 e 5.

//a euqacao eh: media =  ((nota1 * 2) + (nota2 * 3) (nota3 * 5)) / 10

//exibir a media, e informar se o aluno foi aprovado, reprovado ou tera que fazer uma prova final.
//o luno aprovado por media for maior ou igual que 70. o aluno é reprovado caso sua media seja menor do que 40. 
//caso contrario o aluno podera fazer a 

#include <stdio.h>

int main (void) {
    float nota1,nota2,nota3,nota_final,media,media_final;

    printf("Informe a sua nota1: ");
    scanf("%f",&nota1);

    printf("Informe a sua nota2: ");
    scanf("%f",&nota2);
    
    printf("Informe a sua nota3: ");
    scanf("%f",&nota3);

    media =  ((2 * nota1) + (3 * nota2) + (5 * nota3)) / 10;

    if (media >= 70) {
        printf("Sua media: %.2f\n",media);
        printf("PARABENS! Voce foi aprovado!");

    } else if (media <= 40) {
        printf("Sua media: %.2f\n",media);
        printf("Sinto muito, tente novamente!");

    } else if (media > 40 && media < 70){
        printf("Sua media nao foi suficiente: %.2f\n",media);
        printf("Informe a sua nota final: ");
        scanf("%f",&nota_final);

        media_final =  ((3 * media) + (2 * nota_final)) / 5;

        if (media_final >= 60) {
            printf("Sua media final: %.2f\n",media_final);
            printf("PARABENS!!! Voce foi aprovado!");
            
        } else {
            printf("Sua media final: %.2f\n",media_final);
            printf("Sinto muito! Tente novamente!");
        }
    } else {
        printf("#ERRO: valor fora do escopo!");
    }
    return 0;
}