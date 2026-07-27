//Elaborar um algoritmo para calcular o reajuste de salário de um número indeterminado de
//funcionários. Considere que um funcionário receberá um reajuste de 15%, caso seu salário seja
//menor que R$ 500,00. Se o salário for maior ou igual a R$ 500,00, mas menor ou igual a R$
//1.000,00, o reajuste será de 10%. Se o salário for maior que R$ 1.000,00, o reajuste aplicado será de
//5%. Mostrar o salário com reajuste.

#include <stdio.h>

int main() {
    float salario, novo_salario;
    char continuar;

    do {
        printf("Digite o salário do funcionário: R$ ");
        scanf("%f", &salario);

        if (salario < 500.0) {
            novo_salario = salario * 1.15;
        } 
        else if (salario <= 1000.0) {
            novo_salario = salario * 1.10;
        } 
        else {
            novo_salario = salario * 1.05;
        }

        printf("Salário original: R$ %.2f\n", salario);
        printf("Salário com reajuste: R$ %.2f\n", novo_salario);

        printf("Deseja calcular o reajuste para outro funcionário? (S/N): ");
        scanf(" %c", &continuar); // Adiciona um espaço antes de %c para ignorar o newline
    } while (continuar == 'S' || continuar == 's');

    return 0;
}
