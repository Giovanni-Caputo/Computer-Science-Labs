//O proprietário de uma lanchonete deseja informatizar o seu estabelecimento. Elabore um algoritmo
//para ler o número da mesa e a quantidade dos itens consumidos, definidos em um cardápio resumido.
//O algoritmo d;eve calcular 10% sobre a conta, valor este referente aos serviços prestados. O algoritmo
//deve permitir ler itens contidos no cardápio, que são: Refrigerante?2,50; Cerveja?4,00; Pizza?47,30;
//Almoço?15,00; Porção?10,50.

#include <stdio.h>

int main(void)
{
    int mesa;
    int qtd_refrigerante, qtd_cerveja, qtd_pizza, qtd_almoco, qtd_porcao;
    double preco_refrigerante = 2.50;
    double preco_cerveja = 4.00;
    double preco_pizza = 47.30;
    double preco_almoco = 15.00;
    double preco_porcao = 10.50;
    double subtotal, servico, total;

    printf("Informe o numero da mesa: ");
    if (scanf("%d", &mesa) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Quantidade de Refrigerante: ");
    scanf("%d", &qtd_refrigerante);
    printf("Quantidade de Cerveja: ");
    scanf("%d", &qtd_cerveja);
    printf("Quantidade de Pizza: ");
    scanf("%d", &qtd_pizza);
    printf("Quantidade de Almoco: ");
    scanf("%d", &qtd_almoco);
    printf("Quantidade de Porcao: ");
    scanf("%d", &qtd_porcao);

    subtotal = qtd_refrigerante * preco_refrigerante
             + qtd_cerveja * preco_cerveja
             + qtd_pizza * preco_pizza
             + qtd_almoco * preco_almoco
             + qtd_porcao * preco_porcao;

    servico = subtotal * 0.10;
    total = subtotal + servico;

    printf("\nResumo da conta (Mesa %d):\n", mesa);
    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Servico (10%%): R$ %.2f\n", servico);
    printf("Total: R$ %.2f\n", total);

    return 0;
}




