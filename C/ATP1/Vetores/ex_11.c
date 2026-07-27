#include <stdio.h>

int main () {

    float aumento;
    float salario_atual, salario_novo;
    float percentual_aumento;
    
    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &salario_atual);

    printf("Digite o percentual de aumento: ");
    scanf("%f", &aumento);

    percentual_aumento = aumento / 100.0;
    salario_novo = salario_atual + (salario_atual * percentual_aumento);

    printf("O novo salario do funcionario e: R$ %.2f\n", salario_novo);
    printf("O aumento salarial foi de: R$ %.2f\n", salario_novo - salario_atual);

    return 0;

}