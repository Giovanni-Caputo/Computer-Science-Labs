//8. Faça um algoritmo para ler dois números. O primeiro valor deve ser armazenado em uma variável de
//nome A e o segundo na variável B. Realize a troca, tal que B armazena o valor de A e A o valor de B.
//Após a troca, imprima os resultados.

#include <stdio.h>

int main (){
    int n1, n2, temp;
    
    printf("digite um valor:\n");
    scanf("%d", &n1);
    printf("digite um valor:\n");
    scanf("%d", &n2);
    
    temp = n1;
    n1 = n2;
    n2 = temp;
    
    printf("apos a troca, o valor de A e %d e o valor de B e %d", n1, n2);
    return 0;    

}