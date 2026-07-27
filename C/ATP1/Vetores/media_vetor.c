#include <stdio.h>

int main(void) {
    int n;
    printf("Quantos numeros? ");
    scanf("%d", &n);

    int vetor[100];
    int soma = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    printf("Media: %.2f\n", (float) soma / n);
    return 0;
}
