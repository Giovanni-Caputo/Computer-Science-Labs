#include <stdio.h>
#include <stdlib.h>

// Estrutura da ABB
typedef struct No {
    int valor;
    struct No *esq, *dir;
} No;

// Função para criar um novo nó
No* novoNo(int valor) {
    No* novo = (No*) malloc(sizeof(No));
    novo->valor = valor;
    novo->esq = novo->dir = NULL;
    return novo;
}

// Inserção normal de ABB (mantendo ordem)
No* inserir(No* raiz, int valor) {
    if (raiz == NULL)
        return novoNo(valor);

    if (valor < raiz->valor)
        raiz->esq = inserir(raiz->esq, valor);
    else if (valor > raiz->valor)
        raiz->dir = inserir(raiz->dir, valor);

    return raiz;
}

// Impressão em ordem (esquerda, raiz, direita)
void emOrdem(No* raiz) {
    if (raiz != NULL) {
        emOrdem(raiz->esq);
        printf("%d ", raiz->valor);
        emOrdem(raiz->dir);
    }
}

int altura(No* raiz) {
    if (raiz == NULL) return 0;
    int alt_esq = altura(raiz->esq);
    int alt_dir = altura(raiz->dir);
    return (alt_esq > alt_dir ? alt_esq : alt_dir) + 1;
}

void guardarEmOrdem(No* raiz, int* vetor, int* index) {
    if (raiz != NULL) {
        guardarEmOrdem(raiz->esq, vetor, index);
        vetor[(*index)++] = raiz->valor;
        guardarEmOrdem(raiz->dir, vetor, index);
    }
}

No* construirBalanceada(int* vetor, int inicio, int fim) {
    if (inicio > fim)
        return NULL;
    int meio = (inicio + fim) / 2;
    No* raiz = novoNo(vetor[meio]);
    raiz->esq = construirBalanceada(vetor, inicio, meio - 1);
    raiz->dir = construirBalanceada(vetor, meio + 1, fim);
    return raiz;
}

No* rebalancear(No* raiz, int quantidadeNos) {
    int* vetor = (int*) malloc(quantidadeNos * sizeof(int));
    int index = 0;
    guardarEmOrdem(raiz, vetor, &index);
    return construirBalanceada(vetor, 0, quantidadeNos - 1);
}

void preOrdem(No* raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->valor);
        preOrdem(raiz->esq);
        preOrdem(raiz->dir);
    }
}


int main() {
    No* raiz = NULL;

    // Valores que vão criar uma árvore degenerada para a direita
    int valores[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(valores) / sizeof(int);

    for (int i = 0; i < n; i++) {
        raiz = inserir(raiz, valores[i]);
    }

    printf("Em ordem (antes de rebalancear): ");
    emOrdem(raiz);

    printf("\nAltura antes: %d\n", altura(raiz));

    raiz = rebalancear(raiz, n);

    printf("\nEm ordem (após rebalancear): ");
    emOrdem(raiz);

    printf("\nAltura depois: %d\n", altura(raiz));


    printf("\nPré-ordem (após rebalancear): ");
    preOrdem(raiz);


    return 0;
}
