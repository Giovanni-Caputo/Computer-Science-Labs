#include <stdio.h>
#include <math.h>   // para usar fabs()

int main() {
    int n = 0;
    double termo, soma = 0.0;
    double erro;

    printf("Digite o valor do erro (ex: 0.0001): ");
    scanf("%lf", &erro);

    do {
        termo = (double)pow(-1, n) / (2 * n + 1);   // termo geral
        soma += termo;
        n++;
    } while (fabs(termo) >= erro);   // continua enquanto |termo| >= erro

    double pi = 4 * soma;

    printf("\nAproximação de π = %.10f\n", pi);
    printf("Número de termos usados: %d\n", n);

    return 0;
}