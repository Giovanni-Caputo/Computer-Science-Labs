#include <stdio.h>

int main() {
    float kwh, valor = 0.0;
    char continuar;

    do {
        printf("\nDigite o consumo em kWh: ");
        scanf("%f", &kwh);
        valor = 0.0;

        if (kwh <= 50) {
            valor = kwh * 1.00;
        }
        else if (kwh <= 100) {
            valor = 50 * 1.00 + (kwh - 50) * 1.30;
        }
        else if (kwh <= 150) {
            valor = 50*1.00 + 50*1.30 + (kwh - 100)*1.60;
        }
        else {
            valor = 50*1.00 + 50*1.30 + 50*1.60 + (kwh - 150)*2.00;
        }

        printf("Valor da conta: R$ %.2f\n", valor);

        printf("Deseja calcular outra conta? (S/N): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    return 0;
}