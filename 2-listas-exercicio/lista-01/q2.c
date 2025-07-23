#include <stdio.h>

//Implemente um programa em linguagem C que receba o raio de um determinado círculo e exiba em
//tela como resultado os valores de sua área e comprimento.

//constantes = "const" e "#define", é recomendado que as questoes sejam em mai
//#define n amazena local de amazenamento, ele usa um rotulo, onde uma variavel é substituida por um dado 

int main (void) {
    float R;
    #define PI 3.14159265358979323846

    printf("\nInforme o RAIO do circulo: ");
    scanf("%f",  &R);
 
    printf("\nArea: %.2f\n", PI * R * R);
    printf("\nComprimento: %.2f", 2 * PI * R);

     return 0;
 }
