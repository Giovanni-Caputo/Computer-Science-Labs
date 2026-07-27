#include <stdio.h>

int main() {
    float salario, novo_salario;

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

    return 0;
}