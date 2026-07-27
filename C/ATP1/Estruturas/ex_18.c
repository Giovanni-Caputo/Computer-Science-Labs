#include <stdio.h>

int main() {
    int vetor[11] = {0};
    int elemento, indice;

    printf("Digite 10 números inteiros:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite o elemento a ser inserido: ");
    scanf("%d", &elemento);
    printf("Digite a posição (0 a 9): ");
    scanf("%d", &indice);

    if (indice < 0 || indice > 9) {
        printf("Índice inválido!\n");
        return 0;
    }

    // Desloca os elementos para a direita
    for(int i = 9; i >= indice; i--) {
        vetor[i+1] = vetor[i];
    }

    vetor[indice] = elemento;   // insere o novo elemento

    printf("\nVetor após inserção:\n");
    for(int i = 0; i < 11; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}