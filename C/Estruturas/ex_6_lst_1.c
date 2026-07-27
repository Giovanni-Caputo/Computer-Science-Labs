#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  // Para as funções isalpha e tolower

int main() {
    FILE *file;
    char nome_arq[40];
    int counts[26] = {0};  // Array para contar as ocorrências de cada letra
    int i;

    printf("Digite o nome do arquivo:\n");
    scanf(" %s", nome_arq);

    file = fopen(nome_arq, "r");

    if (file == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 1;
    }

    // Loop para ler o arquivo caractere por caractere
    while ((i = fgetc(file)) != EOF) {
        if (isalpha(i)) {  // Verifica se o caractere é uma letra
            i = tolower(i);  // Converte a letra para minúscula
            counts[i - 'a']++;  // Incrementa a contagem para a letra correspondente
        }
    }

    fclose(file);  // Fecha o arquivo após a leitura

    // Exibe o número de ocorrências de cada letra
    printf("Ocorrências de cada letra no arquivo:\n");
    for (i = 0; i < 26; i++) {
        printf("%c: %d\n", 'a' + i, counts[i]);
    }

    return 0;
}
