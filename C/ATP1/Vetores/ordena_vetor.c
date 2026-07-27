#include <stdio.h>

int main(void) {
    int vetor[5] = {5, 1, 4, 2, 3};
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (vetor[i] > vetor[j]) {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    printf("Vetor ordenado: ");
    for (int i = 0; i < 5; i++) printf("%d ", vetor[i]);
    printf("\n");
    return 0;
}
