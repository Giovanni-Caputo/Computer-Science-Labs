#include <stdio.h>
#include <stdlib.h>
#include "AVL.h"

No* criarNo(int chave) {
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->chave = chave;
    novoNo->esq = NULL;
    novoNo->dir = NULL;
    novoNo->altura = 1;
    return novoNo;
}

// Funcao altura do nó
int altura(No* no) {
    if (no == NULL) {
        return 0;
    }
    return no->altura;
}

// Função fator balanceamento
int fatorBalanceamento(No* no) {
    if (no == NULL) {
        return 0;
    }
    return altura(no->esq) - altura(no->dir);
}

// rot direita
No* rotacionarDireita(No* y) {
    No* x = y->esq;
    No* T2 = x->dir;

    // rotacao 
    x->dir = y;
    y->esq = T2;

    // alturas arrumadas
    y->altura = 1 + (altura(y->esq) > altura(y->dir) ? altura(y->esq) : altura(y->dir));
    x->altura = 1 + (altura(x->esq) > altura(x->dir) ? altura(x->esq) : altura(x->dir));

    return x;
}

// rot esquerda
No* rotacionarEsquerda(No* x) {
    No* y = x->dir;
    No* T2 = y->esq;

    // rotacao
    y->esq = x;
    x->dir = T2;

    // alturas arrumadas dnv
    x->altura = 1 + (altura(x->esq) > altura(x->dir) ? altura(x->esq) : altura(x->dir));
    y->altura = 1 + (altura(y->esq) > altura(y->dir) ? altura(y->esq) : altura(y->dir));

    return y;
}

// funcao nó na arvore
No* inserir(No* no, int chave) {

    if (no == NULL) {
        return criarNo(chave);
    }

    if (chave < no->chave) {
        no->esq = inserir(no->esq, chave);
    } else if (chave > no->chave) {
        no->dir = inserir(no->dir, chave);
    } else { 
        return no;
    }

    no->altura = 1 + (altura(no->esq) > altura(no->dir) ? altura(no->esq) : altura(no->dir));

    int balanceamento = fatorBalanceamento(no);

    if (balanceamento > 1 && chave < no->esq->chave) {
        return rotacionarDireita(no);
    }

    if (balanceamento < -1 && chave > no->dir->chave) {
        return rotacionarEsquerda(no);
    }

    if (balanceamento > 1 && chave > no->esq->chave) {
        no->esq = rotacionarEsquerda(no->esq);
        return rotacionarDireita(no);
    }

    if (balanceamento < -1 && chave < no->dir->chave) {
        no->dir = rotacionarDireita(no->dir);
        return rotacionarEsquerda(no);
    }

    return no;
}

// funcao que remove um nó
No* remover(No* raiz, int chave) {
    if (raiz == NULL) {
        return raiz;
    }

    if (chave < raiz->chave) {
        raiz->esq = remover(raiz->esq, chave);
    } else if (chave > raiz->chave) {
        raiz->dir = remover(raiz->dir, chave);
    } else {
        if (raiz->esq == NULL || raiz->dir == NULL) {
            No* temp = raiz->esq ? raiz->esq : raiz->dir;
            if (temp == NULL) {
                temp = raiz;
                raiz = NULL;
            } else {
                *raiz = *temp;
            }
            free(temp);
        } else {
            No* temp = raiz->dir;
            while (temp && temp->esq != NULL) {
                temp = temp->esq;
            }
            raiz->chave = temp->chave;
            raiz->dir = remover(raiz->dir, temp->chave);
        }
    }

    if (raiz == NULL) {
        return raiz;
    }

    raiz->altura = 1 + (altura(raiz->esq) > altura(raiz->dir) ? altura(raiz->esq) : altura(raiz->dir));

    int balanceamento = fatorBalanceamento(raiz);

    if (balanceamento > 1 && fatorBalanceamento(raiz->esq) >= 0) {
        return rotacionarDireita(raiz);
    }

    if (balanceamento < -1 && fatorBalanceamento(raiz->dir) <= 0) {
        return rotacionarEsquerda(raiz);
    }

    if (balanceamento > 1 && fatorBalanceamento(raiz->esq) < 0) {
        raiz->esq = rotacionarEsquerda(raiz->esq);
        return rotacionarDireita(raiz);
    }

    if (balanceamento < -1 && fatorBalanceamento(raiz->dir) > 0) {
        raiz->dir = rotacionarDireita(raiz->dir);
        return rotacionarEsquerda(raiz);
    }

    return raiz;
}

// funcao da arvore em ordem
void imprimirEmOrdem(No* raiz) {
    if (raiz != NULL) {
        imprimirEmOrdem(raiz->esq);
        printf("%d ", raiz->chave);
        imprimirEmOrdem(raiz->dir);
    }
}

void liberarArvore(No* raiz) {
    if (raiz != NULL) {
        liberarArvore(raiz->esq);
        liberarArvore(raiz->dir);
        free(raiz);
    }
}
