#include <stdio.h>

#define MAX 200

void ordenarVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[i] > vetor[j]) {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

int main() {
    int m, n;
    int vetor1[MAX], vetor2[MAX], combinado[MAX];

    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++) {
        scanf("%d", &vetor1[i]);
        combinado[i] = vetor1[i];
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor2[i]);
        combinado[m + i] = vetor2[i];
    }

    int tamanhoCombinado = m + n;
    ordenarVetor(combinado, tamanhoCombinado);

    int mediana;
    if (tamanhoCombinado % 2 == 0) {
        mediana = (combinado[tamanhoCombinado / 2 - 1] + combinado[tamanhoCombinado / 2]) / 2;
    } else {
        mediana = combinado[tamanhoCombinado / 2];
    }

    printf("%d\n", mediana);

    return 0;
}
