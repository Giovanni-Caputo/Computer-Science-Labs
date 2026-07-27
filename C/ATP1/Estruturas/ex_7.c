#include <stdio.h>

int main() {
    int estoque[5] = {0};
    float preco[5] = {10.0, 20.0, 30.0, 40.0, 50.0};
    int opcao, produto, qtd;
    char continuar = 'S';

    while (continuar == 'S' || continuar == 's') {
        printf("\n=== CONTROLE DE ESTOQUE ===\n");
        printf("1. Aumentar estoque\n");
        printf("2. Baixar estoque\n");
        printf("3. Visualizar estoque de um produto\n");
        printf("4. Visualizar estoque total\n");
        printf("5. Aumentar preço\n");
        printf("6. Diminuir preço\n");
        printf("7. Trocar produto\n");
        printf("8. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: // Aumentar
                printf("Produto (0-4): "); scanf("%d", &produto);
                printf("Quantidade: "); scanf("%d", &qtd);
                if(produto >= 0 && produto < 5) estoque[produto] += qtd;
                break;

            case 2: // Baixar
                printf("Produto (0-4): "); scanf("%d", &produto);
                printf("Quantidade: "); scanf("%d", &qtd);
                if(produto >= 0 && produto < 5 && estoque[produto] >= qtd)
                    estoque[produto] -= qtd;
                else printf("Estoque insuficiente!\n");
                break;

            case 3: // Visualizar um
                printf("Produto (0-4): "); scanf("%d", &produto);
                if(produto >= 0 && produto < 5)
                    printf("Estoque[%d] = %d | Preço = R$ %.2f\n", produto, estoque[produto], preco[produto]);
                break;

            case 4: // Total
                printf("Estoque total:\n");
                for(int i = 0; i < 5; i++)
                    printf("Produto %d: %d unidades\n", i, estoque[i]);
                break;

            case 8:
                continuar = 'N';
                break;

            default:
                printf("Opção inválida!\n");
        }
    }

    printf("Programa encerrado.\n");
    return 0;
}