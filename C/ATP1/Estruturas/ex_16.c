#include <stdio.h>

int main() {
    int num;
    int res[11];   // 0 até 10

    printf("Digite um número para a tabuada: ");
    scanf("%d", &num);

    // Calcula e armazena no vetor
    for(int i = 0; i <= 10; i++) {
        res[i] = num * i;
    }

    // Mostra no formato pedido
    printf("\nTabuada do %d:\n", num);
    for(int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, res[i]);
    }

    return 0;
}