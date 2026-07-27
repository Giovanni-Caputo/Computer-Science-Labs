//Leia quatro notas, com pesos 1, 2, 3 e 4 e imprima sua nota ponderada com duas casas
//decimais.

#include <stdio.h>

int main (){
    float n1, n2, n3, n4, media;
    printf("digite a primeira nota:\n");
    scanf("%f", &n1);
    printf("digite a segunda nota:\n");
    scanf("%f", &n2);
    printf("digite a terceira nota:\n");
    scanf("%f", &n3);
    printf("digite a quarta nota:\n");
    scanf("%f", &n4);

    media = (n1 * 1 + n2 * 2 + n3 * 3 + n4 * 4) / 10;
    printf("a media ponderada e %.2f", media);

    return 0;
}