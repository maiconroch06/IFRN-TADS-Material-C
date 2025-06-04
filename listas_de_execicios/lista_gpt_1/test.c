#include <stdio.h>									
#include <math.h>
  
int main() {
  double cosseno;
  scanf("%lf", &cosseno);
  printf("o angulo cujo cosseno eh %.3lf, eh %.3lf aproximadamente", cosseno,
  acos(cosseno));
  return 0;
}