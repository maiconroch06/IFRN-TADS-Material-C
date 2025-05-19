// while (enquanto), laço infinito (evitar utilizar)
// do ... while (faça .. enquanto)
// for (para)

#include <stdio.h>

int main (void) {
    int de,ate;

    printf("De um numero: ");
    scanf("%i",&de);
    printf("Ate o numero: ");
    scanf("%i",&ate);

        //    !=
    while (de < ate)
    {
        printf("\n %i. PROGRAMACAO DE COMPUTADORES!", ++de);
    }

    printf("\n\n #Final do programa");

	return 0;
}
