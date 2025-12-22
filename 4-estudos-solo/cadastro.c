#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void adicionarCliente(struct Cliente **clientes, int *numClientes);
void visualizarClientes(struct Cliente *clientes, int numClientes);
void editarCliente(struct Cliente *clientes, int numClientes);
void excluirCliente(struct Cliente **clientes, int *numClientes);
void liberarMemoria(struct Cliente *clientes, int numClientes);

struct Cliente {
    char *nome;
    char *email;
};

int main() {
    struct Cliente *clientes = NULL;
    int numClientes = 0, opcao;

    do {
        printf("\n Selecione uma opção:\n");
        printf(" > [1] Adicionar cliente\n");
        printf(" > [2] Visualizar clientes\n");
        printf(" > [3] Editar cliente\n");
        printf(" > [4] Excluir cliente\n");
        printf(" > [0] Sair\n");

        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarCliente(&clientes, &numClientes);
                break;
            case 2:
                visualizarClientes(clientes, numClientes);
                break;
            case 3:
                editarCliente(clientes, numClientes);
                break;
            case 4:
                excluirCliente(&clientes, &numClientes);
                break;
            case 0:
                liberarMemoria(clientes, numClientes);
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 5);

    return 0;
}

void adicionarCliente(struct Cliente **clientes, int *numClientes) {
    struct Cliente novoCliente;
    char buffer[1024];

    printf(" > Digite o nome do cliente: ");
    scanf(" %[^\n]", buffer);
    novoCliente.nome = malloc(strlen(buffer) + 1);
    strcpy(novoCliente.nome, buffer);

    printf(" > Digite o email do cliente: ");
    scanf(" %[^\n]", buffer);
    novoCliente.email = malloc(strlen(buffer) + 1);
    strcpy(novoCliente.email, buffer);

    *clientes = realloc(*clientes, (*numClientes + 1) * sizeof(struct Cliente));
    (*clientes)[*numClientes] = novoCliente;
    (*numClientes)++;

    printf(" *Cliente adicionado com sucesso.\n");
}

void visualizarClientes(struct Cliente *clientes, int numClientes) {
    printf(" -> Clientes cadastrados:\n");
    for (int i = 0; i < numClientes; i++) {
        printf(" Nome: %s\n", clientes[i].nome);
        printf(" Email: %s\n", clientes[i].email);
        printf("----------------------\n");
    }
}

void editarCliente(struct Cliente *clientes, int numClientes) {
    char nomeBusca[1024];
    printf(" -> Digite o nome do cliente que deseja editar: ");
    scanf(" %[^\n]", nomeBusca);

    for (int i = 0; i < numClientes; i++) {
        if (strcmp(clientes[i].nome, nomeBusca) == 0) {
            char buffer[1024];

            printf(" > Digite o novo nome do cliente: ");
            scanf(" %[^\n]", buffer);
            free(clientes[i].nome);
            clientes[i].nome = malloc(strlen(buffer) + 1);
            strcpy(clientes[i].nome, buffer);

            printf(" > Digite o novo email do cliente: ");
            scanf(" %[^\n]", buffer);
            free(clientes[i].email);
            clientes[i].email = malloc(strlen(buffer) + 1);
            strcpy(clientes[i].email, buffer);

            printf(" *Cliente editado com sucesso.\n");
            return;
        }
    }
    printf("Cliente não encontrado.\n");
}

void excluirCliente(struct Cliente **clientes, int *numClientes) {
    char nomeBusca[1024];
    printf("Digite o nome do cliente que deseja excluir: ");
    scanf(" %[^\n]", nomeBusca);

    for (int i = 0; i < *numClientes; i++) {
        if (strcmp((*clientes)[i].nome, nomeBusca) == 0) {
            free((*clientes)[i].nome);
            free((*clientes)[i].email);

            for (int j = i; j < *numClientes - 1; j++) {
                (*clientes)[j] = (*clientes)[j + 1];
            }

            (*numClientes)--;
            *clientes = realloc(*clientes, (*numClientes) * sizeof(struct Cliente));

            printf("Cliente excluído com sucesso.\n");
            return;
        }
    }
    printf("Cliente não encontrado.\n");
}

void liberarMemoria(struct Cliente *clientes, int numClientes) {
    for (int i = 0; i < numClientes; i++) {
        free(clientes[i].nome);
        free(clientes[i].email);
    }
    free(clientes);
}
