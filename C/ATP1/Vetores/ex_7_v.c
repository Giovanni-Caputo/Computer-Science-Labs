#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int n1, n2;
    
    printf("digite um valor:\n");
    scanf("%d", &n1);
    printf("digite um valor:\n");
    scanf("%d", &n2);
    
    int multiplicacao = n1 * n2;
    
    printf(" a multiplicacao entre %d e %d é %d", n1, n2, multiplicacao);
    return 0;    

}