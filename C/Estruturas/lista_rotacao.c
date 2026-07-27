#include <stdio.h>
#include <stdlib.h>

struct Node {
    int valor;
    struct Node* prox;
};

void inserirNoFim(struct Node** cabeca, int valor) {
    struct Node* novoNo = (struct Node*)malloc(sizeof(struct Node));
    novoNo->valor = valor;
    novoNo->prox = NULL;
    
    if (*cabeca == NULL) {
        *cabeca = novoNo;
    } else {
        struct Node* temp = *cabeca;
        while (temp->prox != NULL) {
            temp = temp->prox;
        }
        temp->prox = novoNo;
    }
}

void rotacionarLista(struct Node** cabeca, int M) {
    if (*cabeca == NULL || (*cabeca)->prox == NULL || M <= 0) {
        return;
    }
    
    struct Node* temp = *cabeca;
    int N = 1;
    while (temp->prox != NULL) {
        temp = temp->prox;
        N++;
    }

    M = M % N;
    if (M == 0) {
        return;
    }

    temp->prox = *cabeca;

    int novaPos = N - M;
    temp = *cabeca;
    for (int i = 1; i < novaPos; i++) {
        temp = temp->prox;
    }

    *cabeca = temp->prox;
    temp->prox = NULL;
}

void exibirLista(struct Node* cabeca) {
    struct Node* temp = cabeca;
    while (temp != NULL) {
        printf("%d ", temp->valor);
        temp = temp->prox;
    }
    printf("\n");
}

int main() {
    struct Node* lista = NULL;
    int N, M, valor;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &valor);
        inserirNoFim(&lista, valor);
    }

    scanf("%d", &M);

    rotacionarLista(&lista, M);

    exibirLista(lista);

    return 0;
}
