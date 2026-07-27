#include <stdio.h>

int main() {
    int codigo;
    char continuar;

    do {
        printf("\nDigite o código do produto: ");
        scanf("%d", &codigo);

        if (codigo == 1)
            printf("Alimento não perecível\n");
        else if (codigo >= 2 && codigo <= 4)
            printf("Alimento perecível\n");
        else if (codigo == 5 || codigo == 6)
            printf("Vestuário\n");
        else if (codigo == 7)
            printf("Higiene pessoal\n");
        else if (codigo >= 8 && codigo <= 13)
            printf("Limpeza e utensílios domésticos\n");
        else
            printf("Código inválido\n");

        printf("\nDeseja continuar? (S/N): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    return 0;
}