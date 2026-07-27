//Prática 4 (Desafio). Escreva um programa em linguagem C para ler duas notas (tipo real), calcular a média e 
//informar se a média obtida é maior ou igual a 5,0. Use o endereço https://www.onlinegdb.com/online_c_compiler para testar seu código.

#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 5.0) {
        printf("A média é %.2f. Aprovado!\n", media);
    } else {
        printf("A média é %.2f. Reprovado!\n", media);
    }

    return 0;
}