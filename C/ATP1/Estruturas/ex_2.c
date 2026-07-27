#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[1000];
    int soma = 0, soma_pares = 0, soma_impares = 0;
    int qtd_pares = 0, qtd_impares = 0;

    srand(time(NULL));  // semente para números aleatórios

    // Gerar os 1000 números
    for(int i = 0; i < 1000; i++) {
        vetor[i] = rand() % 1000;  // números de 0 a 999
        soma += vetor[i];

        if(vetor[i] % 2 == 0) {
            soma_pares += vetor[i];
            qtd_pares++;
        } else {
            soma_impares += vetor[i];
            qtd_impares++;
        }
    }

    printf("Média geral: %.2f\n", (float)soma / 1000);
    printf("Média dos pares: %.2f\n", qtd_pares > 0 ? (float)soma_pares / qtd_pares : 0);
    printf("Média dos ímpares: %.2f\n", qtd_impares > 0 ? (float)soma_impares / qtd_impares : 0);
    printf("Quantidade de pares: %d\n", qtd_pares);
    printf("Quantidade de ímpares: %d\n", qtd_impares);

    return 0;
}