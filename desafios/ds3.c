//calucule a area de uma sala
//consiga uma quantidade de pisos que cabe neste comodo
//informe a quantidade de pisos

//                        <math.h>
//ceil = busca o valor mais proximo acima de um numero real
//floor = busca o valor mais proximo abaixo de um numero real
//round = busca o valor mais proximo de um numero real

#include <stdio.h>
#include <math.h>

int main(void) {
    float x,y,xp,yp,sl,ps,n_ps;

    printf("\n     Dimensoes da Sala");
    printf("\n Digite p valor de x (cm): ");
    scanf("%f", &x);
    printf(" Digite p valor de y (cm): ");
    scanf("%f", &y);
    printf("\n     Dimicoes do Piso");
    printf("\n Digite p valor de xp (cm): ");
    scanf("%f", &xp);
    printf("\n Digite p valor de yp (cm): ");
    scanf("%f", &yp);

    sl = x * y;
    ps = xp * yp;
    n_ps = ceil(sl / ps);

    printf("\n ---> Quantidades de Pisos: %.0f (cm) <---",n_ps);

    return 0;
}