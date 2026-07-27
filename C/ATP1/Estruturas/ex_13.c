#include <stdio.h>

int main() {
    int A[5];
    int maior_diff = 0;
    int pos_i = 0, pos_j = 0;

    printf("Digite 5 números inteiros:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }

    // Encontrar a maior diferença entre consecutivos
    for(int i = 0; i < 4; i++) {
        int diff = A[i+1] - A[i];
        if (diff < 0) diff = -diff;   // valor absoluto

        if (diff > maior_diff) {
            maior_diff = diff;
            pos_i = i;
            pos_j = i + 1;
        }
    }

    printf("\nMaior diferença: %d\n", maior_diff);
    printf("Entre os índices %d e %d (valores %d e %d)\n", pos_i, pos_j, A[pos_i], A[pos_j]);

    return 0;
}