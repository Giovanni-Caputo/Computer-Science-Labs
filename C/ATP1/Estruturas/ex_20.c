#include <stdio.h>

int main() {
    int A[10], B[10], C[10], D[10];
    int somaA = 0, somaB = 0;

    printf("Digite 10 números para o vetor A:\n");
    for(int i = 0; i < 10; i++) scanf("%d", &A[i]);

    printf("Digite 10 números para o vetor B:\n");
    for(int i = 0; i < 10; i++) scanf("%d", &B[i]);

    // a) soma dos elementos de A e B
    for(int i = 0; i < 10; i++) {
        somaA += A[i];
        somaB += B[i];
        C[i] = A[i] + B[i];     // soma vetores
        D[i] = A[i] - B[i];     // subtração vetores
    }

    printf("\nSoma dos elementos de A: %d\n", somaA);
    printf("Soma dos elementos de B: %d\n", somaB);
    printf("Vetor C (A + B): ");
    for(int i = 0; i < 10; i++) printf("%d ", C[i]);
    printf("\nVetor D (A - B): ");
    for(int i = 0; i < 10; i++) printf("%d ", D[i]);
    printf("\n");

    return 0;
}