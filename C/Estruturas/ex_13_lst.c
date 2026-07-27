#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ponteiro;
    int N;

    // Solicitar o valor de N
    printf("Digite um número inteiro N:\n");
    scanf("%d", &N);

    // Alocar memória dinamicamente para um vetor de N inteiros
    ponteiro = (int*)malloc(sizeof(int) * N);

    // Verificar se a alocação foi bem-sucedida
    if (ponteiro == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1; // Retornar um código de erro
    }

    // Imprimir os endereços de memória dos elementos do vetor
    for (int i = 0; i < N; i++) {
        printf("Endereço do elemento %d: %p\n", i, (void*)&ponteiro[i]);
    }

    // Liberar a memória alocada
    free(ponteiro);

    return 0;
}

