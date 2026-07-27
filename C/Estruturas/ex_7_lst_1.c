#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

int main() {
    FILE *file_in, *file_out;
    char nome_arq_in[40], nome_arq_out[40];
    int ch =0;  // Usar int para lidar corretamente com EOF


    printf("Digite o nome do arquivo de entrada:\n");
    scanf(" %39s", nome_arq_in);
    printf("Digite o nome do arquivo de saída:\n");
    scanf(" %s", nome_arq_out);


    file_in = fopen(nome_arq_in, "r");
    if (file_in == NULL) {
        printf("Não foi possível abrir o arquivo de entrada.\n");
        return 1;
    }

    file_out = fopen(nome_arq_out, "w");
    if (file_out == NULL) {
        printf("Não foi possível criar o arquivo de saída.\n");
        fclose(file_in);
        return 1;
    }

    while ((ch = fgetc(file_in)) != EOF) {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            fputc('*', file_out);  // Substitui a vogal por um asterisco
        } else {
            fputc(ch, file_out);  // Mantém outros caracteres
        }
    }

    fclose(file_in);
    fclose(file_out);

    printf("Conteúdo modificado e gravado no arquivo de saída com sucesso!\n");

    return 0;
}

