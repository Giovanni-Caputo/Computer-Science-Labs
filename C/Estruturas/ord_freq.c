#include <stdio.h>

#define MAX 100

typedef struct {
    int valor;
    int frequencia;
    int indice;
} Elemento;

int contarFrequencias(int vetor[], int n, Elemento elementos[]) {
    int contador = 0;

    for (int i = 0; i < n; i++) {
        int valor_atual = vetor[i];
        int encontrado = 0;

        for (int j = 0; j < contador; j++) {
            if (elementos[j].valor == valor_atual) {
                elementos[j].frequencia++;
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            elementos[contador].valor = valor_atual;
            elementos[contador].frequencia = 1;
            elementos[contador].indice = i;
            contador++;
        }
    }
    return contador;
}

int comparar(const void *a, const void *b) {
    Elemento *elemA = (Elemento *)a;
    Elemento *elemB = (Elemento *)b;

    if (elemA->frequencia != elemB->frequencia) {
        return elemB->frequencia - elemA->frequencia;
    }

    return elemA->indice - elemB->indice;
}

int main() {
    int N;
    Elemento elementos[MAX];
    int vetor[MAX];

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    int num_elementos_unicos = contarFrequencias(vetor, N, elementos);

    qsort(elementos, num_elementos_unicos, sizeof(Elemento), comparar);


    for (int i = 0; i < num_elementos_unicos; i++) {
        for (int j = 0; j < elementos[i].frequencia; j++) {
            printf("%d ", elementos[i].valor);
        }
    }
    printf("\n");

    return 0;
}
