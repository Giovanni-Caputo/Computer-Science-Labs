//Construa um algoritmo que leia um conjunto de dados contendo altura e sexo (“M” para masculino
//e “F”para feminino) de 50 pessoas. O algoritmo deve permitir apenas entradas válidas, “M” ou
//“F”. Calcular e escrever:
//a) altura: a maior e a menor de cada grupo;
//b) a altura média das mulheres;
//c) o número de homens e a diferença (em porcentagem) entre estes e as mulheres.

#include <stdio.h>

int main() {
    char sexo;
    float altura, maior_masc = 0, menor_masc = 999, maior_fem = 0, menor_fem = 999;
    float soma_altura_fem = 0;
    int count_masc = 0, count_fem = 0;

    for (int i = 0; i < 50; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo); // Adiciona um espaço antes de %c para ignorar o newline

        while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
            printf("Entrada inválida. Digite o sexo (M/F): ");
            scanf(" %c", &sexo);
        }

        printf("Digite a altura: ");
        scanf("%f", &altura);

        if (sexo == 'M' || sexo == 'm') {
            count_masc++;
            if (altura > maior_masc) {
                maior_masc = altura;
            }
            if (altura < menor_masc) {
                menor_masc = altura;
            }
        } else {
            count_fem++;
            soma_altura_fem += altura;
            if (altura > maior_fem) {
                maior_fem = altura;
            }
            if (altura < menor_fem) {
                menor_fem = altura;
            }
        }
    }

    printf("\nMaior altura masculina: %.2f\n", maior_masc);
    printf("Menor altura masculina: %.2f\n", menor_masc);
    printf("Maior altura feminina: %.2f\n", maior_fem);
    printf("Menor altura feminina: %.2f\n", menor_fem);     
}