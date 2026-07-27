#include <stdio.h>

int main() {
    int V[10] = {2, 6, 8, 3, 10, 9, 1, 21, 33, 14};
    int x = 2, y = 4;

    printf("a) V[x+1] = V[3] = %d\n", V[x+1]);
    printf("b) V[x+2] = V[4] = %d\n", V[x+2]);
    printf("c) V[x+3] = V[5] = %d\n", V[x+3]);
    printf("d) V[y*1] = V[4] = %d\n", V[y*1]);
    printf("e) V[x*3] = V[6] = %d\n", V[x*3]);
    printf("f) V[x*2] = V[4] = %d\n", V[x*2]);
    printf("g) V[x*5] = V[10] = ERRO (índice fora do limite)\n");
    printf("h) V[V[x+y]] = V[V[6]] = V[1] = %d\n", V[V[x+y]]);
    printf("i) V[x+y] = V[6] = %d\n", V[x+y]);
    printf("j) V[8 - V[2]] = V[8-8] = V[0] = %d\n", V[8 - V[2]]);
    printf("k) V[V[4]] = V[10] = ERRO\n");
    printf("l) V[V[V[7]]] = ERRO (muitos níveis)\n");
    printf("m) V[V[1]*V[4]] = V[6*10] = ERRO\n");
    printf("n) V[x+4] = V[6] = %d\n", V[x+4]);

    return 0;
}