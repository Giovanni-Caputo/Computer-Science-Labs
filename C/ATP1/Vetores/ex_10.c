#include <stdio.h>

int main(){
    float a, b, c, d, e, f;
    float x;
    

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    printf("Digite o valor de d: ");
    scanf("%f", &d);
    printf("Digite o valor de e: ");
    scanf("%f", &e);
    printf("Digite o valor de f: ");
    scanf("%f", &f);

    x = (a + (b / c)) / (d - 2 * (e / f )) + 4 * a;

    printf("O resultado da expressao e: %.2f\n", x);
    return 0;

}