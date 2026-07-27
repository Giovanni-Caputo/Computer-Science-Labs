#include <stdio.h>

int main() {
    float p1, p2, t, mf;
    int faltas;

    printf("Digite as notas P1, P2 e T: ");
    scanf("%f %f %f", &p1, &p2, &t);
    printf("Digite o total de faltas: ");
    scanf("%d", &faltas);

    mf = (p1 + p2 + t) / 3.0;

    if (mf >= 5.0 && faltas <= 9) {
        printf("Média Final: %.2f - Aprovado!\n", mf);
    } else {
        printf("Média Final: %.2f - Reprovado!\n", mf);
    }

    return 0;
}