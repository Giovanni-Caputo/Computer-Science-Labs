#include <stdio.h>

int main() {
    int A[10], B[10];
    int j = 0;   // índice para o vetor B

    printf("Digite 10 números para o vetor A:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    // Copia apenas positivos
    for(int i = 0; i < 10; i++) {
        if (A[i] > 0) {
            B[j] = A[i];
            j++;
        }
    }

    printf("\nVetor A: ");
    for(int i = 0; i < 10; i++) printf("%d ", A[i]);

    printf("\nVetor B (apenas positivos): ");
    for(int i = 0; i < j; i++) printf("%d ", B[i]);
    printf("\n");

    return 0;
}