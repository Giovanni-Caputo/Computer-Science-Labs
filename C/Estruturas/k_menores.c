#include <stdio.h>

#define MAX 100

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
    int n, k;
    int vetor[MAX];

    scanf("%d %d", &n, &k);


    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    ordenarVetor(vetor, n);

    for (int i = 0; i < k; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
