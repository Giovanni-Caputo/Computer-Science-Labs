#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num >= 20 && num <= 100) {
        printf("O número %d está no intervalo de 20 a 100.\n", num);
    } else {
        printf("O número %d está fora do intervalo de 20 a 100.\n", num);
    }

    return 0;
}