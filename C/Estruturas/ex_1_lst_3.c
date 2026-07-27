#include <stdio.h>
#include <stdlib.h>

int funcao_arvore(int n){
   
    int i;
   
    for(i = 1; i< n; i++){
       
        for (int j = 0; j < n - i; j++){
            printf(" ");
        }
   
   
    for(int k = 0; k < 2 * i - 1; k++){
       
        printf("*");
    }
   
    printf("\n");
    }

}

int main(){
   
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
   
    funcao_arvore(n);
   
    return 0;
}