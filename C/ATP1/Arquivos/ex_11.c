//Um hotel cobra R$300,00 por diária e mais uma taxa adicional de serviços. Se a diária for menor
//que 15, a taxa é de R$20,00. Se o número de diárias for igual a 15, a taxa é de R$14,00. Se o
//número for maior que 15, a taxa é de R$ 12,00. Considere que há 200 hóspedes e que para cada um
//existe um registro com nome, endereço, fone, cidade, estado e o número de diárias. Faça um
//programa que escreva: os dados pessoais e o total a pagar de cada hóspede; o total ganho pelo hotel
//e total de diárias.

#include <stdio.h>
#include <string.h>

int main() {
    char nome[100], endereco[200], fone[20], cidade[50], estado[20];
    int diarias;
    float total_pagar, total_ganho = 0;
    int total_diarias = 0;

    for (int i = 0; i < 200; i++) {
        printf("Hóspede %d:\n", i + 1);
        printf("Nome: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0'; // Remove o newline

        printf("Endereço: ");
        fgets(endereco, sizeof(endereco), stdin);
        endereco[strcspn(endereco, "\n")] = '\0'; // Remove o newline

        printf("Fone: ");
        fgets(fone, sizeof(fone), stdin);
        fone[strcspn(fone, "\n")] = '\0'; // Remove o newline

        printf("Cidade: ");
        fgets(cidade, sizeof(cidade), stdin);
        cidade[strcspn(cidade, "\n")] = '\0'; // Remove o newline

        printf("Estado: ");
        fgets(estado, sizeof(estado), stdin);
        estado[strcspn(estado, "\n")] = '\0'; // Remove o newline

        printf("Número de diárias: ");
        scanf("%d", &diarias);
        getchar(); // Limpa o buffer do teclado

        if (diarias < 15) {
            total_pagar = diarias * 300 + 20;
        } else if (diarias == 15) {
            total_pagar = diarias * 300 + 14;
        } else {
            total_pagar = diarias * 300 + 12;
        }

        printf("Total a pagar para %s: R$ %.2f\n\n", nome, total_pagar);

        total_ganho += total_pagar;
        total_diarias += diarias;
    }

    printf("Total ganho pelo hotel: R$ %.2f\n", total_ganho);
    printf("Total de diárias: %d\n", total_diarias);

    return 0;
}

