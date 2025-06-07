#include <stdio.h>

#define TRUE 1

int main(void) {
    int encerrar, voto;
    int votos_beltrano = 0;
    int votos_ciclano = 0;
    int votos_fulano = 0;
    int branco = 0;
    int nulo = 0;
    int total_votos = 0;

    while (TRUE) {
        do { // Não sabemos quantos votos terá
            printf("\n -------- URNA ELETRONICA --------\n");
            printf("  10 - BELTRANO\n");
            printf("  20 - CICLANO\n");
            printf("  30 - FULANO\n");
            printf("   0 - BRANCO\n");
            printf(" ------------------------------------\n");
            printf(" -> Selecionar candidato: ");
            scanf("%i", &voto);

            if (voto >= 0) {
                total_votos++;
            }

            switch (voto) {
                case 10: votos_beltrano += 1; break;
                case 20: votos_ciclano += 1; break;
                case 30: votos_fulano += 1; break;
                case 0: branco += 1; break;
                default: if (voto > 0) nulo += 1; break;
            }

            if (voto < 0) {
                printf("\n -> Encerrar eleicao 1-Sim?: ");
                scanf("%i", &encerrar);
            }
            
        } while (encerrar != 1);

        

        if (encerrar == 1) {
            printf("\n - - - - - RESULTADO DA ELEICAO! - - - - -\n");
            printf(" TOTAL DE VOTOS: %i\n", total_votos);
            printf(" VOTO(S) NULO(S): %i - %.2f %%\n", nulo, ((float)nulo / total_votos) * 100);
            printf(" VOTO(S) BRANCO(S): %i - %.2f %%\n", branco, ((float)branco / total_votos) * 100);

            // Percentual candidatos
            float p_beltrano = ((float)votos_beltrano / total_votos) * 100;
            float p_ciclano = ((float)votos_ciclano / total_votos) * 100;
            float p_fulano = ((float)votos_fulano / total_votos) * 100;

                printf("\n - - - - - CLASSIFICACAO DA ELEICAO! - - - - -\n");
            // 1 2 3
            if (votos_beltrano >= votos_ciclano && votos_ciclano >= votos_fulano) {
                printf(" 1. BELTRANO com %i voto(s) - %.2f %%\n", votos_beltrano, p_beltrano);
                printf(" 2. CICLANO com %i voto(s) - %.2f %%\n", votos_ciclano, p_ciclano);
                printf(" 3. FULANO com %i voto(s) - %.2f %%\n", votos_fulano, p_fulano);
            }
            // 1 3 2
            else if (votos_beltrano >= votos_fulano && votos_fulano >= votos_ciclano) {
                printf(" 1. BELTRANO com %i voto(s) - %.2f %%\n", votos_beltrano, p_beltrano);
                printf(" 2. FULANO com %i voto(s) - %.2f %%\n", votos_fulano, p_fulano);
                printf(" 3. CICLANO com %i voto(s) - %.2f %%\n", votos_ciclano, p_ciclano);
            }
            // 2 1 3
            else if (votos_ciclano >= votos_beltrano && votos_beltrano >= votos_fulano) {
                printf(" 1. CICLANO com %i voto(s) - %.2f %%\n", votos_ciclano, p_ciclano);
                printf(" 2. BELTRANO com %i voto(s) - %.2f %%\n", votos_beltrano, p_beltrano);
                printf(" 3. FULANO com %i voto(s) - %.2f %%\n", votos_fulano, p_fulano);
            }
            // 2 3 1
            else if (votos_ciclano >= votos_fulano && votos_fulano >= votos_beltrano) {
                printf(" 1. CICLANO com %i voto(s) - %.2f %%\n", votos_ciclano, p_ciclano);
                printf(" 2. FULANO com %i voto(s) - %.2f %%\n", votos_fulano, p_fulano);
                printf(" 3. BELTRANO com %i voto(s) - %.2f %%\n", votos_beltrano, p_beltrano);
            }
            // 3 2 1
            else if (votos_fulano >= votos_ciclano && votos_ciclano >= votos_beltrano) {
                printf(" 1. FULANO com %i voto(s) - %.2f %%\n", votos_fulano, p_fulano);
                printf(" 2. CICLANO com %i voto(s) - %.2f %%\n", votos_ciclano, p_ciclano);
                printf(" 3. BELTRANO com %i voto(s) - %.2f %%\n", votos_beltrano, p_beltrano);
            }
            // 3 1 2
            else if (votos_fulano >= votos_beltrano && votos_beltrano >= votos_ciclano) {
                printf(" 1. FULANO com %i voto(s) - %.2f %%\n", votos_fulano, p_fulano);
                printf(" 2. BELTRANO com %i voto(s) - %.2f %%\n", votos_beltrano, p_beltrano);
                printf(" 3. CICLANO com %i voto(s) - %.2f %%\n", votos_ciclano, p_ciclano);
            }


        }
    break;
    }

    return 0;
}
