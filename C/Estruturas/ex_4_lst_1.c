//jeito gigante e sem nexo de fazer//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Para isalpha e tolower

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

    // Conta as vogais e consoantes no arquivo
    while ((texto = fgetc(file)) != EOF) {
        texto = tolower(texto); // Converte para minúscula para simplificar a comparação

        // Conta vogais
        if (texto == 'a' || texto == 'e' || texto == 'i' || texto == 'o' || texto == 'u') {
            vogais++;
        }
        // Conta consoantes
        else if (texto == 'b' || texto == 'c' || texto == 'd' || texto == 'f' || texto == 'g' ||
                 texto == 'h' || texto == 'j' || texto == 'k' || texto == 'l' || texto == 'm' ||
                 texto == 'n' || texto == 'p' || texto == 'q' || texto == 'r' || texto == 's' ||
                 texto == 't' || texto == 'v' || texto == 'w' || texto == 'x' || texto == 'y' ||
                 texto == 'z') {
            consoantes++;
        }
    }

    // Fecha o arquivo
    fclose(file);

    // Exibe o número de vogais e consoantes
    printf("O arquivo '%s' possui %d vogal(is) e %d consoante(s).\n", nomeArquivo, vogais, consoantes);

    return 0;
}
