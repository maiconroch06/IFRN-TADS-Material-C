#include <stdio.h>
#include <locale.h>
#include <string.h>

#define N 30

int main(void) {
    setlocale(LC_ALL,"Portuguese");

    char atl1[N];//,atl2[N],atl3[N];
    int i = 10;

    //classificar os mais rapidos
    //declarações: dizer que o recorde mundial foi ultrapassado


    printf("Nome do atleta 1: ");
    scanf("%29[^\n]s",atl1);
    fflush(stdin);

/*    printf("Nome do atleta 2: ");
    scanf("%29[^\n]s",atl2);        
    fflush(stdin);

    printf("Nome do atleta 3: ");
    scanf("%29[^\n]s",atl3);
    fflush(stdin);
*/
    printf("Resultado:");
    printf("Atleta 1: %s\n",atl1);
/*    printf("Atleta 2: %s\n",atl2);
    printf("Atleta 3: %s\n",atl3);
*/

    char atleta1[N],atleta2[N],atleta3[N];

    printf("Nome do atleta 1: ");
    gets(atleta1);
    fflush(stdin);

    printf("Nome do atleta 2: ");
    fgets(atleta2,9,stdin);        
    fflush(stdin);
/*
    printf("Nome do atleta 3: ");
    gets(atleta3);
    fflush(stdin);
*
    puts("Resultado");*/
    puts(atleta1);
/*    puts(atleta2);
    puts(atleta3);
*/
    return 0;
}