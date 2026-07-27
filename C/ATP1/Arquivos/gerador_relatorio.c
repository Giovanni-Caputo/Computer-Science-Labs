#include <stdio.h>

int main(void) {
    FILE *saida = fopen("relatorio.txt", "w");
    if (saida == NULL) {
        printf("Nao foi possivel criar o relatorio.\n");
        return 1;
    }

    fprintf(saida, "Relatorio de estudo\n");
    fprintf(saida, "-------------------\n");
    fprintf(saida, "Conteudo: Estruturas e funcoes\n");
    fclose(saida);
    printf("Relatorio criado com sucesso.\n");
    return 0;
}
