#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Digite tres valores: ");
    scanf("%d %d %d", &a, &b, &c);

    int maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;

    printf("O maior valor e: %d\n", maior);
    return 0;
}
