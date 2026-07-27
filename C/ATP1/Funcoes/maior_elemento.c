#include <stdio.h>

int maior(int a, int b, int c) {
    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    return m;
}

int main(void) {
    int x, y, z;
    printf("Digite tres numeros: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Maior: %d\n", maior(x, y, z));
    return 0;
}
