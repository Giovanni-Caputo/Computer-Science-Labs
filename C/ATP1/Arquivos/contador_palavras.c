#include <stdio.h>

int main(void) {
    FILE *arquivo = fopen("texto.txt", "r");
    if (arquivo == NULL) {
        printf("Nao foi possivel abrir o arquivo.\n");
        return 1;
    }

    char c;
    int palavras = 0;
    int em_palavra = 0;
    while ((c = fgetc(arquivo)) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (em_palavra) palavras++;
            em_palavra = 0;
        } else {
            em_palavra = 1;
        }
    }
    if (em_palavra) palavras++;

    printf("Numero de palavras: %d\n", palavras);
    fclose(arquivo);
    return 0;
}
