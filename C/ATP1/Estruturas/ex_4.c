#include <stdio.h>

int main() {
    int A[5], B[5], C[5];

    printf("Digite 5 números para o vetor A:\n");
    for(int i = 0; i < 5; i++) scanf("%d", &A[i]);

    printf("Digite 5 números para o vetor B:\n");
    for(int i = 0; i < 5; i++) scanf("%d", &B[i]);

    // Multiplicação invertida: A[0]*B[4], A[1]*B[3], ...
    for(int i = 0; i < 5; i++) {
        C[i] = A[i] * B[4 - i];
    }

    printf("\nVetor C (resultado):\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}