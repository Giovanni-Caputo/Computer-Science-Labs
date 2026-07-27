#include <stdio.h>

int main (void){

    void copiar(FILE *file1, FILE *file2);

    FILE *file1;
    file1 = fopen("arquivo.txt","r");

    if (file1 == NULL) {
        printf("nao foi possivel abrir o arquivo\n");
        return 1;
    }

    FILE *file2;
    file2 = fopen("arquivo2.txt","w");

    copiar(file1, file2);

    fclose(file1);
    fclose(file2);

    return 0;
}

void copiar(FILE *file1, FILE *file2){
    char leitor[1000];

    while (fgets(leitor, 1000, file1)!= NULL){
        fputs(leitor, file2);
    }
}
