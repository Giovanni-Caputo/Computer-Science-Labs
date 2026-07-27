#include <stdio.h>

int main() {
    int X[5];
    int maior = 0;

    printf("Digite 5 números inteiros:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &X[i]);
        if (X[i] > maior) maior = X[i];
    }

    printf("\nVetor original: ");
    for(int i = 0; i < 5; i++) printf("%d ", X[i]);

    printf("\nVetor após divisão pelo maior (%d):\n", maior);
    for(int i = 0; i < 5; i++) {
        printf("%.2f ", (float)X[i] / maior);
    }
    printf("\n");

    return 0;
}