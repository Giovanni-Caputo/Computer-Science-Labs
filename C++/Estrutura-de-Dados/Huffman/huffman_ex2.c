#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct No {
    char caractere;
    int frequencia;
    struct No* esquerdo;
    struct No* direito;
} No;

No* criarNo(char caractere, int frequencia, No* esquerdo, No* direito) {
    No* novo = (No*)malloc(sizeof(No));
    novo->caractere = caractere;
    novo->frequencia = frequencia;
    novo->esquerdo = esquerdo;
    novo->direito = direito;
    return novo;
}

typedef struct {
    No* itens[MAX];
    int tamanho;
} FilaPrioridade;

void inicializarFila(FilaPrioridade* fila) {
    fila->tamanho = 0;
}

void inserirFila(FilaPrioridade* fila, No* no) {
    int i = fila->tamanho++;
    while (i > 0 && fila->itens[i - 1]->frequencia > no->frequencia) {
        fila->itens[i] = fila->itens[i - 1];
        i--;
    }
    fila->itens[i] = no;
}

No* removerMenor(FilaPrioridade* fila) {
    if (fila->tamanho == 0) return NULL;
    return fila->itens[--fila->tamanho];
}

No* construirArvoreHuffman(FilaPrioridade* fila) {
    while (fila->tamanho > 1) {
        No* esq = removerMenor(fila);
        No* dir = removerMenor(fila);
        No* novo = criarNo('*', esq->frequencia + dir->frequencia, esq, dir);
        inserirFila(fila, novo);
    }
    return removerMenor(fila);
}

void imprimirArvore(No* raiz, int nivel) {
    if (raiz == NULL) return;

    for (int i = 0; i < nivel; i++) printf("  ");
    if (raiz->caractere != '*')
        printf("%c (%d)\n", raiz->caractere, raiz->frequencia);
    else
        printf("*(%d)\n", raiz->frequencia);

    imprimirArvore(raiz->esquerdo, nivel + 1);
    imprimirArvore(raiz->direito, nivel + 1);
}

//Exercício 2 
int main() {
    FilaPrioridade fila;
    inicializarFila(&fila);

    inserirFila(&fila, criarNo('a', 45, NULL, NULL));
    inserirFila(&fila, criarNo('b', 13, NULL, NULL));
    inserirFila(&fila, criarNo('c', 12, NULL, NULL));
    inserirFila(&fila, criarNo('d', 16, NULL, NULL));
    inserirFila(&fila, criarNo('e', 9, NULL, NULL));
    inserirFila(&fila, criarNo('f', 5, NULL, NULL));

    No* raiz = construirArvoreHuffman(&fila);

    printf("Árvore de Huffman (Exercício 2):\n");
    imprimirArvore(raiz, 0);

    return 0;
}
