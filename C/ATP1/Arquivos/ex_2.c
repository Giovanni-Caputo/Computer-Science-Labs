//Faça um programa calcular o valor da conta de energia elétrica de um número indeterminado de
//residências. O valor de cada kWh é R$ 0,10. Considere que residência de pessoa aposentada tem
//um desconto de 15% no valor.

#include <stdio.h>

int main() {
    float kWh, valor_conta, valor_desconto;
    int aposentado;
    char continuar;

    do {
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

        printf("Deseja calcular a conta para outra residência? (S/N): ");
        scanf(" %c", &continuar); // Adiciona um espaço antes de %c para ignorar o newline
    } while (continuar == 'S' || continuar == 's');

    return 0;
}

