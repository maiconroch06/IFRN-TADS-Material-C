#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE * arquivo = NULL;

    arquivo = fopen("teste_escrita.txt","w");

    if (arquivo != NULL){
        printf(" ** Aeqquivo aberto com sucesso!");
        fprintf(arquivo,"%s","Meu primeiro arquivo");
        
        fclose(arquivo);
    }

    return 0;
}