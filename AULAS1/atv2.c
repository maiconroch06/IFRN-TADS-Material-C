#include <stdio.h>

//Questao 2
//Implemente um programa em linguagem C que receba o raio de um determinado círculo e exiba em
//tela como resultado os valores de sua área e comprimento.

//constantes = "const" e "#define", é recomendado que as questoes sejam em mai
//#define n amazena local de amazenamento, ele usa um rotulo, onde uma variavel é substituida por um dado 

int main(void) {
    float R;
    const float PI = 3.14159265358979323846;
    #define C_PI 3.14159265358979323846


    printf("\n Informe o R: ");
    scanf("%f", &R);

    printf("\n Comprimento: %.4f", 2*PI*R);
    printf("\n Area: %.4f", C_PI*R*R);

    return 0;
}