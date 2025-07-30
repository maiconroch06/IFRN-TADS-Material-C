#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE * arquivo = NULL;

    arquivo = fopen("IFRN-TADS-Material-C/3-avaliacoes/avaliacao-02/test-escrita.txt","w");

    if (arquivo != NULL){
        printf(" * Arquivo aberto com sucesso!");
        
        fprintf(arquivo,"%s","Meu primeiro arquivo");
        
        fclose(arquivo);
    } else {
        printf(" * Falha ao abrir arquivo!");
    }

    return 0;
}