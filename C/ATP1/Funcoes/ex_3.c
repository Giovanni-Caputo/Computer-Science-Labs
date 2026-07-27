//Construa um algoritmo para ler o sexo de uma pessoa (M ou F). Uma mensagem deverá ser emitida
//caso o sexo seja válido.

#include <stdio.h>

int main() {
    char sexo;

    printf("Digite o sexo (M/F): ");
    scanf("%c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        printf("Sexo válido: Masculino\n");
    } else if (sexo == 'F' || sexo == 'f') {
        printf("Sexo válido: Feminino\n");
    } else {
        printf("Sexo inválido. Por favor, digite M ou F.\n");
    }

    return 0;
}