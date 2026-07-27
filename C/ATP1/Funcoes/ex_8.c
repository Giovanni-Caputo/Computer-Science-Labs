//Dados os valores positivos para A, B, e C, verificar se estes podem ser comprimentos dos lados de
//um triângulo. Caso afirmativo, verificar se o triângulo é: (a) equilátero, (b) isósceles, (c) escaleno.
//NOTA: Dados de entrada: A, B e C; Dados de saída: Mensagens: “triângulo equilátero”, “triângulo
//isósceles”, “triângulo escaleno”, ou ainda “não é um triângulo”. Considere: a) triângulo, figura
//geométrica composta por três lados, em que cada lado é menor do que a soma dos outros dois; b)
//triângulo equilátero, um triângulo com três lados iguais; c) triângulo isósceles, um triângulo com
//dois lados iguais; d) triângulo escaleno, um triângulo com todos os lados diferentes.

#include <stdio.h>

int main() {
    float A, B, C;

    printf("Digite os comprimentos dos lados do triângulo (A, B, C): ");
    scanf("%f %f %f", &A, &B, &C);

    if (A < B + C && B < A + C && C < A + B) {
        if (A == B && B == C) {
            printf("Triângulo equilátero\n");
        } else if (A == B || B == C || A == C) {
            printf("Triângulo isósceles\n");
        } else {
            printf("Triângulo escaleno\n");
        }
    } else {
        printf("Não é um triângulo\n");
    }

    return 0;
}

