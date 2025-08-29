#include <stdio.h>
#include <ctype.h>
/*
Faça uma função que receba três valores inteiros entre 0 e 100 (as notas de um aluno) e um caractere, que indica o tipo de média a ser aplicada. Se o caractere for ‘𝐴’ ou ‘𝑎’ a função deve retornar a média aritmética das notas do aluno, se for ‘𝑃’ ou ‘𝑝’ deve ser calculada a média ponderada com pesos 2, 3 e 5, respectivamente, e se o caractere for ‘H’ ou ‘ℎ’ a função deve retornar a média harmônica. 
*/

float Cal_Medias(int, int, int, char);

int main() {
    char escolha;
    float nota1, nota2, nota3;

    printf(" ======== INFORME NOTAS ========\n");
    printf(" > NOTA 01: ");
    scanf("%f", &nota1);
    printf(" > NOTA 02: ");
    scanf("%f", &nota2);
    printf(" > NOTA 03: ");
    scanf("%f", &nota3);

    printf("\n ======= TIPOS DE MEDIAS =======\n");
    printf(" > [A] Media Aritmetica\n");
    printf(" > [P] Media Ponderada\n");
    printf(" > [H] Media Harmonica\n");
    printf(" ===============================\n");
    printf(" > Opcao: ");
    scanf(" %c", &escolha);

    escolha = toupper(escolha);

    float media_final;
    if (escolha == 'A' || escolha == 'P' || escolha == 'H') {
        media_final = Cal_Medias(nota1, nota2, nota3, escolha);
        printf("\n > Media Final: %.2f <", media_final);
    } else {
        printf("\n #ERRO: Opcao invalida! Tente novamente.\n");
    }
    
    return 0;
}

float Cal_Medias(int nota1, int nota2, int nota3, char tipo_media) {
    float media;

    if (tipo_media == 'A') {
        media = (nota1 + nota2 + nota3) / 3.0;
    } else if (tipo_media == 'P') {
        media = ((nota1 * 2.0) + (nota2 * 3) + (nota3 * 5)) / (2.0 + 3 + 5);
    } else {
        media = 3.0 / ((1.0 / nota1) + (1.0 / nota2) + (1.0 / nota3));
    }

    return media;
}