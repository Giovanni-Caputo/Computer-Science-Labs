#include <stdio.h>

int main() {
    char tipo;
    float distancia, consumo, preco = 0, custo;

    printf("Digite o tipo de combustível (G - Gasolina, A - Álcool, D - Diesel): ");
    scanf(" %c", &tipo);
    printf("Digite a distância da viagem (km): ");
    scanf("%f", &distancia);
    printf("Digite o consumo médio (km/l): ");
    scanf("%f", &consumo);

    if (tipo == 'G' || tipo == 'g')
        preco = 4.79;
    else if (tipo == 'A' || tipo == 'a')
        preco = 2.68;
    else if (tipo == 'D' || tipo == 'd')
        preco = 2.64;
    else {
        printf("Tipo inválido!\n");
        return 0;
    }

    custo = (distancia / consumo) * preco;
    printf("Custo total da viagem: R$ %.2f\n", custo);

    return 0;
}