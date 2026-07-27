#include <stdio.h>


float encontrarMaior(float vetor[], int n) {
     
    float maior = vetor[0];
   

    for (int i = 1; i < n; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
   
    return maior;
}

int main() {

    float vetor[] = {1.2, 3.5, 2.8, 4.1, 0.9};
    int n = sizeof(vetor) / sizeof(vetor[0]);
   
   
    float maior = encontrarMaior(vetor, n);
    printf("O maior número no vetor é: %.2f\n", maior);
   
    return 0;
}
