#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main() {
    char expressao[MAX];

    fgets(expressao, MAX, stdin);

    if (expressao[strlen(expressao) - 1] == '\n') {
        expressao[strlen(expressao) - 1] = '\0';
    }

    int resultado = verificar(expressao);

    if (resultado == 1) {
        printf("1\n");
    } else {
        printf("-1\n");
    }

    return 0;
}

struct Pilha {
    char itens[MAX];
    int topo;
};

void inicializar(struct Pilha* pilha) {
    pilha->topo = -1;
}

int vazia_p(struct Pilha* pilha) {
    return pilha->topo == -1;
}

void empilhar(struct Pilha* pilha, char caractere) {
    pilha->itens[++pilha->topo] = caractere;
}

char desempilhar(struct Pilha* pilha) {
    if (!vazia_p(pilha)) {
        return pilha->itens[pilha->topo--];
    }
    return '\0';
}

int verificar(char* expressao) {
    struct Pilha pilha;
    inicializar(&pilha);

    for (int i = 0; expressao[i] != '\0'; i++) {
        char caractere = expressao[i];

        if (caractere == '(' || caractere == '[' || caractere == '{') {
            empilhar(&pilha, caractere);
        }
        else if (caractere == ')' || caractere == ']' || caractere == '}') {
            if (vazia_p(&pilha)) {
                return -1;
            }

            char topo = desempilhar(&pilha);

            if ((caractere == ')' && topo != '(') || (caractere == ']' && topo != '[') || (caractere == '}' && topo != '{')) { //socorro
                return -1;
            }
        }
    }

    if (vazia_p(&pilha)) {
        return 1;
    } else {
        return -1;
    }
}
