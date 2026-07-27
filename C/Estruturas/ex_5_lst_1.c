#include <stdio.h>
#include <stdlib.h>

int main (){

    FILE *file;
    int numero_carac = 0;
    char carac;
    char nome_arq[40];
    int i = 0;

    printf("digite o nome do arquivo:\n");
    scanf(" %s", nome_arq);

    printf("escolha o caractere:\n");
    scanf(" %c", &carac);

    file = fopen(nome_arq, "r");

     if (file == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 1;
    }

    while ((i = fgetc(file)) != EOF) {
        if (i == carac) {
            numero_carac++;
        }


    }

    printf("o caractere '%c' aparece %d vezes no arquivo.\n", carac, numero_carac);

    return 0;
}