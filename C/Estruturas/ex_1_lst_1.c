#include <stdio.h>

int main() {
    char caractere;

    // Passo (a): Criar/abrir o arquivo para gravação
    FILE *file = fopen("arq.txt", "w");
    if (file == NULL) {
        printf("Não foi possível abrir o arquivo para gravação.\n");
        return 1;
    }

    // Passo (b): Permitir que o usuário grave caracteres até inserir '0'
    printf("Digite caracteres para gravar no arquivo (digite '0' para sair):\n");
    scanf(" %c", &caractere);  // Lê o primeiro caractere

    while (caractere != '0') {  // Continua enquanto o caractere não for '0'
        fputc(caractere, file);  // Grava o caractere no arquivo
        scanf(" %c", &caractere);  // Lê o próximo caractere
    }

    // Passo (c): Fechar o arquivo após gravação
    fclose(file);
    printf("Arquivo salvo e fechado com sucesso!\n");

    // Passo (d): Abrir o arquivo para leitura
    file = fopen("arq.txt", "r");
    if (file == NULL) {
        printf("Não foi possível abrir o arquivo para leitura.\n");
        return 1;
    }

    // Passo (e): Ler o arquivo caractere por caractere e exibir na tela
    printf("Conteúdo do arquivo:\n");
    while ((caractere = fgetc(file)) != EOF) {  // Lê cada caractere até o fim do arquivo (EOF)
        putchar(caractere);  // Exibe o caractere na tela
    }

    // Passo (f): Fechar o arquivo após leitura
    fclose(file);
    printf("\nArquivo lido e fechado com sucesso!\n");

    return 0;
}
