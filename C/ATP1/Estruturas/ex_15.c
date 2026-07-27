#include <stdio.h>

int main() {
    float salario, reajustado;
    float total_base = 0, total_reajustado = 0;
    char continuar;

    printf("=== REAJUSTE DE SALÁRIO - EMPRESA AB ===\n\n");

    for(int i = 1; i <= 10; i++) {
        printf("Funcionário %d - Digite o salário base: R$ ", i);
        scanf("%f", &salario);

        if (salario < 500.0)
            reajustado = salario * 1.15;
        else if (salario <= 1000.0)
            reajustado = salario * 1.10;
        else
            reajustado = salario * 1.05;

        total_base += salario;
        total_reajustado += reajustado;

        printf("Salário base: R$ %.2f | Reajustado: R$ %.2f\n", salario, reajustado);
    }

    printf("\n");
    printf("======================================\n");
    printf("Total Salários Base     : R$ %.2f\n", total_base);
    printf("Total Salários Reajustados: R$ %.2f\n", total_reajustado);
    printf("======================================\n");

    return 0;
}