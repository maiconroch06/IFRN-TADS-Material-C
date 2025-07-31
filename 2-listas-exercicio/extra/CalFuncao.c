//#include "prototiposFuncoes.h"
#include <math.h>

float CalSoma (float n1, float n2) {
    return n1 + n2;
}

float CalSubtracao (float n1, float n2) {
    return n1 - n2;
}

float CalMultiplicacao (float n1, float n2) {
    return n1 * n2;
}

float CalDivisao (float n1, float n2) {
    return n1 / n2;
}

float CalPotencia (float n1, float n2) {
    return pow(n1,n2);
}

float CalRaiz (float n1, float n2) {
    if (n1 >= 0 && n2 > 0) {
        return pow(n1, 1.0 / n2);
    } else {
        return 0; // Valor padrão para caso inválido
    }
}