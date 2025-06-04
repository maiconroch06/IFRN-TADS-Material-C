#include <stdio.h> 

#define TRUE 1

int main(void) {
    int encerrar,voto;
    int candidato_1 = 0;
    int candidato_2 = 0;
    int candidato_3 = 0;
    int branco = 0;
    int nulo = 0;
    int total_votos = 0;

    while (TRUE) {
    
        do { // Não sabemos quanro alimentos o usuario irá querer
            printf("\n-------- URNA ELETRONICA --------\n");
            printf(" 10 - BELTRANO\n");
            printf(" 20 - CICLANO\n");
            printf(" 30 - FULANO\n");
            printf(" 0 - BRANCO\n");
            printf("------------------------------------\n");
            printf(" -> Selecionar candidato: ");
            scanf("%i",&voto);

            if (voto > 0) {
                total_votos++;
            }

            switch (voto) {
                case 10: candidato_1 += 1; break;
                case 20: candidato_2 += 1; break;
                case 30: candidato_3 += 1; break;
                case 0: branco += 1; break;
                default: if(voto > 0) nulo += 1; break; }

        } while (voto >= 0);

        printf("\n -> Encerrar eleicao 1-Sim?: ");
        scanf("%i",&encerrar);
        
        if (encerrar == 1) {
            printf("- - - - - RESULTADO DA ELEICAO! - - - - -");
            printf("\n TOTAL DE VOTOS: %i",candidato_1 + candidato_2 + candidato_3 + branco + nulo);
            
            //1 2 3
            if (candidato_1 >= candidato_2 && candidato_2 >= candidato_3) {
                printf(" 1. BELTRANO com %i votos",candidato_1);
                printf(" 2. CICLANO com %i votos",candidato_2);
                printf(" 3. FULANO com %i votos",candidato_3);
            }
            //1 3 2
            else if (candidato_1 >= candidato_3 && candidato_3 >= candidato_2) {
                printf(" 1. BELTRANO com %i votos",candidato_1);
                printf(" 2. FULANO com %i votos",candidato_3);
                printf(" 3. CICLANO com %i votos",candidato_2);
            }
            //2 1 3
            else if (candidato_2 >= candidato_1 && candidato_1 >= candidato_3) {
                printf(" 1. CICLANO com %i votos",candidato_2);
                printf(" 2. BELTRANO com %i votos",candidato_1);
                printf(" 3. FULANO com %i votos",candidato_3);
            }
            //2 3 1
            else if (candidato_2 >= candidato_3 && candidato_3 >= candidato_1) {
                printf(" 1. CICLANO com %i votos",candidato_2);
                printf(" 2. FULANO com %i votos",candidato_3);
                printf(" 3. BELTRANO com %i votos",candidato_1);
            }
            //3 2 1
            else if (candidato_3 >= candidato_2 && candidato_2 >= candidato_1) {
                printf(" 1. FULANO com %i votos",candidato_3);
                printf(" 2. CICLANO com %i votos",candidato_2);
                printf(" 3. BELTRANO com %i votos",candidato_1);
            }
            //3 1 2
            else if (candidato_3 >= candidato_1 && candidato_1 >= candidato_2) {
                printf(" 1. FULANO com %i votos",candidato_3);
                printf(" 2. BELTRANO com %i votos",candidato_1);
                printf(" 3. CICLANO com %i votos",candidato_2);
            }
            
            break;
        }
        

    }

    return 0;
}
