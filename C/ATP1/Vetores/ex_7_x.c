#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int n1, sucessor, antecessor;
    printf("digite um valor:\n");
    scanf("%d", &n1);

    sucessor = n1 + 1;
    antecessor = n1 - 1;
    printf("o sucessor de %d e %d e o antecessor e %d", n1, sucessor, antecessor);

    return 0;
}