#include <stdio.h>
#include "AVL.h"

int main() {
    No* raiz = NULL;

    // VALORES
    raiz = inserir(raiz, 10);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 30);
    raiz = inserir(raiz, 5);
    raiz = inserir(raiz, 4);
    raiz = inserir(raiz, 15);

    //ORDEM ARVORE
    printf("Árvore em ordem: ");
    imprimirEmOrdem(raiz);
    printf("\n");

    // TIRA O NÓ
    raiz = remover(raiz, 20);

    // ARVORE DPS 
    printf("Árvore em ordem após a remoção de 20: ");
    imprimirEmOrdem(raiz);
    printf("\n");

    liberarArvore(raiz);

    return 0;
}
