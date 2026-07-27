#include <stdio.h>

int main() {
    int VIN[10];
    int VAI[30];

    printf("Digite 10 números inteiros para o vetor VIN:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &VIN[i]);
    }

    // Cada elemento de VIN é copiado 3 vezes em VAI
    for(int i = 0; i < 10; i++) {
        VAI[i*3]     = VIN[i];
        VAI[i*3 + 1] = VIN[i];
        VAI[i*3 + 2] = VIN[i];
    }

    printf("\nVetor VAI expandido:\n");
    for(int i = 0; i < 30; i++) {
        printf("%d ", VAI[i]);
    }
    printf("\n");

    return 0;
}