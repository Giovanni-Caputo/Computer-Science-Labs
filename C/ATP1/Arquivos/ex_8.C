//Apresentar os números que são divisíveis por 4 no intervalo de 1 a 200. Não usar o operador mod
//(%).

#include <stdio.h>

int main() {
    printf("Números divisíveis por 4 entre 1 e 200:\n");
    for (int i = 1; i <= 200; i++) {
        if (i / 4 * 4 == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
