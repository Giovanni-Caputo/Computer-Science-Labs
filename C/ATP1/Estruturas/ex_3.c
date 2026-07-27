#include <stdio.h>

int main() {
    int A[5], B[5];
    int temp;

    printf("Digite 10 números inteiros (> 0):\n");

    // Lê 5 para A e 5 para B
    for(int i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }
    for(int i = 0; i < 5; i++) {
        scanf("%d", &B[i]);
    }

    // Troca inversa: último de A com primeiro de B, etc.
    for(int i = 0; i < 5; i++) {
        temp = A[4 - i];
        A[4 - i] = B[i];
        B[i] = temp;
    }

    printf("\nVetor A após troca:\n");
    for(int i = 0; i < 5; i++) printf("%d ", A[i]);
    printf("\nVetor B após troca:\n");
    for(int i = 0; i < 5; i++) printf("%d ", B[i]);

    return 0;
}