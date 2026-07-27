#include <stdio.h>
#include <stdlib.h>

int main() {
    char nomeArquivo[100];
    FILE *file;
    int vogais = 0;
    int consoantes = 0;
    int texto;

    // Solicita o nome do arquivo ao usuário
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    // Abre o arquivo em modo de leitura
    file = fopen(nomeArquivo, "r");

    if (file == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 1;
    }

    // Conta as vogais no arquivo
    while ((texto = fgetc(file)) != EOF) {
        if (texto == 'a' || texto == 'e' || texto == 'i' || texto == 'o' || texto == 'u' ||
            texto == 'A' || texto == 'E' || texto == 'I' || texto == 'O' || texto == 'U') {
            vogais++;
        }

        // else if(consoantes ++); //nao funciona certo ja que conta todo o resto
            
    }

    // Fecha o arquivo
    fclose(file);

    // Exibe o número de vogais
    printf("O arquivo '%s' possui %d vogal(is) e %d consoante(s).\n", nomeArquivo, vogais, consoantes);

    return 0;
}
