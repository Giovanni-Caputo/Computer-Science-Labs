#include <stdio.h>

int main() {
    int codigo, i;

    for(i = 1; i <= 10; i++) {
        printf("\nProduto %d - Digite o código de origem: ", i);
        scanf("%d", &codigo);

        printf("Procedência: ");

        if (codigo == 1) printf("Sul\n");
        else if (codigo == 2) printf("Norte\n");
        else if (codigo == 3) printf("Leste\n");
        else if (codigo == 4) printf("Oeste\n");
        else if (codigo == 5 || codigo == 6) printf("Nordeste\n");
        else if (codigo >= 7 && codigo <= 9) printf("Sudeste\n");
        else if (codigo == 10 || codigo == 11) printf("Centro-Oeste\n");
        else if (codigo >= 12 && codigo <= 15) printf("Nordeste\n");
        else printf("Importado\n");
    }

    return 0;
}