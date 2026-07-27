//Faça um algoritmo para ler três valores. Os valores devem ser armazenados nas variáveis a, b e c.
//Informar se a média dos números é maior que um dos números digitados.

#include <stdio.h>

int main() {
    float a, b, c, media;

    printf("Digite o primeiro valor: ");
    scanf("%f", &a);

    printf("Digite o segundo valor: ");
    scanf("%f", &b);

    printf("Digite o terceiro valor: ");
    scanf("%f", &c);

    media = (a + b + c) / 3;

    if (media > a || media > b || media > c) {
        printf("A média dos números é maior que um dos números digitados.\n");
    } else {
        printf("A média dos números não é maior que nenhum dos números digitados.\n");
    }

    return 0;
}
