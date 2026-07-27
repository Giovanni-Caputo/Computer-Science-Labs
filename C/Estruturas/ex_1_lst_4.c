#include <stdio.h>
#include <stdlib.h>

void func_matriz (int m, int n, int **matriz){
    printf("Digite os elementos da matriz:\n");

    for(int i = 0; i< m; i++){
        for (int j = 0; j< n; j++){
           printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
}

int soma_diagonal_sec(int m, int n, int **matriz) {
    int soma = 0;
    for (int i = 0; i < m; i++) {
        int coluna = n - i - 1;
        if(coluna >= 0 && coluna < n){
            soma += matriz[i][coluna];
        }
 
    }
    return soma;
}

int main(){


    int m, n;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &m);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &n);

    int **matriz = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) {
        matriz[i] = (int *)malloc(n * sizeof(int));
    }
    
    func_matriz(m, n, matriz);
    int soma = soma_diagonal_sec(m, n, matriz);

    printf("A soma dos elementos da diagonal secundária é: %d\n", soma);

    for (int i = 0; i < m; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}