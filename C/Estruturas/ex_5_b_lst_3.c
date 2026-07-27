#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float funcao_menor(float vetor[], int n){
    float menor = vetor[0];

    for(int i = 1; i<n; i++){
        if (vetor[i] < menor){

            menor = vetor[i];

        }
    }
    return menor;
}

int main(){
    float vetor[] = {2.0, 4.0, 5.7, 6.8, 1.3};
    int n = sizeof(vetor) / sizeof(vetor[0]);

    float menor = funcao_menor(vetor, n);
    printf("O menor numero no vetor é: %.2f\n", menor);
   
    return 0;


}