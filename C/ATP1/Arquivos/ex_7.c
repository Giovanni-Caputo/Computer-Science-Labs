//Apresentar os resultados de uma tabuada de um número qualquer (digitado pelo usuário). A
//tabuada deve ser escrita no seguinte formato: multiplicando x multiplicador = resultado. (Ex. 2 x 2
//= 4).

#include <stdio.h>

int main() {
    int num;

    printf("Digite um número para ver a tabuada: ");
    scanf("%d", &num);

    printf("Tabuada de %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
