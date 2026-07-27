#include <stdio.h>
#include "arvore_bst.h"

int main() {
    Node* raiz = NULL;

    int valores[] = {8, 4, 12, 2, 6, 10, 14, 1, 3, 5, 7, 9, 11, 13, 15};
    int tamanho = sizeof(valores) / sizeof(valores[0]);

    for (int i = 0; i < tamanho; i++) {
        raiz = inserir(raiz, valores[i]);
    }

    printf("Pre-Ordem: ");
    preOrdem(raiz);
    printf("\n");

    printf("Em Ordem: ");
    emOrdem(raiz);
    printf("\n");

    printf("Pos-Ordem: ");
    posOrdem(raiz);
    printf("\n");

    liberarArvore(raiz);

    return 0;
}
