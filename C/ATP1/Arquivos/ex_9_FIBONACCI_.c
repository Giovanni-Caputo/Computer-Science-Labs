//Elaborar um programa para apresentar a série de Fibonacci até o décimo quinto termo. A série é
//formada pela sequência 1, 1, 2, 3, 5, 8, 13, 21, 34, ..., etc. Esta série é caracterizada pela soma de um
//termo posterior com o seu anterior subsequente.

#include <stdio.h>

int main() {
    int n = 15, t1 = 1, t2 = 1, nextTerm;

    printf("Série de Fibonacci até o %dº termo:\n", n);
    printf("%d, %d", t1, t2);

    for (int i = 3; i <= n; i++) {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");

    return 0;
}

