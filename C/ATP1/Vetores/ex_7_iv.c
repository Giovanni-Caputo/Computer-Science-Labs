#include <stdio.h>

int main (){
    
    int n1, n2, n3;
    
    printf("digite um valor:\n");
    scanf("%d", &n1);
    printf("digite um valor:\n");
    scanf("%d", &n2);
    printf("digite um valor:\n");
    scanf("%d", &n3);
    
    int soma = n1 + n2 + n3;
    
    printf(" a soma entre %d %d e %d é %d", n1, n2, n3, soma);
    return 0;    

}