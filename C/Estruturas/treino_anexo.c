#include <stdio.h>
#include <stdlib.h>

int main (){

    FILE *file; 
    file = fopen("string.txt", "a");

    if(file == NULL){
        printf("nao foi possivel abrir o arquivo");
        exit(1);
    }

    fprintf(file, "primeira linha\n"); //escreve a string na primeira linha em branco do arquivo

    char frase[] = "segunda linha\n"; 
    fputs (frase, file); //pra escrever um vetor inteiro

    char caractere = '3';
    fputc(caractere, file); // adiciona um caractere na prox linha


    fclose(file);

    printf("\n");
    system("pause");

    return 0;
}