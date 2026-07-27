//Elaborar um algoritmo para ler um valor inteiro e definir se o mesmo é divisível por 4. Caso não,
//imprimir “número inválido”. Use o operador mod e, em seguida, defina o algoritmo sem esta
//função. Usar seleção (se).

#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    // Usando o operador mod
    if (num % 4 == 0) {
        printf("O número %d é divisível por 4.\n", num);
    } else {
        printf("Número inválido.\n");
    }

    // Sem usar o operador mod
    if (num / 4 * 4 == num) {
        printf("O número %d é divisível por 4.\n", num);
    } else {
        printf("Número inválido.\n");
    }

    return 0;
}