//Leia um valor e incremente-o em 10%, mostrando o resultado final.

#include <stdio.h>

int main (){
    float valor, resultado;
    printf("digite um valor:\n");
    scanf("%f", &valor);

    resultado = valor + (valor * 0.10);
    printf("o valor com o incremento de 10 porcento e %.2f", resultado);

    return 0;
}
