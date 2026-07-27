//Faça um algoritmo para calcular o valor da conta de energia elétrica de uma residência. O valor de
//cada kWh é R$ 0,10. Considere que o algoritmo deve aplicar um desconto de 15% na conta de
//pessoas aposentadas.

#include <stdio.h>

int main() {
    float kWh, valor_conta, valor_desconto;
    int aposentado;

    printf("Digite a quantidade de kWh consumidos: ");
    scanf("%f", &kWh);

    printf("Você é aposentado? (1 para sim, 0 para não): ");
    scanf("%d", &aposentado);

    valor_conta = kWh * 0.10;

    if (aposentado == 1) {
        valor_desconto = valor_conta * 0.15;
        printf("Valor da conta com desconto: R$ %.2f\n", valor_conta - valor_desconto);
    } else {
        printf("Valor da conta sem desconto: R$ %.2f\n", valor_conta);
    }

    return 0;
}