//Escreva um programa que receba dois caracteres do alfabeto ASCII digitados pelo usuário no
//terminal e diga se o primeiro vem antes ou depois do segundo na tabela ASCII.

#include <stdio.h>

int main (){
    char char1, char2;
    printf("Digite o primeiro caractere: ");
    scanf("%c", &char1);
    printf("Digite o segundo caractere: ");
    scanf(" %c", &char2); // Adiciona um espaço antes de %c para ignorar o newline

    if (char1 < char2) {
        printf("O caractere '%c' vem antes de '%c' na tabela ASCII.\n", char1, char2);
    } else if (char1 > char2) {
        printf("O caractere '%c' vem depois de '%c' na tabela ASCII.\n", char1, char2);
    } else {
        printf("Os caracteres são iguais.\n");
    }

    return 0;
}

