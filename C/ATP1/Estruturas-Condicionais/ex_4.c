//Prática  2  (Desafio).  Escreva  um  programa  em  linguagem  C  para  ler  dois  valores  inteiros,  realizar  a  soma  e 
//apresentar  o  resultado. Use  o  endereço    https://www.onlinegdb.com/online_c_compiler  para  testar  seu 
//código

#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("A soma de %d e %d é: %d\n", num1, num2, sum);

    return 0;
}
