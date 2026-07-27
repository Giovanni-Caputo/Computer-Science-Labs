#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int valor;
    struct Node* prox;
} Node;

Node* criarNode(int valor) {
    Node* novoNode = (Node*)malloc(sizeof(Node));
    if (novoNode != NULL) {
        novoNode->valor = valor;
        novoNode->prox = NULL;
    }
    return novoNode;
}

void inserirNoFinal(Node** lista, int valor) {
    Node* novoNode = criarNode(valor);
    if (*lista == NULL) {
        *lista = novoNode;
    } else {
        Node* temp = *lista;
        while (temp->prox != NULL) {
            temp = temp->prox;
        }
        temp->prox = novoNode;
    }
}

int existeElemento(Node* lista, int valor) {
    Node* temp = lista;
    while (temp != NULL) {
        if (temp->valor == valor) {
            return 1;
        }
        temp = temp->prox;
    }
    return 0;
}

void imprimirLista(Node* lista) {
    Node* temp = lista;
    while (temp != NULL) {
        printf("%d ", temp->valor);
        temp = temp->prox;
    }
    printf("\n");
}

int main() {
    int M, N, valor;
    Node* L = NULL;
    Node* H = NULL;

    scanf("%d", &M);
    scanf("%d", &N);

    for (int i = 0; i < M; i++) {
        scanf("%d", &valor);
        inserirNoFinal(&L, valor);
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &valor);
        inserirNoFinal(&H, valor);
    }

    Node* G = NULL;

    Node* temp = L;
    while (temp != NULL) {
        if (!existeElemento(G, temp->valor)) {
            inserirNoFinal(&G, temp->valor);
        }
        temp = temp->prox;
    }

    temp = H;
    while (temp != NULL) {
        if (!existeElemento(G, temp->valor)) {
            inserirNoFinal(&G, temp->valor);
        }
        temp = temp->prox;
    }

    imprimirLista(G);

    return 0;
}
