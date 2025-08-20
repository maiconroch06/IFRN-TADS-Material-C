#include <stdio.h>
#include <math.h>
/*
Implemente uma função que calcula e retorna o volume de uma esfera de raio 𝑅. Sabe-se que o 
volume desse sólido geométrico é dado pela equação: 𝑉 = (4/3)𝜋𝑅^3.
*/
float volume_esferico(float);

int main() {
    float R;
    printf(" ============ VOLUME ESFERICO ============");
    printf("\n Infome o Raio do circulo: ");
    scanf("%f", &R);

    float V = volume_esferico(R);

    printf(" > O volume eh %.2f m^3", V);
    return 0;
}

float volume_esferico(float raio) {
    return ((float) 4 / 3) * 3.14 * pow(raio,3);
}