#include <stdio.h>

// Atribuição: "+=", "-=", "*=" e "/=".
// ex: "a+=2" = "a=a+2".
// Modulo: %, exibe o resto.
// ex: se 0 = par.

// Aritimetico: incremento e decremento => "++" e "--"
// ex: "a++" = "a=a+1" = "a+=1"
// "++a" e "a++", a diferença é na ordem em que a incrementação ocorre

int main(void) {
    int a = 10, b = 5;

    b = a++ + 5;
    b = ++a + 5;
    printf("\n b = a++ + 5 -> a: %i, b:%i",a,b);
    printf("\n b = ++a + 5 -> a: %i, b:%i",a,b);

    return 0;
}