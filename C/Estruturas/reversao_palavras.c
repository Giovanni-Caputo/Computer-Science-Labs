#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

struct Pilha {
    char itens[MAX];
    int topo;
};

int main() {
    char frase[MAX];

    fgets(frase, MAX, stdin);

    if (frase[strlen(frase) - 1] == '\n') {
        frase[strlen(frase) - 1] = '\0';
    }

    inverterPalavras(frase);

    return 0;
}

void inicializarPilha(struct Pilha* pilha) {
    pilha->topo = -1;
}

int pilhaVazia(struct Pilha* pilha) {
    return pilha->topo == -1;
}

void empilhar(struct Pilha* pilha, char caractere) {
    pilha->itens[++pilha->topo] = caractere;
}

char desempilhar(struct Pilha* pilha) {
    if (!pilhaVazia(pilha)) {
        return pilha->itens[pilha->topo--];
    }
    return '\0';
}


void inverterPalavras(char* frase) {
    struct Pilha pilha;
    inicializarPilha(&pilha);

    int i = 0;
    while (frase[i] != '\0') {
        if (frase[i] != ' ') {
        empilhar(&pilha, frase[i]); } 
        else {
            while (!pilhaVazia(&pilha)) {
                printf("%c", desempilhar(&pilha));
            }
            printf(" ");
        }
        i++;
    }

    while (!pilhaVazia(&pilha)) {
        printf("%c", desempilhar(&pilha));
    }
    printf("\n");
}
