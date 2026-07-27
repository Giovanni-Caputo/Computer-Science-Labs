//Escreva e teste um programa que exiba na tela os caracteres representados pelos chars de 32
//a 127. Exiba dez caracteres por linha.

#include <stdio.h>

int main (){
    int i;
    for (i = 32; i <= 127; i++) {
        printf("%c ", i);
        if ((i - 31) % 10 == 0) {
            printf("\n");
        }
    }
    return 0;
}
