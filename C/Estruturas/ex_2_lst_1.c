#include <stdio.h>
#include <stdlib.h>

int main() {
    char nomeArquivo[100];
    FILE *file;
    int linhas = 0;
    char ch;

    // Recebe o nome do arquivo do usuário
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    // Abre o arquivo em modo de leitura
    file = fopen(nomeArquivo, "r");

    if (file == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 1;
    }

    // Conta o número de linhas
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            linhas++;
        }
    }

    // Fecha o arquivo
    fclose(file);

    // Exibe o número de linhas
    printf("O arquivo '%s' possui %d linha(s).\n", nomeArquivo, linhas);

    return 0;
}
