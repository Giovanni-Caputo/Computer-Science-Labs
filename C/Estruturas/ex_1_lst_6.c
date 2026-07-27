#include <stdio.h>
#include <stdlib.h>

// Definindo o tipo Node usando typedef
typedef struct Node {
    int valor;
    struct Node *prox;
} Node;

// Função para criar um novo nó
Node* criarNo(int valor) {
    Node* novoNo = (Node*)malloc(sizeof(Node));
    novoNo->valor = valor;
    novoNo->prox = NULL;
    return novoNo;
}

// Função para inserir um nó no final da lista
void inserirNoFinal(Node** cabeca, int valor) {
    Node* novoNo = criarNo(valor);
    if (*cabeca == NULL) {
        *cabeca = novoNo;  // Se a lista está vazia, o novo nó será a cabeça
    } 
    else {
        Node* temp = *cabeca;
        while (temp->prox != NULL) {
            temp = temp->prox;  // Vai até o final da lista
        }
        temp->prox = novoNo;  // Adiciona o novo nó no final
    }
}

// Função para imprimir a lista
void imprimirLista(Node *lista) {
    while (lista != NULL) {
        printf("%d -> ", lista->valor);
        lista = lista->prox;
    }
    printf("NULL\n");
}

// Função para verificar se duas listas possuem o mesmo conteúdo
int compararListas(Node *L, Node *H) {
    while (L != NULL && H != NULL) {
        if (L->valor != H->valor) {
            return 0; // Diferentes
        }
        L = L->prox;
        H = H->prox;
    }
    
    // Verifica se ambas chegaram ao fim ao mesmo tempo
    if (L == NULL && H == NULL) {
        return 1; // Iguais
    }
    return 0; // Tamanhos diferentes
}

int main() {
    Node* lista1 = NULL;
    Node* lista2 = NULL;
    
    // Inserindo elementos na primeira lista
    inserirNoFinal(&lista1, 1);
    inserirNoFinal(&lista1, 2);
    inserirNoFinal(&lista1, 3);
    
    // Inserindo elementos na segunda lista
    inserirNoFinal(&lista2, 1);
    inserirNoFinal(&lista2, 2);
    inserirNoFinal(&lista2, 3);
    
    // Exibindo as listas
    printf("Lista 1: ");
    imprimirLista(lista1);
    
    printf("Lista 2: ");
    imprimirLista(lista2);
    
    // Comparando as listas
    if (compararListas(lista1, lista2)) {
        printf("As listas possuem o mesmo conteúdo.\n");
    } else {
        printf("As listas são diferentes.\n");
    }
    
    // Liberando a memória
    free(lista1);
    free(lista2);
    
    return 0;
}
