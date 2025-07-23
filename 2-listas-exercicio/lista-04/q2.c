#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5000

int main(void)
{

  float num[TAM];
  srand(time(NULL));
  for (int i = 0; i < TAM; i++)
  {
    num[i] = (float) rand() / RAND_MAX;
  }

  // media dos numeros
  float media, som_num = 0;
  for (int i = 0; i < TAM; i++)
  {
    som_num += num[i];
  }

  media = som_num / TAM;
  // quadrado da diferença de cada termo
  float quadrado_diferenca[TAM];
  for (int i = 0; i < TAM; i++)
  {
    quadrado_diferenca[i] = pow(num[i] - media, 2);
  }
  // variância
  float som_quadr_dif = 0;
  for (int i = 0; i < TAM; i++)
  {
    som_quadr_dif += quadrado_diferenca[i];
  }
  float V = som_quadr_dif / TAM;

  // desvio padrao
  float Dp = sqrt(V);

  // exibição
  printf(" Media dos numeros: %.2f \n", media);
  printf(" Desvio padrao: %.2f ", Dp);

  /*/ Removendo o "*" no inicio desta linha habilida o modo test
  int num5[TAM];
  printf("\n\n Sequencia: ");
  for (int i = 0; i < TAM; i++)
  {
    num5[i] = rand();
    printf(" %i ", num5[i]);
    
  }
  
  //*/

  return 0;
}
