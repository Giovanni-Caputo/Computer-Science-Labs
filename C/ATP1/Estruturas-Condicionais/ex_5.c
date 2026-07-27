//Prática 3 (Desafio). Escreva um programa em linguagem C para ler dois números (tipo real), realizar a soma 
//e  apresentar  o  resultado.  Use  o  endereço    https://www.onlinegdb.com/online_c_compiler  para  testar  seu 
//código.

#include <stdio.h>

int main() {
    float num1, num2, sum;

    printf("Digite o primeiro número real: ");
    scanf("%f", &num1);

    printf("Digite o segundo número real: ");
    scanf("%f", &num2);

    sum = num1 + num2;

    printf("A soma de %.2f e %.2f é: %.2f\n", num1, num2, sum);

    return 0;
}
